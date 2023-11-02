
@interface PXStoryCropQualityComposabilityScorer : NSObject <PXStoryAutoEditComposabilityScorer> {
    struct vector<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo, std::allocator<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo>>="__begin_"^{_PXStoryAutoEditCropScoreInfo {}  _scores;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct _PXStoryAutoEditCropScoreInfo { struct _PXStoryAutoEditCropScore { float x_1_1_1; float x_1_1_2; } x1; struct _PXStoryAutoEditCropScore { float x_2_1_1; float x_2_1_2; } x2; })_computeCropScoreForDisplayAsset:(id)arg1 diptychAspectRatio:(double)arg2 triptychAspectRatio:(double)arg3;
- (id)computeComposabilityScoresForDisplayAssets:(id)arg1 error:(id*)arg2;
- (id)diagnosticDescription;

@end
