
@interface FBSApplicationDataStore : NSObject {
    <FBSApplicationIdentifying> * _applicationIdentifier;
    NSString * _bundleId;
    <FBSApplicationDataStoreRepositoryClient> * _client;
    bool  _clientNeedsCheckin;
    NSString * _identifier;
    LSApplicationIdentity * _identity;
}

@property (nonatomic, readonly) <FBSApplicationIdentifying> *applicationIdentifier;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) LSApplicationIdentity *identity;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (void)_doWithClassClient:(id /* block */)arg1;
+ (void)_setClassClient:(id)arg1;
+ (id)applicationIdentifiersWithAvailableStores;
+ (id)applicationIdentifiersWithAvailableStoresForBundleID:(id)arg1;
+ (id)applicationIdentitiesWithAvailableStores;
+ (id)applicationsWithAvailableStores;
+ (bool)isServerProcess;
+ (void)setPrefetchedKeys:(id)arg1;
+ (id)storeForApplication:(id)arg1;
+ (id)storeForApplicationIdentifier:(id)arg1;
+ (id)storeForApplicationIdentity:(id)arg1;
+ (void)synchronize;
+ (void)synchronizeWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_initWithBundleId:(id)arg1 identity:(id)arg2 client:(id)arg3;
- (id)applicationIdentifier;
- (id)archivedObjectForKey:(id)arg1;
- (void)archivedObjectForKey:(id)arg1 withResult:(id /* block */)arg2;
- (id)bundleID;
- (void)dealloc;
- (id)description;
- (id)deserializeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)deserializeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id /* block */)arg3;
- (id)identity;
- (id)init;
- (bool)migrateToIdentity:(id)arg1 error:(out id*)arg2;
- (bool)migrateWithError:(out id*)arg1;
- (bool)needsMigration;
- (id)objectForKey:(id)arg1;
- (void)objectForKey:(id)arg1 withResult:(id /* block */)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id /* block */)arg3;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id /* block */)arg3;
- (void)serializeObject:(id)arg1 forKey:(id)arg2;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)_cachedSceneDataStores;
- (id)_createSceneStoreWithIdentifier:(id)arg1 data:(id)arg2;
- (id)_fetchPersistedSceneDataStores;
- (void)_modifyPersistentSceneData:(unsigned long long)arg1 identifier:(id)arg2 data:(id)arg3;
- (void)_removeAllPersistentSceneData;
- (void)_setCachedSceneDataStores:(id)arg1;
- (void)enumerateSceneStoresUsingBlock:(id /* block */)arg1;
- (void)removeAllSceneDataStores;
- (void)removeSceneStoreForIdentifier:(id)arg1;
- (id)sceneStoreForIdentifier:(id)arg1 creatingIfNecessary:(bool)arg2;

@end
