
@interface PLDuplicateDetectorMetadata : NSObject <PLDuplicateDetector> {
    NSSet * _combinedLimitedSelectionIdentifiers;
    NSArray * _sourceAssetOIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addFingerprint:(id)arg1 oid:(id)arg2 map:(id)arg3;
- (void)_buildAdjustedFingerprintMapWithPrimaryStoreFullsizeFingerprintResults:(id)arg1 mutableOIDFingerprintMap:(id)arg2 filterOnCPLResourceType:(unsigned long long)arg3;
- (id)_combinedIdentifiersFromLimitedSelectionWithPhotoLibrary:(id)arg1;
- (id)_fingerprintIsValidPredicate;
- (id)_fingerprintRequestWithPhotoLibrary:(id)arg1;
- (id)_fullSizePreviewFingerprintRequestWithPhotoLibrary:(id)arg1;
- (id)_fullSizePreviewPredicateWithPhotoLibrary:(id)arg1;
- (id)_fullSizePropertiesToFetch;
- (id)_fullsizeFingerprintIsValidFullSizePredicate;
- (id)_fullsizeIdentifiersFromLimitedSelectionWithPhotoLibrary:(id)arg1;
- (id)_generateDuplicateContainerFromResults:(id)arg1 fullsizeFingerprintResults:(id)arg2;
- (id)_limitedSelectionFullSizePredicateWithPhotoLibrary:(id)arg1;
- (id)_limitedSelectionPredicateWithPhotoLibrary:(id)arg1;
- (id)_originalsIdentifiersFromLimitedSelectionWithPhotoLibrary:(id)arg1;
- (bool)_postProcessDuplicateWithPhotoLibrary:(id)arg1 resultContainer:(id)arg2 error:(id*)arg3;
- (id)_postProcessFetchMetadataWithPhotoLibrary:(id)arg1 resultContainer:(id)arg2 error:(id*)arg3;
- (id)_postProcessingRequestWithDuplicateAssetOIDs:(id)arg1 pathManager:(id)arg2;
- (id)_predicateWithPhotoLibrary:(id)arg1;
- (id)_propertiesToFetch;
- (id)detectDuplicatesWithPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)initWithSourceAssetOIDs:(id)arg1;

@end
