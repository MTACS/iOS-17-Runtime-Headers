
@protocol TRIXPCInternalSystemServiceProtocol

@required

- (void)addSymlinkFromAssetWithIdentifier:(void *)arg1 toPath:(void *)arg2 flockWitness:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString<TRIAssetId> *, NSString *, struct TRIFlockWitness_ { int x1; }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)collectGarbageOlderThanNumScans:(void *)arg1 deletedAssetSize:(void *)arg2 ignoreRecentlyCreatedAssets:(void *)arg3 dryRun:(void *)arg4 includedCacheDeletableAssetIds:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: unsigned int, unsigned long long*, bool, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSMutableSet *, void*
- (void)fixFileProtectionForAssetStoreWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)logSystemCovariates;
- (void)migrateToGlobalAssetStoreIfNeededFromLocalStore:(void *)arg1 sourceExtension:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)overwriteGlobalActiveFactorProvidersWithNamespaceMap:(void *)arg1 factorPackMap:(void *)arg2 rolloutDeploymentMap:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSDictionary *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)referenceMAAutoAssetWithId:(void *)arg1 futurePath:(void *)arg2 currentPath:(void *)arg3 isFileFactor:(void *)arg4 sourceExtension:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: TRIFullMAAssetId *, NSString *, NSString *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)removeAssetWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString<TRIAssetId> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeUnreferencedGlobalFactorPacksWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned int, void*
- (void)saveAssetWithIdentifier:(void *)arg1 sourcePath:(void *)arg2 flockWitness:(void *)arg3 removeSourceOnFailure:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString<TRIAssetId> *, NSString *, struct TRIFlockWitness_ { int x1; }*, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)saveFactorPackForUserId:(void *)arg1 toGlobalPath:(void *)arg2 fromTemporaryPath:(void *)arg3 factors:(void *)arg4 sourceExtension:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSString *, NSString *, NSString *, NSSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateFactorPackForUserId:(void *)arg1 atGlobalPath:(void *)arg2 deletingFactors:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateFactorPackForUserId:(void *)arg1 atGlobalPath:(void *)arg2 populatingFactors:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
