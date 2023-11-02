
@interface TRIAssetStoreOperator : NSObject <TRIAssetStoreOperations> {
    <TRIPaths> * _paths;
    <TRIStorageManagementProtocol> * _storageManagement;
    TRIAssetStore * _store;
}

+ (unsigned long long)_fileSizeInBytesForPath:(id)arg1;

- (void).cxx_destruct;
- (bool)_acquireLockfileAndRunBlock:(id /* block */)arg1;
- (bool)_acquireLockfileInAssetStorePath:(id)arg1 andRunBlock:(id /* block */)arg2;
- (bool)_clearUnrefAgeForAssetWithIdentifier:(id)arg1;
- (id)_collectDeadSymlinks;
- (id)_collectUnreferencedAssetsIncludingLinkTargetsForReferencedAssetIds:(id)arg1 ignoreRecentlyCreatedAssets:(bool)arg2;
- (id)_creationDateForAsset:(id)arg1;
- (bool)_fixFileProtectionForFileURL:(id)arg1;
- (void)_fixupPermissionsOnPath:(id)arg1 permissionBits:(const unsigned short*)arg2;
- (bool)_forceRemoveItemAtPath:(id)arg1;
- (unsigned short)_hardLinkCountForAssetWithIdentifier:(id)arg1;
- (unsigned short)_hardLinkCountForFileWithPath:(id)arg1;
- (bool)_incrementUnrefAgeForAssetWithIdentifier:(id)arg1 newValue:(unsigned int*)arg2 dryRun:(bool)arg3;
- (bool)_migrateAssetContentsWithLocalAssetStorePath:(id)arg1 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg2;
- (bool)_migrateAssetsDatabaseWithLocalAssetStorePath:(id)arg1;
- (bool)_moveDirectoryAssetFromDirectory:(id)arg1 toLocationForAssetIdentifier:(id)arg2;
- (bool)_nonAtomicOverwriteWithSrc:(id)arg1 dest:(id)arg2 finalPermissionBits:(const unsigned short*)arg3;
- (bool)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)arg1 dest:(id)arg2;
- (bool)_relinkLocalAssetToGlobalAssetStore:(id)arg1 withAssetId:(id)arg2 localAssetDir:(id)arg3;
- (bool)_removeAssetWithIdentifier:(id)arg1 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg2 deletedAssetSize:(unsigned long long*)arg3 dryRun:(bool)arg4;
- (bool)_removeDeadSymlinksWithFlockWitness:(struct TRIFlockWitness_ { int x1; }*)arg1 numRemoved:(unsigned int*)arg2;
- (bool)_removePaths:(id)arg1 numRemoved:(unsigned int*)arg2;
- (bool)_removeUnreferencedAssetsWithFlockWitness:(struct TRIFlockWitness_ { int x1; }*)arg1 olderThanAge:(unsigned int)arg2 numRemoved:(unsigned int*)arg3 deletedAssetsSize:(unsigned long long*)arg4 ignoreRecentlyCreatedAssets:(bool)arg5 dryRun:(bool)arg6 includedCacheDeletableAssetIds:(id)arg7 deletedAssetIds:(id*)arg8;
- (id)_requireAssetStoreTempDir;
- (bool)addSymlinkFromAssetWithIdentifier:(id)arg1 toPath:(id)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3;
- (bool)collectGarbageOlderThanNumScans:(unsigned int)arg1 deletedAssetSize:(unsigned long long*)arg2 ignoreRecentlyCreatedAssets:(bool)arg3 dryRun:(bool)arg4 includedCacheDeletableAssetIds:(id)arg5 deletedAssetIds:(id*)arg6;
- (bool)fixFileProtectionForAssetStoreFiles;
- (id)initWithPaths:(id)arg1 storageManagement:(id)arg2 assetStore:(id)arg3;
- (bool)migrateToGlobalAssetStoreFromLocalAssetStore:(id)arg1;
- (id)referenceMAAutoAssetWithId:(id)arg1 futurePath:(id)arg2 currentPath:(id)arg3 isFileFactor:(bool)arg4;
- (bool)removeAssetWithIdentifier:(id)arg1;
- (bool)saveAssetWithIdentifier:(id)arg1 sourcePath:(id)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3 removeSourceOnFailure:(bool)arg4;

@end
