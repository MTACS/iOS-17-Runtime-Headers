
@interface MPServerObjectDatabase : NSObject <MPMediaKitEntityRelationshipPayloadProvider, MPObjectDatabase> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MSVSQLDatabase * _database;
    NSHashTable * _observers;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _observersLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)prefersInMemoryDatabase;
+ (void)setPrefersInMemoryDatabase:(bool)arg1;
+ (id)sharedServerObjectDatabase;

- (void).cxx_destruct;
- (id)_assetsMatchingIdentifierSet:(id)arg1 query:(id)arg2;
- (bool)_createDatabaseSchema;
- (id)_hlsAssetMatchingIdentifierSet:(id)arg1 query:(id)arg2;
- (id)_initWithDatabaseCreationBlock:(id /* block */)arg1;
- (id)_modelObjectMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 error:(id*)arg3;
- (id)_payloadForIdentifierSet:(id)arg1 outError:(id*)arg2;
- (void)addObserver:(id)arg1;
- (id)assetsMatchingIdentifierSet:(id)arg1;
- (id)assetsWithMiniSINFsMatchingIdentifierSet:(id)arg1;
- (void)enumerateAssetsMissingSINFsForHashedPersonID:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)hlsAssetMatchingIdentifierSet:(id)arg1;
- (id)identifiersMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 options:(unsigned long long)arg3;
- (id)identifiersMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)identifiersMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 options:(unsigned long long)arg3 trustID:(id)arg4 error:(id*)arg5;
- (bool)importAssetsFromRequest:(id)arg1 error:(id*)arg2;
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 trustID:(id)arg3 error:(id*)arg4;
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 trustID:(id)arg3 playActivityFeatureName:(id)arg4 error:(id*)arg5;
- (id)modelObjectMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2;
- (id)modelObjectMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 error:(id*)arg3;
- (id)modelObjectMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 trustID:(id)arg3 error:(id*)arg4;
- (id)payloadDataForIdentifierSet:(id)arg1 outError:(id*)arg2;
- (id)payloadForRelatedEntityWithIdentifierSet:(id)arg1;
- (id)playbackAuthorizationTokenForEntityMatchingIdentifierSet:(id)arg1 trustID:(id)arg2;
- (void)purgeGlideSubscriptionDataForHashedAccoundID:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)relatedIdentifierSetsForParentIdentifierSet:(id)arg1 childKey:(id)arg2;
- (id)relatedIdentifierSetsForParentIdentifierSet:(id)arg1 parentVersionHash:(id)arg2 childKey:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)removePlaybackAuthorizationTokensForTrust:(id)arg1;
- (bool)shouldRenewPlaybackAuthorizationTokenForEntityMatchingIdentifierSet:(id)arg1 trustID:(id)arg2;
- (void)unregisterObserver:(id)arg1;

@end
