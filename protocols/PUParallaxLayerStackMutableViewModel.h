
@protocol PUParallaxLayerStackMutableViewModel <NSObject>

@required

- (bool)appliesDepthToAllOrientations;
- (long long)backlightLuminance;
- (unsigned long long)clockIntersection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerFrame;
- (bool)depthEnabled;
- (double)desiredHeadroomVisibilityAmount;
- (long long)deviceOrientation;
- (long long)layoutOrder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedVisibleFrame;
- (bool)parallaxDisabled;
- (struct CGPoint { double x1; double x2; })parallaxVector;
- (void)pruneMainLayers;
- (void)setAppliesDepthToAllOrientations:(bool)arg1;
- (void)setBacklightLuminance:(long long)arg1;
- (void)setClockAreaLuminance:(double)arg1;
- (void)setClockIntersection:(unsigned long long)arg1;
- (void)setClockLayerOrder:(NSString *)arg1;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDepthEnabled:(bool)arg1;
- (void)setDesiredHeadroomVisibilityAmount:(double)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setLayoutOrder:(long long)arg1;
- (void)setNormalizedVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setNormalizedVisibleFrameForInactiveOrientation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setParallaxDisabled:(bool)arg1;
- (void)setParallaxVector:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSettlingEffectEnabled:(bool)arg1;
- (void)setShouldLoopSettlingEffectForGallery:(bool)arg1;
- (void)setShowsDebugHUD:(bool)arg1;
- (void)setStyle:(PIParallaxStyle *)arg1;
- (void)setVisibilityAmount:(double)arg1;
- (void)setVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)settlingEffectEnabled;
- (bool)shouldLoopSettlingEffectForGallery;
- (bool)showsDebugHUD;
- (PIParallaxStyle *)style;
- (void)updateBackfillLayersFromLayerStack:(PFParallaxLayerStack *)arg1;
- (void)updateHeadroomLayerFromLayerStack:(PFParallaxLayerStack *)arg1;
- (void)updateLayerStack:(PFParallaxLayerStack *)arg1;
- (void)updateSettlingEffectWithSegmentationItem:(id <PISegmentationItem>)arg1 layerStack:(PFParallaxLayerStack *)arg2;
- (double)visibilityAmount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
