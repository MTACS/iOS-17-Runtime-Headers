
@interface TRIInternalSystemServiceRequestHandler : NSObject <TRIXPCInternalSystemServiceProtocol> {
    <TRITrialInternalSystemEntitled> * _entitlementWitness;
    TRIAssetStoreOperator * _operator;
    <TRIStorageManagementProtocol> * _storageManagement;
    TRIAssetStore * _store;
}

- (void).cxx_destruct;
- (bool)_updateOnDemandReferenceCountsForUser:(id)arg1 atGlobalPath:(id)arg2 addingFactors:(id)arg3 removingFactors:(id)arg4 newlyUnreferencedFactors:(id*)arg5;
- (void)addSymlinkFromAssetWithIdentifier:(id)arg1 toPath:(id)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3 completion:(id /* block */)arg4;
- (void)collectGarbageOlderThanNumScans:(unsigned int)arg1 deletedAssetSize:(unsigned long long*)arg2 ignoreRecentlyCreatedAssets:(bool)arg3 dryRun:(bool)arg4 includedCacheDeletableAssetIds:(id)arg5 completion:(id /* block */)arg6;
- (void)fixFileProtectionForAssetStoreWithCompletion:(id /* block */)arg1;
- (id)initWithEntitlementWitness:(id)arg1;
- (void)logSystemCovariates;
- (void)migrateToGlobalAssetStoreIfNeededFromLocalStore:(id)arg1 sourceExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)overwriteGlobalActiveFactorProvidersWithNamespaceMap:(id)arg1 factorPackMap:(id)arg2 rolloutDeploymentMap:(id)arg3 completion:(id /* block */)arg4;
- (void)referenceMAAutoAssetWithId:(id)arg1 futurePath:(id)arg2 currentPath:(id)arg3 isFileFactor:(bool)arg4 sourceExtension:(id)arg5 completion:(id /* block */)arg6;
- (void)removeAssetWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeUnreferencedGlobalFactorPacksWithCompletion:(id /* block */)arg1;
- (void)saveAssetWithIdentifier:(id)arg1 sourcePath:(id)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3 removeSourceOnFailure:(bool)arg4 completion:(id /* block */)arg5;
- (void)saveFactorPackForUserId:(id)arg1 toGlobalPath:(id)arg2 fromTemporaryPath:(id)arg3 factors:(id)arg4 sourceExtension:(id)arg5 completion:(id /* block */)arg6;
- (void)updateFactorPackForUserId:(id)arg1 atGlobalPath:(id)arg2 deletingFactors:(id)arg3 completion:(id /* block */)arg4;
- (void)updateFactorPackForUserId:(id)arg1 atGlobalPath:(id)arg2 populatingFactors:(id)arg3 completion:(id /* block */)arg4;

@end
