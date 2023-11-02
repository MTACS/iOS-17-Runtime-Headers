
@interface HDSharedSummaryCloudSyncManagerServer : HDStandardTaskServer <HKSharedSummaryCloudSyncManagerServerInterface> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_fetchAccountInfoWithCompletion:(id /* block */)arg1;
- (void)remote_pullWithCompletion:(id /* block */)arg1;
- (void)remote_pushWithCompletion:(id /* block */)arg1;

@end
