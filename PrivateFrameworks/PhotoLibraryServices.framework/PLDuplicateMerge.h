
@interface PLDuplicateMerge : NSObject {
    PLPhotoLibrary * _library;
    PLDuplicateMergeCrashRecovery * _mergeCrashRecovery;
    PLDuplicateMergeModelProperties * _mergeModelProperties;
    NSArray * _sourceAssets;
    PLDuplicateAsset * _targetAsset;
}

@property (readonly) PLManagedAsset *asset;
@property (retain) PLDuplicateAsset *targetAsset;

+ (bool)mergeAssets:(id)arg1 targetAssetOID:(id)arg2 photolibrary:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)_isValidForLocationOverwriteWithSource:(id)arg1;
- (bool)_mergeAdjustmentsFromSource:(id)arg1 error:(id*)arg2;
- (void)_mergeFaceRelationshipsFromSource:(id)arg1;
- (void)_mergeLocationFromSource:(id)arg1 forceUpdate:(bool)arg2;
- (void)_mergeMetadataFromSource:(id)arg1;
- (void)_mergeSharedLibraryMetadataFromSource:(id)arg1;
- (void)_preFileCloneChecksForURL:(id)arg1;
- (void)_resetMediaAnalysisStateWithType:(long long)arg1;
- (void)_setDCIMFilenameFromSource:(id)arg1;
- (void)_setUBFFilenameFromDuplicateSource:(id)arg1;
- (id)asset;
- (id)initWithSourceAssets:(id)arg1 targetAsset:(id)arg2 photolibrary:(id)arg3;
- (bool)mergeResourcesFromSource:(id)arg1 error:(id*)arg2;
- (bool)mergeWithError:(id*)arg1;
- (void)setTargetAsset:(id)arg1;
- (id)targetAsset;

@end
