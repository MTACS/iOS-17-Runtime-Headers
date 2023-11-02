
@interface PXStoryRecipe : NSObject <PXTapToRadarDiagnosticProvider> {
    <PXDisplayAssetFetchResult> * _allAssets;
    <PXDisplayAssetCollection> * _assetCollection;
    NSDictionary * _autoEditDecisionListsBySong;
    <PXStoryChapterCollection> * _chapterCollection;
    <PXDisplayAssetFetchResult> * _curatedAssets;
    <PXStorySaliencyDataSource> * _detailedSaliency;
    <PXStorySongResource> * _fallbackSongResource;
    <PXStorySongResource> * _initialSongResource;
    <PXDisplayAsset> * _keyAsset;
    <PXStoryMovieHighlightsCollection> * _movieHighlights;
    struct { 
        long long kind; 
        struct { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } minimumDuration; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } preferredDuration; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } maximumDuration; 
        } specificDurationInfo; 
    }  _overallDurationInfo;
    <PFStoryRecipe> * _sourcePersistableRecipe;
    PXStoryStyleConfigurationList * _styleConfigurationList;
    <PXDisplayAssetFetchResult> * _untruncatedCuratedAssets;
}

@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *allAssets;
@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) NSDictionary *autoEditDecisionListsBySong;
@property (nonatomic, readonly) <PXStoryChapterCollection> *chapterCollection;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *curatedAssets;
@property (nonatomic, readonly) <PXStorySaliencyDataSource> *detailedSaliency;
@property (nonatomic, readonly) <PXStorySongResource> *fallbackSongResource;
@property (nonatomic, readonly) <PXStorySongResource> *initialSongResource;
@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly) <PXStoryMovieHighlightsCollection> *movieHighlights;
@property (nonatomic, readonly) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; } overallDurationInfo;
@property (nonatomic, readonly) <PFStoryRecipe> *sourcePersistableRecipe;
@property (nonatomic, readonly) PXStoryStyleConfigurationList *styleConfigurationList;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *untruncatedCuratedAssets;

- (void).cxx_destruct;
- (id)allAssets;
- (id)assetCollection;
- (id)autoEditDecisionListsBySong;
- (id)chapterCollection;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)curatedAssets;
- (id)detailedSaliency;
- (id)fallbackSongResource;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2 curatedAssets:(id)arg3 untruncatedCuratedAssets:(id)arg4 allAssets:(id)arg5 movieHighlights:(id)arg6 detailedSaliency:(id)arg7 chapterCollection:(id)arg8 overallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg9 styleConfigurationList:(id)arg10 sourcePersistableRecipe:(id)arg11 initialSongResource:(id)arg12 fallbackSongResource:(id)arg13 autoEditDecisionListsBySong:(id)arg14;
- (id)initialSongResource;
- (id)keyAsset;
- (id)movieHighlights;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })overallDurationInfo;
- (id)sourcePersistableRecipe;
- (id)styleConfigurationList;
- (id)untruncatedCuratedAssets;

@end
