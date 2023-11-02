
@protocol PUAssetTransitionInfoConfiguration <NSObject>

@required

- (bool)allowAutoPlay;
- (<PUDisplayAsset> *)asset;
- (NSArray *)badgeTransitionInfos;
- (PUPhotoViewContentHelper *)contentHelper;
- (double)cornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (UIImage *)image;
- (PXImageLayerModulator *)imageLayerModulator;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekTime;
- (void)setAllowAutoPlay:(bool)arg1;
- (void)setAsset:(id <PUDisplayAsset>)arg1;
- (void)setBadgeTransitionInfos:(NSArray *)arg1;
- (void)setContentHelper:(PUPhotoViewContentHelper *)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setImageLayerModulator:(PXImageLayerModulator *)arg1;
- (void)setSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSnapshotView:(UIView *)arg1;
- (UIView *)snapshotView;

@end
