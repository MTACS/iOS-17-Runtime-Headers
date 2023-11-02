
@interface HKNotificationSyncStore : NSObject <HKNotificationSyncStoreClient, _HKXPCExportable> {
    NSString * _clientIdentifier;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fakeReceivedNotificationInstruction:(id)arg1 sendingDeviceInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)getNotificationHoldInstructionsWithCompletion:(id /* block */)arg1;
- (id)initWithClientIdentifier:(id)arg1 healthStore:(id)arg2;
- (void)obliterateNotificationInstructionsWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;
- (void)sendNewDeviceNotificationWithMessageKind:(long long)arg1 completion:(id /* block */)arg2;
- (void)sendNotificationInstruction:(id)arg1 completion:(id /* block */)arg2;
- (void)sendNotificationInstruction:(id)arg1 savingObjectAsExistsCriteria:(id)arg2 completion:(id /* block */)arg3;

@end
