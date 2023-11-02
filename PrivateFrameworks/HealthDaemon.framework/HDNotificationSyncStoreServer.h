
@interface HDNotificationSyncStoreServer : HDStandardTaskServer <HKNotificationSyncStoreServer> {
    NSObject<OS_dispatch_queue> * _queue;
    HDNotificationSyncClient * _syncClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_fakeReceivedNotificationInstruction:(id)arg1 sendingDeviceInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_notificationHoldInstructionsWithCompletion:(id /* block */)arg1;
- (void)remote_obliterateNotificationInstructionsWithCompletion:(id /* block */)arg1;
- (void)remote_sendNewDeviceNotificationWithMessageKind:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_sendNotificationInstruction:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_sendNotificationInstruction:(id)arg1 savingObjectAsExistsCriteria:(id)arg2 completion:(id /* block */)arg3;

@end
