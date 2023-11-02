
@interface PGSinglePersonWallpaperAssetSuggester : NSObject {
    NSArray * _assetFetchPropertySets;
    CLSCurationContext * _curationContext;
    PGSinglePersonWallpaperAssetSuggesterDistancingContext * _distancingContext;
    NSSet * _forbiddenAssetUUIDs;
    NSObject<OS_os_log> * _loggingConnection;
    unsigned long long  _numberOfSuggestedAssets;
    NSSet * _personLocalIdentifiers;
    PGSinglePersonWallpaperAssetSuggesterFilteringContext * _primaryFilteringContext;
    PGSinglePersonWallpaperAssetSuggesterScoringContext * _scoringContext;
    PGSinglePersonWallpaperAssetSuggesterFilteringContext * _secondaryFilteringContext;
    NSEnumerator * _suggestedAssetEnumerator;
}

@property (nonatomic, retain) NSArray *assetFetchPropertySets;
@property (nonatomic, retain) PGSinglePersonWallpaperAssetSuggesterDistancingContext *distancingContext;
@property (nonatomic, retain) NSSet *forbiddenAssetUUIDs;
@property (nonatomic, retain) PGSinglePersonWallpaperAssetSuggesterFilteringContext *primaryFilteringContext;
@property (nonatomic, retain) PGSinglePersonWallpaperAssetSuggesterScoringContext *scoringContext;
@property (nonatomic, retain) PGSinglePersonWallpaperAssetSuggesterFilteringContext *secondaryFilteringContext;

+ (id)_assetExpression;
+ (bool)candidateAsset:(id)arg1 andFace:(id)arg2 passesPostfilteringWithContext:(id)arg3 curationContext:(id)arg4 statistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; struct { unsigned int x_13_1_1; unsigned int x_13_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_13_1_3; unsigned int x_13_1_4; unsigned int x_13_1_5; unsigned int x_13_1_6; unsigned int x_13_1_7; unsigned int x_13_1_8; unsigned int x_13_1_9; unsigned int x_13_1_10; unsigned int x_13_1_11; unsigned int x_13_1_12; unsigned int x_13_1_13; unsigned int x_13_1_14; struct { unsigned int x_15_2_1; } x_13_1_15; struct { unsigned int x_16_2_1; unsigned int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; unsigned int x_16_2_6; } x_13_1_16; } x13; }*)arg5;
+ (bool)passesFilteringWithAsset:(id)arg1 forTopWallpaperSuggestions:(bool)arg2 curationContext:(id)arg3 orientation:(long long)arg4 reason:(id*)arg5;
+ (id)prefilteringInternalPredicateWithContext:(id)arg1 forTargetAspectRatio:(double)arg2;
+ (id)prefilteringSubpredicatesWithContext:(id)arg1 forTargetAspectRatio:(double)arg2;

- (void).cxx_destruct;
- (id)_sortedDedupedCandidatesFromCandidates:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)assetFetchPropertySets;
- (id)assetsFromCandidates:(id)arg1;
- (void)computeSuggestedAssetsWithProgress:(id /* block */)arg1;
- (id)distancingContext;
- (unsigned long long)expectedNumberOfSuggestedAssets;
- (id)forbiddenAssetUUIDs;
- (id)initWithPersonLocalIdentifiers:(id)arg1 curationContext:(id)arg2 loggingConnection:(id)arg3;
- (void)logPosterFilteringStatistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; struct { unsigned int x_13_1_1; unsigned int x_13_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_13_1_3; unsigned int x_13_1_4; unsigned int x_13_1_5; unsigned int x_13_1_6; unsigned int x_13_1_7; unsigned int x_13_1_8; unsigned int x_13_1_9; unsigned int x_13_1_10; unsigned int x_13_1_11; unsigned int x_13_1_12; unsigned int x_13_1_13; unsigned int x_13_1_14; struct { unsigned int x_15_2_1; } x_13_1_15; struct { unsigned int x_16_2_1; unsigned int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; unsigned int x_16_2_6; } x_13_1_16; } x13; })arg1;
- (id)nextSuggestedAsset;
- (id)primaryFilteringContext;
- (id)scoringContext;
- (id)secondaryFilteringContext;
- (void)setAssetFetchPropertySets:(id)arg1;
- (void)setDistancingContext:(id)arg1;
- (void)setForbiddenAssetUUIDs:(id)arg1;
- (void)setPrimaryFilteringContext:(id)arg1;
- (void)setScoringContext:(id)arg1;
- (void)setSecondaryFilteringContext:(id)arg1;
- (id)unsortedCandidatesFromPersonLocalIdentifiers:(id)arg1 progressBlock:(id /* block */)arg2;

@end
