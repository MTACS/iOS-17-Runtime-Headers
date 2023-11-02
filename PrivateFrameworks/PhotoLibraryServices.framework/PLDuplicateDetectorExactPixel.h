
@interface PLDuplicateDetectorExactPixel : NSObject <PLDuplicateDetector> {
    bool  _disablePostProcessing;
    bool  _enableEXIFDataAccess;
    bool  _enableScreenshotProcessing;
    NSMutableSet * _processedHashes;
    NSMutableSet * _processedOIDs;
    NSArray * _sourceAssetOIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addKey:(id)arg1 value:(id)arg2 map:(id)arg3;
- (void)_fetchLimitedSelectionHashes:(id*)arg1 alternativeHashes:(id*)arg2 photoLibrary:(id)arg3;
- (id)_generateDuplicateContainerFromProcessedHashOIDMap:(id)arg1 oidHashMap:(id)arg2;
- (id)_generateDuplicateContainerFromResults:(id)arg1;
- (id)_hashIsValidPredicate;
- (id)_limitedSelectionPredicateWithPhotoLibrary:(id)arg1;
- (bool)_postProcessDuplicateWithPhotoLibrary:(id)arg1 resultContainer:(id)arg2 error:(id*)arg3;
- (id)_postProcessFetchMetadataWithPhotoLibrary:(id)arg1 resultContainer:(id)arg2 error:(id*)arg3;
- (bool)_postProcessIsValidDateSource:(long long)arg1;
- (id)_postProcessingRequestAssetsFromDuplicateAssetOIDs:(id)arg1;
- (id)_postProcessingRequestWithDuplicateAssetOIDs:(id)arg1 pathManager:(id)arg2;
- (id)_predicateWithPhotoLibrary:(id)arg1;
- (id)_propertiesToFetch;
- (id)_sceneprintRequestWithPhotoLibrary:(id)arg1;
- (void)_updateDuplicateAssetOIDResults:(id)arg1 forAssetOID:(id)arg2 relatedProcessedHashOIDMap:(id)arg3 oidHashMap:(id)arg4;
- (void)_updateDuplicateAssetOIDResults:(id)arg1 forHash:(id)arg2 relatedProcessedHashOIDMap:(id)arg3 oidHashMap:(id)arg4;
- (id)detectDuplicatesWithPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)initWithSourceAssetOIDs:(id)arg1;

@end
