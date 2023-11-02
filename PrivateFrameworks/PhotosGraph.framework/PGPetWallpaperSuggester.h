
@interface PGPetWallpaperSuggester : PGAbstractSuggester <PGPetWallpaperSuggesterProtocol> {
    PGWallpaperSuggestionAssetGater * _assetGater;
    CLSSceneConfidenceThresholdHelper * _peopleSceneConfidenceThresholdHelper;
    PGPetWallpaperSuggesterFilteringContext * _primaryFilteringContext;
    PGPetWallpaperSuggesterFilteringContext * _secondaryFilteringContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGPetWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (nonatomic, retain) PGPetWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) Class superclass;

+ (bool)candidate:(id)arg1 passesFilteringWithContext:(id)arg2 curationContext:(id)arg3 thresholdHelper:(id)arg4 statistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; struct { unsigned int x_12_1_1; unsigned int x_12_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_12_1_3; unsigned int x_12_1_4; unsigned int x_12_1_5; unsigned int x_12_1_6; unsigned int x_12_1_7; unsigned int x_12_1_8; unsigned int x_12_1_9; unsigned int x_12_1_10; unsigned int x_12_1_11; unsigned int x_12_1_12; unsigned int x_12_1_13; unsigned int x_12_1_14; struct { unsigned int x_15_2_1; } x_12_1_15; struct { unsigned int x_16_2_1; unsigned int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; unsigned int x_16_2_6; } x_12_1_16; } x12; }*)arg5;
+ (bool)filtersForTopSuggestions;
+ (bool)passesFilteringWithAsset:(id)arg1 curationContext:(id)arg2 orientation:(long long)arg3 reason:(id*)arg4;
+ (id)prefilteringInternalPredicateWithContext:(id)arg1;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (id)candidatesForPet:(id)arg1;
- (id)fetchPets;
- (id)initWithSession:(id)arg1;
- (void)logPosterFilteringStatistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; struct { unsigned int x_12_1_1; unsigned int x_12_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_12_1_3; unsigned int x_12_1_4; unsigned int x_12_1_5; unsigned int x_12_1_6; unsigned int x_12_1_7; unsigned int x_12_1_8; unsigned int x_12_1_9; unsigned int x_12_1_10; unsigned int x_12_1_11; unsigned int x_12_1_12; unsigned int x_12_1_13; unsigned int x_12_1_14; struct { unsigned int x_15_2_1; } x_12_1_15; struct { unsigned int x_16_2_1; unsigned int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; unsigned int x_16_2_6; } x_12_1_16; } x12; })arg1;
- (id)primaryFilteringContext;
- (id)rankedAndDedupedCandidatesFromCandidates:(id)arg1;
- (id)secondaryFilteringContext;
- (void)setPrimaryFilteringContext:(id)arg1;
- (void)setSecondaryFilteringContext:(id)arg1;
- (void)setupFilteringContexts;
- (id)sortedCandidatesByPetLocalIdentifierFromPets:(id)arg1 progressReporter:(id)arg2;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
