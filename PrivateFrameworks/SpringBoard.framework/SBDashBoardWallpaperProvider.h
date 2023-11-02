
@interface SBDashBoardWallpaperProvider : NSObject <CSWallpaperProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createCoverSheetWallpaperView;
- (id)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)arg1;
- (id)createWallpaperFloatingViewForReason:(id)arg1 ignoreReplica:(bool)arg2;
- (id)setWallpaperFloatingLayerContainerView:(id)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
- (id)suspendWallpaperAnimationForReason:(id)arg1;
- (void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)wallpaperClientWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
