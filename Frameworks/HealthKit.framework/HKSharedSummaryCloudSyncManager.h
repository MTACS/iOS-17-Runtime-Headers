
@interface HKSharedSummaryCloudSyncManager : NSObject <HKSharedSummaryCloudSyncManagerClientInterface, _HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchAccountInfoWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)pullWithCompletion:(id /* block */)arg1;
- (void)pushWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;

@end
