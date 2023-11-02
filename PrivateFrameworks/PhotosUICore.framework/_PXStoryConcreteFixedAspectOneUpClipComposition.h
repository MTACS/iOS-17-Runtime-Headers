
@interface _PXStoryConcreteFixedAspectOneUpClipComposition : NSObject <PXStoryClipComposition> {
    double  _aspectRatio;
    long long  _clipAssetIndex;
    NSString * _label;
    long long  _mainDividerAxis;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) const long long*clipAssetIndexes;
@property (nonatomic, readonly) bool clipFramesExtendToBounds;
@property (nonatomic, readonly) const long long*dividerAxes;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) long long mainDividerAxis;
@property (nonatomic, readonly) double mainDividerSplitRatio;
@property (nonatomic, readonly) long long numberOfAssets;
@property (nonatomic, readonly) long long numberOfClips;

- (void).cxx_destruct;
- (double)aspectRatio;
- (const long long*)clipAssetIndexes;
- (bool)clipFramesExtendToBounds;
- (id)description;
- (const long long*)dividerAxes;
- (void)getClipFrames:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forContext:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; }*)arg2;
- (id)initWithAspectRatioNumerator:(long long)arg1 denominator:(long long)arg2;
- (id)label;
- (long long)mainDividerAxis;
- (double)mainDividerSplitRatio;
- (long long)numberOfAssets;
- (long long)numberOfClips;

@end
