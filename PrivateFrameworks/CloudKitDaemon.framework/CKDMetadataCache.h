
@interface CKDMetadataCache : CKDSQLiteCache {
    NSObject<OS_dispatch_queue> * _cacheQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)cacheDatabaseSchema;
+ (id)dbFileName;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)appContainerAccountMetadataForAppContainerAccountTuple:(id)arg1;
- (id)applicationMetadataForApplicationID:(id)arg1;
- (id)cacheQueue;
- (id)cachedDSIDForAccountID:(id)arg1;
- (id)containerServerInfoForContainerID:(id)arg1 accountID:(id)arg2;
- (id)dateOfLastTokenUpdate;
- (void)expungeAllData;
- (void)expungeDataForAccountID:(id)arg1;
- (void)expungeOldData;
- (void)expungeStaleAccountIDs;
- (id)globalConfiguration;
- (id)initWithCacheDir:(id)arg1;
- (id)inlock_applicationMetadataForApplicationID:(id)arg1;
- (id)inlock_containerServerInfoForContainerID:(id)arg1 accountID:(id)arg2;
- (void)inlock_expungeDataForAccountID:(id)arg1;
- (void)inlock_setDateOfLastTokenUpdate:(id)arg1;
- (id)knownAppContainerAccountTuples;
- (id)knownAppContainerAccountTuplesForAccountID:(id)arg1;
- (id)knownAppContainerTuples;
- (id)knownApplicationIDs;
- (id)knownContainerizedApplicationIDs;
- (id)publicKeyOfType:(id)arg1 withIdentifier:(id)arg2;
- (id)pushTokenForAppContainerAccountTuple:(id)arg1 filterOldTokens:(bool)arg2;
- (void)removeContainerID:(id)arg1;
- (void)removeKnownApplicationID:(id)arg1;
- (void)setAppContainerAccountMetadata:(id)arg1 forAppContainerAccountTuple:(id)arg2;
- (void)setApplicationMetadata:(id)arg1 forApplicationID:(id)arg2;
- (void)setCacheQueue:(id)arg1;
- (void)setCachedDSID:(id)arg1 forAccountID:(id)arg2;
- (void)setContainerServerInfo:(id)arg1 forContainerID:(id)arg2 accountID:(id)arg3;
- (void)setDateOfLastTokenUpdate:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (void)setPublicKey:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3;
- (void)setPushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2;
- (void)willCreateDatabase;

@end
