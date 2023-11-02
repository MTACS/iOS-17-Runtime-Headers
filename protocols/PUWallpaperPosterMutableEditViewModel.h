
@protocol PUWallpaperPosterMutableEditViewModel <NSObject>

@required

- (bool)appliesDepthToAllOrientations;
- (bool)applySettlingEffectVisibleFrameRestoration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerFrame;
- (PUParallaxLayerStackViewModel *)currentLayerStackViewModel;
- (bool)depthEnabled;
- (long long)deviceOrientation;
- (bool)isUserPanningOrZooming;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedVisibleFrame;
- (bool)parallaxDisabled;
- (void)reframeToSettlingEffectBoundsIfNeeded;
- (void)scrollToPosition:(struct { id x1; double x2; id x3; })arg1;
- (void)setAppliesDepthToAllOrientations:(bool)arg1;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentLayerStackViewModel:(PUParallaxLayerStackViewModel *)arg1;
- (void)setDepthEnabled:(bool)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setIsUserPanningOrZooming:(bool)arg1;
- (void)setNormalizedVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedVisibleFrameAnimated:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setParallaxDisabled:(bool)arg1;
- (void)setSettlingEffectEnabled:(bool)arg1;
- (void)setSettlingEffectStateRestorationLayerStyleKind:(NSString *)arg1;
- (bool)settlingEffectEnabled;
- (NSString *)settlingEffectStateRestorationLayerStyleKind;
- (void)updateSettlingEffectWithSegmentationItem:(id <PISegmentationItem>)arg1 layerStack:(PFParallaxLayerStack *)arg2;
- (void)userDidAdjustVisibleFrame;

@end
