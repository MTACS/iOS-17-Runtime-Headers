
@protocol TRIAssetStoreOperations

@required

- (bool)addSymlinkFromAssetWithIdentifier:(NSString<TRIAssetId> *)arg1 toPath:(NSString *)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3;
- (bool)collectGarbageOlderThanNumScans:(unsigned int)arg1 deletedAssetSize:(unsigned long long*)arg2 ignoreRecentlyCreatedAssets:(bool)arg3 dryRun:(bool)arg4 includedCacheDeletableAssetIds:(NSDictionary *)arg5 deletedAssetIds:(id*)arg6;
- (bool)fixFileProtectionForAssetStoreFiles;
- (NSString *)referenceMAAutoAssetWithId:(TRIFullMAAssetId *)arg1 futurePath:(NSString *)arg2 currentPath:(NSString *)arg3 isFileFactor:(bool)arg4;
- (bool)removeAssetWithIdentifier:(NSString<TRIAssetId> *)arg1;
- (bool)saveAssetWithIdentifier:(NSString<TRIAssetId> *)arg1 sourcePath:(NSString *)arg2 flockWitness:(struct TRIFlockWitness_ { int x1; }*)arg3 removeSourceOnFailure:(bool)arg4;

@end
