
@interface TRIAssetStore : NSObject {
    <TRIAssetStoreOperations> * _assetOperator;
    <TRIAssetExtracting> * _extractor;
    NSObject<OS_xpc_object> * _monitoredActivity;
    <TRIAssetPatching> * _patcher;
    <TRIPaths> * _paths;
    <TRIStorageManagementProtocol> * _storageManagement;
    bool  _useGlobalPaths;
}

@property (nonatomic, retain) <TRIAssetStoreOperations> *assetOperator;

+ (id)shortHashForAssetIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_acquireLockfileAndRunBlock:(id /* block */)arg1;
- (bool)_clearUnrefAgeForAssetWithIdentifier:(id)arg1;
- (id)_createTempDir;
- (void)_fixupPermissionsOnPath:(id)arg1 permissionBits:(const unsigned short*)arg2;
- (bool)_forceRemoveItemAtPath:(id)arg1;
- (bool)_isDirectoryAtPath:(id)arg1 matchingAssetContentAtPath:(id)arg2;
- (bool)_isFileAtPath:(id)arg1 matchingAssetContentAtPath:(id)arg2;
- (bool)_linkDirectoryAssetWithIdentifier:(id)arg1 toCurrentPath:(id)arg2 futurePath:(id)arg3 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg4;
- (bool)_linkFileAssetWithIdentifier:(id)arg1 toCurrentPath:(id)arg2 futurePath:(id)arg3 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg4;
- (bool)_nonAtomicOverwriteWithSrc:(id)arg1 dest:(id)arg2 finalPermissionBits:(const unsigned short*)arg3;
- (bool)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)arg1 dest:(id)arg2;
- (id)_requireAssetStoreTempDir;
- (struct { unsigned char x1; })_saveDirectoryAssetWithIdentifier:(id)arg1 assetFilename:(id)arg2 metadata:(id)arg3 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg4 error:(id*)arg5;
- (bool)_saveFileAssetWithIdentifier:(id)arg1 assetFilename:(id)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3;
- (bool)_saveFileAssetWithIdentifier:(id)arg1 assetFilename:(id)arg2 workingTempDirectory:(id)arg3 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg4;
- (id)assetOperator;
- (bool)collectGarbageOlderThanNumScans:(unsigned int)arg1 deletedAssetSize:(unsigned long long*)arg2;
- (bool)collectGarbageOlderThanNumScans:(unsigned int)arg1 ignoreRecentlyCreatedAssets:(bool)arg2 deletedAssetSize:(unsigned long long*)arg3 deletedAssetIds:(id*)arg4;
- (void)enumerateAssetDirsUsingBlock:(id /* block */)arg1;
- (void)enumerateSavedAssetsUsingBlock:(id /* block */)arg1;
- (void)fixFileProtectionForAssetStoreFiles;
- (bool)hasAssetWithIdentifier:(id)arg1 type:(unsigned char*)arg2;
- (id)init;
- (id)initWithGlobalPaths:(id)arg1;
- (id)initWithPaths:(id)arg1;
- (id)initWithPaths:(id)arg1 extractor:(id)arg2 patcher:(id)arg3;
- (id)initWithPaths:(id)arg1 extractor:(id)arg2 patcher:(id)arg3 monitoredActivity:(id)arg4;
- (id)initWithPaths:(id)arg1 monitoredActivity:(id)arg2;
- (bool)isValidTargetForSymlink:(id)arg1 assetIdentifier:(id)arg2;
- (bool)linkAssetWithIdentifier:(id)arg1 toCurrentPath:(id)arg2 futurePath:(id)arg3;
- (bool)linkAssetWithIdentifier:(id)arg1 toPath:(id)arg2;
- (id)pathForAssetContentWithIdentifier:(id)arg1;
- (id)pathForAssetDirWithIdentifier:(id)arg1;
- (id)pathForRefsToAssetWithIdentifier:(id)arg1;
- (bool)referenceMAAutoAssetWithId:(id)arg1 isFileFactor:(bool)arg2 usingCurrentPath:(id)arg3 futurePath:(id)arg4;
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)arg1 ignoreRecentlyCreatedAssets:(bool)arg2 includedCacheDeletableAssetIds:(id)arg3 deleteableAssetIds:(id*)arg4;
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)arg1 includedCacheDeletableAssetIds:(id)arg2;
- (bool)removeAssetWithIdentifier:(id)arg1;
- (bool)saveAssetWithIdentifier:(id)arg1 assetData:(id)arg2 type:(unsigned char)arg3;
- (struct { unsigned char x1; })saveAssetWithIdentifier:(id)arg1 assetURL:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (bool)saveAssetWithIdentifier:(id)arg1 builtFromAssetWithIdentifier:(id)arg2 patchFilename:(id)arg3 metadata:(id)arg4 error:(id*)arg5;
- (void)setAssetOperator:(id)arg1;
- (bool)setCreationDate:(id)arg1 forAssetIdentifier:(id)arg2;

@end
