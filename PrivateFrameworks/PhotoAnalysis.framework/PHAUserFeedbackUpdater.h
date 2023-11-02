
@interface PHAUserFeedbackUpdater : NSObject {
    PGManager * _graphManager;
    NSObject<OS_dispatch_queue> * _highlighUpdationQueue;
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    PHUserFeedbackCalculator * _userFeedbackCalculator;
}

+ (id)_blockableFeaturesForAssetCollection:(id)arg1;
+ (id)_memoriesFetchResultWithObjectIDs:(id)arg1 existingMemoriesFetchResult:(id)arg2;
+ (id)_userFeedbackCalculatorWithPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_clearEnrichmentStateOfHighlightsWithNegativeFeedback:(id)arg1;
- (bool)_deleteWallpaperTopSuggestionsOfPersonsForLocalIdentifiers:(id)arg1;
- (bool)_demoteFeaturedMemories;
- (void)_demoteNotFeaturedMemories;
- (void)_enrichKeyAssetsforHighlightsWithNegativeFeedbackWithAssets:(id)arg1;
- (id)_fetchAssetsWithNegativeFeedbackFrom:(id)arg1;
- (bool)_neverFeatureMemories:(id)arg1 error:(id*)arg2;
- (id)_notRecommendedMemoriesFromMemories:(id)arg1;
- (id)_personUUIDsByAssetUUIDFromAssets:(id)arg1;
- (void)_processWallpaperSuggestionsWithNegativeFeedbackPersonUUIDs:(id)arg1;
- (void)_reloadWallpaperSuggestionsWithRejectedPersonsForLocalIdentifiers:(id)arg1 forceReload:(bool)arg2;
- (bool)_retireAndUnfeatureSuggestions:(id)arg1 didUnfeatureSuggestions:(bool*)arg2;
- (id)_suggestionsToRetire;
- (double)_userFeedbackScoreForAssetCollection:(id)arg1 assetsFetchResult:(id)arg2 keyAsset:(id)arg3 personUUIDsByAssetUUID:(id)arg4;
- (id)initWithGraphManager:(id)arg1;
- (bool)updateFeatureContentWithPersonUUIDs:(id)arg1 error:(id*)arg2;

@end
