
@interface HDSourceManager : NSObject <HDProfileReadyObserver> {
    HDDatabaseValueCache * _clientSourceCache;
    HDDatabaseValueCache * _localSourceForBundleIdentifierCache;
    HDDatabaseValueCache * _localSourceForSourceID;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDDatabaseValueCache * _sourceEntityByBundleIdentifierCache;
}

- (void).cxx_destruct;
- (void)_applicationsUninstalledNotification:(id)arg1;
- (id)_createSourceEntityForLocalDeviceWithError:(id*)arg1;
- (bool)_deleteSourcesWithUUIDs:(id)arg1 localSourceEntityCacheKey:(id)arg2 syncIdentity:(id)arg3 deleteSamples:(bool)arg4 transaction:(id)arg5 error:(id*)arg6;
- (id)allSourcesForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)allSourcesWithError:(id*)arg1;
- (id)allWatchSourcesWithError:(id*)arg1;
- (id)clientSourceForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)clientSourceForPersistentID:(id)arg1 error:(id*)arg2;
- (id)clientSourceForSourceEntities:(id)arg1 error:(id*)arg2;
- (id)clientSourceForSourceEntity:(id)arg1 error:(id*)arg2;
- (id)clientSourceForUUID:(id)arg1 error:(id*)arg2;
- (id)clientSourcesForSourceIDs:(id)arg1 error:(id*)arg2;
- (id)createOrUpdateSourceForClient:(id)arg1 error:(id*)arg2;
- (bool)createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 error:(id*)arg3;
- (void)dealloc;
- (bool)deleteSourceWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)insertCodableSource:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
- (id)insertSourceWithBundleIdentifier:(id)arg1 owningAppBundleIdentifier:(id)arg2 UUID:(id)arg3 name:(id)arg4 options:(unsigned long long)arg5 isCurrentDevice:(bool)arg6 productType:(id)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 error:(id*)arg10;
- (id)localDeviceSourceWithError:(id*)arg1;
- (id)localSourceForBundleIdentifier:(id)arg1 copyIfNecessary:(bool)arg2 error:(id*)arg3;
- (id)localSourceForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)localSourceForSourceID:(id)arg1 copyIfNecessary:(bool)arg2 error:(id*)arg3;
- (id)privateSourceForClinicalAccountIdentifier:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(bool)arg3 nameOnCreateOrUpdate:(id)arg4 error:(id*)arg5;
- (void)profileDidBecomeReady:(id)arg1;
- (id)publicSourceForClinicalExternalIdentifier:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(bool)arg3 nameOnCreateOrUpdate:(id)arg4 error:(id*)arg5;
- (bool)setLocalDeviceSourceUUID:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (id)sourceEntityForClientSource:(id)arg1 createOrUpdateIfNecessary:(bool)arg2 error:(id*)arg3;
- (id)sourceForAppleDeviceWithUUID:(id)arg1 identifier:(id)arg2 name:(id)arg3 productType:(id)arg4 createIfNecessary:(bool)arg5 error:(id*)arg6;
- (id)sourceForApplicationIdentifier:(id)arg1 createOrUpdateIfNecessary:(bool)arg2 entitlements:(id)arg3 name:(id)arg4 error:(id*)arg5;
- (id)sourceForClient:(id)arg1 error:(id*)arg2;
- (id)sourceForCodableSource:(id)arg1 provenance:(long long)arg2 createIfNecessary:(bool)arg3 isDeleted:(bool*)arg4 error:(id*)arg5;
- (id)sourceUUIDForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)uncachedClientSourceForPersistentID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)updateCurrentDeviceNameWithError:(id*)arg1;

@end
