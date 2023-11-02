
@interface PXStoryConcreteTimelineScorer : NSObject <PXStoryTimelineScorer> {
    double  _livePhotoOppositeOrientationMaximumScales;
    double  _livePhotoSameOrientationMaximumScales;
    long long  _saliencyFallbackBehavior;
    double  _scoreForAspectFillOneUpWithPoorCrop;
    _PXStoryConcreteScorerDisplayAssetsFetchResult * _segmentDisplayAssets;
    _PXStoryConcreteScorerDisplayAsset * _splitAsset;
    <PXStoryTimelineStyle> * _timelineStyle;
    double  _videoMaximumAspectFillScale;
}

@property (nonatomic) long long saliencyFallbackBehavior;
@property (nonatomic, readonly) <PXStoryTimelineStyle> *timelineStyle;
@property (nonatomic, readonly) double verySignificantScore;

- (void).cxx_destruct;
- (double)_scoreForClipInfo:(const struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; }*)arg1 inClipFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 timelineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 nUpBonus:(double*)arg4;
- (double)_scoreForSplitAsset:(id)arg1 inTimeline:(id)arg2 segmentTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (id)init;
- (id)initWithTimelineStyle:(id)arg1;
- (bool)isAcceptableCropWithVisibleAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 acceptableCropAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 faceAreaAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)saliencyFallbackBehavior;
- (double)scoreForTimeline:(id)arg1;
- (void)setSaliencyFallbackBehavior:(long long)arg1;
- (id)timelineStyle;
- (double)verySignificantScore;

@end
