
@interface PGSettlingEffectWallpaperSuggester : PGAbstractSuggester {
    PGWallpaperSuggestionAssetGater * _assetGater;
    PGSettlingEffectWallpaperSuggesterFilteringContext * _filteringContext;
    struct { 
        int numberOfLivePhotos; 
        int numberOfLivePhotosWithZeroSettlingEffectScore; 
        int numberOfLivePhotosWithNegativeSettlingEffectScore; 
        int numberOfLivePhotosWithMinMADSettlingEffectScoreGating; 
        int numberOfWallpaperSuggestions; 
        int numberOfWallpaperSuggestionsWithoutSettlingEffect; 
        int numberOfLivePhotoWallpaperSuggestions; 
        struct { 
            int numberOfEliminationsThruSettlingEffectScore; 
            int numberOfSettlingEffectScoresRequested; 
        } postfilteringStatistics; 
        struct { 
            int numberOfEliminationsThruFeatureDisabled; 
            int numberOfEliminationsThruHardwareUnsupported; 
            int numberOfEliminationsThruResourceAvailability; 
            int numberOfEliminationsThruUnsupportedAdjustments; 
            int numberOfEliminationsThruGenericError; 
            int numberOfEliminationsThruMetadataCheck; 
            int numberOfEliminationsThruStabilization; 
            int numberOfEliminationsThruVideoQuality; 
            int numberOfEliminationsThruMetadataIntegrity; 
            int numberOfEliminationsThruFRC; 
            int numberOfEliminationsThruVideoDecision; 
            int numberOfEliminationsThruLayoutDecision; 
            int numberOfEliminationsThruStillTransition; 
        } frcGatingStatistics; 
        struct { 
            int numberOfHighlightSummaryAssets; 
            int numberOfEliminationsThruSettlingEffectScore; 
            int numberOfSettlingEffectScoresRequested; 
        } highlightStatistics; 
        int numberOfFRCEligibleWallpaperCandidates; 
        int numberOfFRCEligibleAssetCandidates; 
    }  _filteringStatistics;
    PGSettlingEffectWallpaperSuggesterLogger * _logger;
    NSString * _loggingPrefix;
    bool  _noLimit;
}

@property (nonatomic, retain) PGSettlingEffectWallpaperSuggesterFilteringContext *filteringContext;

+ (id)analyticsPayloadFromFRCFilteringStatistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; struct { int x_8_1_1; int x_8_1_2; } x8; struct { int x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; int x_9_1_5; int x_9_1_6; int x_9_1_7; int x_9_1_8; int x_9_1_9; int x_9_1_10; int x_9_1_11; int x_9_1_12; int x_9_1_13; } x9; struct { int x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; int x12; })arg1;
+ (id)analyticsPayloadFromPostFilteringStatistics:(struct { int x1; int x2; })arg1;
+ (bool)candidate:(id)arg1 passesFilteringWithContext:(id)arg2 curationContext:(id)arg3 statistics:(struct { int x1; int x2; }*)arg4;
+ (bool)passesFilteringWithAsset:(id)arg1 curationContext:(id)arg2 orientation:(long long)arg3 reason:(id*)arg4;
+ (id)prefilteringInternalPredicateWithForbiddenAssetUUIDs:(id)arg1;
+ (id)settlingEffectSuggestionAnalyticsPayloadFromPhotoLibrary:(id)arg1;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (void)checkAvailableResourcesWithProgressReporter:(id)arg1;
- (id)consolidatedCandidatesFromWallpaperCandidates:(id)arg1 highlightCandidates:(id)arg2;
- (void)deleteLegacySettlingEffectSuggestions;
- (id)fetchCandidateSuggestions;
- (id)fetchSortedWallpaperCandidatesWithProgressReporter:(id)arg1;
- (id)filteringContext;
- (bool)hasEnoughSettlingEffectAssets;
- (id)initWithSession:(id)arg1;
- (void)processFRCFromCandidates:(id)arg1 withProgressReporter:(id)arg2;
- (void)sendSettlingEffectStatisticsEvent;
- (void)setAvailableFeaturesForCandidates:(id)arg1 pass:(bool)arg2;
- (void)setFilteringContext:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
