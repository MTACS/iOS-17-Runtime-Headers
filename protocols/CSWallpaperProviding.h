
@protocol CSWallpaperProviding <NSObject>

@required

- (UIView<CSWallpaperView> *)createCoverSheetWallpaperView;
- (UIView<CSWallpaperView> *)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)arg1;
- (UIView<BSInvalidatable><PBUIWallpaperPositioning> *)createWallpaperFloatingViewForReason:(NSString *)arg1 ignoreReplica:(bool)arg2;
- (<PBUIWallpaperAnimatedInvalidating> *)setWallpaperFloatingLayerContainerView:(UIView *)arg1 forReason:(NSString *)arg2 withAnimationFactory:(BSUIAnimationFactory *)arg3;
- (<BSInvalidatable> *)suspendWallpaperAnimationForReason:(NSString *)arg1;
- (void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)wallpaperClientWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
