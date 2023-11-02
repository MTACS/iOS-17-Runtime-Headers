
@interface MCMCodeSigningMapping : NSObject {
    <MCMChildParentMapCache> * _childParentMapCache;
    MCMSQLiteDB * _codeSigningMappingDB;
    <MCMManagedPath> * _library;
    NSObject<OS_dispatch_queue> * _queue;
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, readonly) <MCMChildParentMapCache> *childParentMapCache;
@property (nonatomic, retain) MCMSQLiteDB *codeSigningMappingDB;
@property (nonatomic, readonly) <MCMManagedPath> *library;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;

+ (id)_moveDBIfNeededFromURL:(id)arg1 queue:(id)arg2 error:(id*)arg3;
+ (id)codeSignMappingWithError:(id*)arg1;

- (void).cxx_destruct;
- (id)_codeSigningInfoForCodeSigningEntry:(id)arg1 externalRequest:(bool)arg2;
- (id)_entitlementsFromCodeSigningEntry:(id)arg1;
- (bool)_onQueue_addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id*)arg4 reconcileHandler:(id /* block */)arg5;
- (id)_onQueue_codeSigningEntryForIdentifier:(id)arg1 withError:(id*)arg2;
- (id)_onQueue_codeSigningInfoForIdentifier:(id)arg1 externalRequest:(bool)arg2;
- (id)_onQueue_copyReferenceCountSetForContainerClass:(unsigned long long)arg1;
- (unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)arg1;
- (id)_onQueue_entitlementsForIdentifier:(id)arg1;
- (void)_onQueue_handleChangeFromOldGroupContainerIds:(id)arg1 toNewGroupContainerIds:(id)arg2 containerClass:(unsigned long long)arg3 reconcileHandler:(id /* block */)arg4;
- (bool)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg1;
- (id)_onQueue_identifiersWithError:(id*)arg1;
- (bool)_onQueue_invalidateCodeSigningInfoForIdentifier:(id)arg1 error:(id*)arg2;
- (id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1;
- (void)_onQueue_iterateGroupIdsWithKey:(id)arg1 fallBackKey:(id)arg2 forAllIdentifiersUsingBlock:(id /* block */)arg3;
- (void)_onQueue_migrateAppGroupIdsFromDataContainersToFileUsingContainers:(id)arg1;
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainerToMappingWithInfo:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3;
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMappingWithContainersLegacy:(id)arg1 containerClass:(unsigned long long)arg2;
- (void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;
- (void)_onQueue_migrateFromMappingFileToDBIfNecessary;
- (bool)_onQueue_processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 oldEntitlements:(id)arg4 error:(id*)arg5 reconcileHandler:(id /* block */)arg6;
- (void)_onQueue_reconcileSystemContainersWithContext:(id)arg1;
- (bool)_onQueue_removeAllAdvanceCopiesWithError:(id*)arg1;
- (bool)_onQueue_removeAllInvalidPluginCodeSigningEntriesWithNumRemoved:(int*)arg1 error:(id*)arg2;
- (bool)_onQueue_removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id*)arg4 reconcileHandler:(id /* block */)arg5;
- (id)_onQueue_removeReferenceForGroupIdentifiers:(id)arg1 containerClass:(unsigned long long)arg2;
- (id)_onQueue_setCodeSigningDictionaryValues:(id)arg1 forIdentifiers:(id)arg2;
- (bool)_onqueue_enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)_readCodeSigningMappingFromDiskAtURL:(id)arg1;
- (bool)addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id*)arg4 reconcileHandler:(id /* block */)arg5;
- (id)appGroupIdentifiersForIdentifier:(id)arg1;
- (id)childParentMapCache;
- (id)codeSigningEntryForIdentifier:(id)arg1 withError:(id*)arg2;
- (id)codeSigningMappingDB;
- (id)copyReferenceCountSetForContainerClass:(unsigned long long)arg1;
- (unsigned long long)dataContainerTypeForIdentifier:(id)arg1;
- (id)entitlementsForIdentifier:(id)arg1;
- (bool)enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)getCodeSigningInfoForIdentifier:(id)arg1;
- (id)groupContainerIdentifiersAssociatedWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2;
- (bool)identifierHasCallerRegisteredEntitlements:(id)arg1;
- (bool)identifierHasSystemContainer:(id)arg1;
- (id)identifiersWithError:(id*)arg1;
- (id)initWithUserIdentityCache:(id)arg1 queue:(id)arg2 mappingDB:(id)arg3 childParentMapCache:(id)arg4 library:(id)arg5;
- (unsigned long long)invalidateCodeSigningInfoForAppsWithoutDataContainer;
- (bool)invalidateCodeSigningInfoForIdentifier:(id)arg1 withError:(id*)arg2;
- (bool)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 withError:(id*)arg2;
- (id)library;
- (void)migrateAppGroupIdsFromDataContainersToFile;
- (void)migrateCachedCodeSigningInfoFromBundleContainersToMapping;
- (void)performAllCodeSigningMigrationAndReconciliationWithContext:(id)arg1;
- (id)processCallerRegisteredEntitlements:(id)arg1 identifier:(id)arg2 error:(id*)arg3;
- (id)processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)queue;
- (bool)removeAllAdvanceCopiesWithError:(id*)arg1;
- (bool)removeAllInvalidPluginCodeSigningEntriesWithNumRemoved:(int*)arg1 error:(id*)arg2;
- (id)removeCodeSigningDictionaryForIdentifiers:(id)arg1;
- (bool)removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id*)arg4 reconcileHandler:(id /* block */)arg5;
- (void)setCodeSigningMappingDB:(id)arg1;
- (id)systemGroupIdentifiersForIdentifier:(id)arg1;
- (id)userIdentityCache;

@end
