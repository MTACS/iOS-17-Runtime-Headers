
@protocol PXStoryClipComposition

@required

- (const long long*)clipAssetIndexes;
- (bool)clipFramesExtendToBounds;
- (const long long*)dividerAxes;
- (void)getClipFrames:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forContext:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; }*)arg2;
- (NSString *)label;
- (long long)mainDividerAxis;
- (double)mainDividerSplitRatio;
- (long long)numberOfAssets;
- (long long)numberOfClips;

@end
