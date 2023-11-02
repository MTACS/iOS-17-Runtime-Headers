
@interface PHAWallpaperSuggestionRefreshSession : NSObject {
    CPAnalytics * _analytics;
    PGManager * _graphManager;
    NSObject<OS_os_log> * _loggingConnection;
    VCPMediaAnalysisService * _mediaAnalysisService;
    PHPhotoLibrary * _photoLibrary;
    PRSService * _posterService;
    NSString * _refreshSessionIdentifier;
    NSURL * _refreshSessionURL;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)lastGalleryRefreshDate;
+ (void)saveLastGalleryRefreshDate:(id)arg1 loggingConnection:(id)arg2;

- (void).cxx_destruct;
- (void)_cleanup;
- (bool)_prepareWithError:(id*)arg1;
- (void)_removeIfNeededFeaturedContent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cleanup;
- (id)consolidatedShuffleConfigurationFromPosterConfigurations:(id)arg1;
- (id)createAndExportMediaForSuggestionLocalIdentifiers:(id)arg1 style:(id)arg2 toURL:(id)arg3 error:(id*)arg4;
- (id)currentlyFeaturedSuggestionUUIDsForTop:(bool)arg1;
- (void)dealloc;
- (void)enumerateSmartAlbumShufflePosterConfigurationsIn:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredPhotoDescriptorsForDonationWithSuggestionUUIDsToAvoid:(id)arg1 count:(unsigned long long)arg2;
- (id)fetchSuggestionsForGalleryDonationWithSuggestionUUIDsToAvoid:(id)arg1;
- (id)initWithGraphManager:(id)arg1;
- (id)keyAssetBySuggestionUUIDFromSuggestions:(id)arg1;
- (id)posterDescriptorOfType:(long long)arg1 withSuggestion:(id)arg2 assetBySuggestionUUID:(id)arg3;
- (bool)prepareWithError:(id*)arg1;
- (id)randomizeSuggestions:(id)arg1;
- (id)randomizedWallpaperSuggesstionWithSubtype:(unsigned short)arg1 suggestionUUIDsToAvoid:(id)arg2;
- (void)refreshAmbientDescriptorsWithProgressReporter:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshPosterConfigurationsForNightlyRefresh:(bool)arg1 progressReporter:(id)arg2 passingFilter:(id /* block */)arg3 withCompletion:(id /* block */)arg4;
- (void)refreshPosterDescriptorsWithProgressReporter:(id)arg1 completion:(id /* block */)arg2;
- (bool)reloadWallpaperSuggestionsForUUIDs:(id)arg1 progress:(id)arg2 error:(id*)arg3;
- (bool)savePreviewSegmentationResourcesForAsset:(id)arg1 atURL:(id)arg2 withClassification:(unsigned long long)arg3 styleCategory:(id)arg4 enableSettlingEffect:(bool)arg5 error:(id*)arg6;
- (bool)saveSegmentationResourcesForAsset:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 classification:(unsigned long long)arg4 error:(id*)arg5;
- (bool)saveShuffleSegmentationResourcesForAsset:(id)arg1 atURL:(id)arg2 withClassification:(unsigned long long)arg3 style:(id)arg4 error:(id*)arg5;
- (id)settlingEffectDescriptorsForDonationWithSuggestionUUIDsToAvoid:(id)arg1;
- (id)suggestionUUIDsForPosterDescriptors:(id)arg1;
- (id)suggestionsForGalleryDonationWithSuggestionUUIDsToAvoid:(id)arg1;
- (id)updateIfNeededPosterDescriptors:(id)arg1 fromCurrentPosterDescriptors:(id)arg2 partialErrors:(id*)arg3 progressReporter:(id)arg4;
- (void)updateSuggestionFeaturedStateWithNewSuggestionUUIDs:(id)arg1 oldSuggestionUUIDs:(id)arg2;
- (id)updatedPosterDescriptorsFromSuggestions:(id)arg1;
- (id)uuidsOfSuggestions:(id)arg1;

@end
