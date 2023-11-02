
@interface HMDCloudManagerDataSource : HMFObject {
    HMDHomeManager * _homeManager;
}

@property (readonly) HMDHomeManager *homeManager;

- (void).cxx_destruct;
- (unsigned long long)dataMigrationOptions;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (bool)isControllerKeyAvailable;
- (bool)isKeychainSyncEnabled;
- (id)keyTransferAgent;
- (id)queryDatabaseOperationWithBlock:(id /* block */)arg1;
- (bool)supportsKeyTransferServer;

@end
