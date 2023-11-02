
@interface HKCloudSyncControl : NSObject <HKCloudSyncControlClientInterface, _HKXPCExportable> {
    <HKCloudSyncControlDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKCloudSyncControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)arg1;
- (void)clientRemote_syncRequestDidCompleteWithSuccess:(bool)arg1 error:(id)arg2;
- (void)connectionInvalidated;
- (id)defaultChangesSyncRequestForWatch;
- (id)delegate;
- (void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)arg1;
- (void)disableCloudSyncAndDeleteAllCloudDataWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)disableCloudSyncWithCompletion:(id /* block */)arg1;
- (void)enableCloudSyncWithCompletion:(id /* block */)arg1;
- (id)exportedInterface;
- (void)fetchCloudDescriptionWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchCloudSyncProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchCloudSyncRequiredWithCompletion:(id /* block */)arg1;
- (void)fetchCloudSyncStatusWithCompletion:(id /* block */)arg1;
- (void)forceCloudResetWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)arg1;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)initWithHealthStore:(id)arg1;
- (void)oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;
- (void)requestDataRefreshWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)syncWithRequest:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;

@end
