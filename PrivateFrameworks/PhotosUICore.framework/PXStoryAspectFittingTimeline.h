
@interface PXStoryAspectFittingTimeline : PXStoryDerivedTimeline {
    NSArray * _keySegmentDisplayAssetClips;
    long long  _keySegmentIdentifier;
}

@property (nonatomic, readonly) NSArray *keySegmentDisplayAssetClips;
@property (nonatomic, readonly) long long keySegmentIdentifier;

- (void).cxx_destruct;
- (void)_enumerateClipsKeySegmentWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)_setupKeySegmentDisplayAssetClips;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (id)initWithOriginalTimeline:(id)arg1 keySegmentMix:(struct { long long x1; double x2; long long x3; })arg2;
- (id)keySegmentDisplayAssetClips;
- (long long)keySegmentIdentifier;

@end
