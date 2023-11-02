
@interface FBApplicationDataStoreRepositoryServer : FBSServiceFacility <FBApplicationDataStoreRepositoryServerClientContextDelegate> {
    FBServiceClientAuthenticator * _connectionAuthenticator;
    <FBApplicationDataStoreRepository> * _dataStore;
}

@property (nonatomic, retain) <FBApplicationDataStoreRepository> *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleGetAvailableDataStores:(id)arg1;
- (void)_handleGetObjectForKey:(id)arg1;
- (void)_handleMigrateIdentifier:(id)arg1;
- (void)_handleRemoveAllObjects:(id)arg1;
- (void)_handleRemoveObjectForKey:(id)arg1 context:(id)arg2;
- (void)_handleSetChangesInterest:(id)arg1 context:(id)arg2;
- (void)_handleSetObjectForKey:(id)arg1 context:(id)arg2;
- (void)_handleSetPrefetchedKeys:(id)arg1 context:(id)arg2;
- (void)_handleSynchronize:(id)arg1;
- (id)_init;
- (id)_prerequisiteMilestones;
- (void)applicationDataStoreRepositoryClientContext:(id)arg1 repositoryInvalidatedForAppID:(id)arg2;
- (void)applicationDataStoreRepositoryClientContext:(id)arg1 valueChangedForObject:(id)arg2 key:(id)arg3 appID:(id)arg4;
- (id)dataStore;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)setDataStore:(id)arg1;
- (bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;

@end
