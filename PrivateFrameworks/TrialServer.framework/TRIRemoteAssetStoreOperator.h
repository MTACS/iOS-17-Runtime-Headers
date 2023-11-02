
@interface TRIRemoteAssetStoreOperator : NSObject <TRIAssetStoreOperations> {
    _PASXPCClientHelper * _internalHelper;
    <TRIPaths> * _paths;
    <TRIStorageManagementProtocol> * _storageManagement;
}

- (void).cxx_destruct;
- (bool)addSymlinkFromAssetWithIdentifier:(id)arg1 toPath:(id)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3;
- (bool)collectGarbageOlderThanNumScans:(unsigned int)arg1 deletedAssetSize:(unsigned long long*)arg2 ignoreRecentlyCreatedAssets:(bool)arg3 dryRun:(bool)arg4 includedCacheDeletableAssetIds:(id)arg5 deletedAssetIds:(id*)arg6;
- (bool)fixFileProtectionForAssetStoreFiles;
- (id)initWithPaths:(id)arg1;
- (bool)migrateToGlobalAssetStoreIfNeeded;
- (bool)overwriteGlobalActiveFactorProvidersWithNamespaceMap:(id)arg1 factorPackMap:(id)arg2 rolloutDeploymentMap:(id)arg3;
- (id)referenceMAAutoAssetWithId:(id)arg1 futurePath:(id)arg2 currentPath:(id)arg3 isFileFactor:(bool)arg4;
- (bool)removeAssetWithIdentifier:(id)arg1;
- (bool)removeUnreferencedGlobalFactorPacksWithRemovedCount:(unsigned int*)arg1;
- (bool)saveAssetWithIdentifier:(id)arg1 sourcePath:(id)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3 removeSourceOnFailure:(bool)arg4;
- (bool)saveFactorPackToGlobalPath:(id)arg1 fromTemporaryPath:(id)arg2 factors:(id)arg3;
- (bool)updateFactorPackAtGlobalPath:(id)arg1 deletingFactors:(id)arg2;
- (bool)updateFactorPackAtGlobalPath:(id)arg1 withFactors:(id)arg2;

@end
