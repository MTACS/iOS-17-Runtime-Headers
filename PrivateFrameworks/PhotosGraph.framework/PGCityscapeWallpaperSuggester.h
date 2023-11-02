
@interface PGCityscapeWallpaperSuggester : PGAbstractSuggester <PGCityscapeWallpaperSuggesterProtocol> {
    PGWallpaperSuggestionAssetGater * _assetGater;
    PGCityscapeWallpaperSuggesterDistancingContext * _distancingContext;
    CLSSceneConfidenceThresholdHelper * _peopleSceneConfidenceThresholdHelper;
    PGCityscapeWallpaperSuggesterFilteringContext * _primaryFilteringContext;
    PGCityscapeWallpaperSuggesterScoringContext * _scoringContext;
    PGCityscapeWallpaperSuggesterFilteringContext * _secondaryFilteringContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PGCityscapeWallpaperSuggesterDistancingContext *distancingContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGCityscapeWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (nonatomic, retain) PGCityscapeWallpaperSuggesterScoringContext *scoringContext;
@property (nonatomic, retain) PGCityscapeWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) Class superclass;

+ (bool)candidate:(id)arg1 passesFilteringWithContext:(id)arg2 curationContext:(id)arg3 thresholdHelper:(id)arg4 statistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; struct { unsigned int x_13_1_1; unsigned int x_13_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_13_1_3; unsigned int x_13_1_4; unsigned int x_13_1_5; unsigned int x_13_1_6; unsigned int x_13_1_7; unsigned int x_13_1_8; unsigned int x_13_1_9; unsigned int x_13_1_10; unsigned int x_13_1_11; unsigned int x_13_1_12; unsigned int x_13_1_13; unsigned int x_13_1_14; struct { unsigned int x_15_2_1; } x_13_1_15; struct { unsigned int x_16_2_1; unsigned int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; unsigned int x_16_2_6; } x_13_1_16; } x13; }*)arg5;
+ (id)candidatesFromAssets:(id)arg1;
+ (bool)filtersForAmbientSuggestions;
+ (bool)filtersForTopSuggestions;
+ (bool)isPositiveWithUrbanSceneLabelsForAsset:(id)arg1;
+ (bool)passesFilteringWithAsset:(id)arg1 curationContext:(id)arg2 orientation:(long long)arg3 reason:(id*)arg4;
+ (id)prefilteringInternalPredicateWithForbiddenAssetUUIDs:(id)arg1;
+ (id)sceneTaxonomy;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (id)distancingContext;
- (id)fetchCandidateAssets;
- (id)fetchUnsortedCandidatesWithProgressReporter:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)logPosterFilteringStatistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; struct { unsigned int x_13_1_1; unsigned int x_13_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_13_1_3; unsigned int x_13_1_4; unsigned int x_13_1_5; unsigned int x_13_1_6; unsigned int x_13_1_7; unsigned int x_13_1_8; unsigned int x_13_1_9; unsigned int x_13_1_10; unsigned int x_13_1_11; unsigned int x_13_1_12; unsigned int x_13_1_13; unsigned int x_13_1_14; struct { unsigned int x_15_2_1; } x_13_1_15; struct { unsigned int x_16_2_1; unsigned int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; unsigned int x_16_2_6; } x_13_1_16; } x13; })arg1;
- (id)primaryFilteringContext;
- (id)scoringContext;
- (id)secondaryFilteringContext;
- (void)setDistancingContext:(id)arg1;
- (void)setPrimaryFilteringContext:(id)arg1;
- (void)setScoringContext:(id)arg1;
- (void)setSecondaryFilteringContext:(id)arg1;
- (void)setupFilteringContexts;
- (id)sortedDedupedCandidatesFromCandidates:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
