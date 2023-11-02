
@protocol SUICFlamesViewProviding <NSObject>

@required

- (bool)accelerateTransitions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeFrame;
- (UIColor *)dictationColor;
- (void)fadeOutCurrentAura;
- (<SUICFlamesViewProvidingDelegate> *)flamesDelegate;
- (bool)flamesPaused;
- (bool)freezesAura;
- (double)horizontalScaleFactor;
- (bool)isRenderingEnabled;
- (long long)mode;
- (UIImage *)overlayImage;
- (void)prewarmShadersForCurrentMode;
- (bool)reduceFrameRate;
- (bool)reduceThinkingFramerate;
- (bool)renderInBackground;
- (void)resetAndReinitialize:(bool)arg1;
- (void)setAccelerateTransitions:(bool)arg1;
- (void)setActiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDictationColor:(UIColor *)arg1;
- (void)setFlamesDelegate:(id <SUICFlamesViewProvidingDelegate>)arg1;
- (void)setFlamesPaused:(bool)arg1;
- (void)setFreezesAura:(bool)arg1;
- (void)setHorizontalScaleFactor:(double)arg1;
- (void)setMode:(long long)arg1;
- (void)setOverlayImage:(UIImage *)arg1;
- (void)setReduceFrameRate:(bool)arg1;
- (void)setReduceThinkingFramerate:(bool)arg1;
- (void)setRenderInBackground:(bool)arg1;
- (void)setRenderingEnabled:(bool)arg1 forReason:(NSString *)arg2;
- (void)setShowAura:(bool)arg1;
- (void)setState:(long long)arg1;
- (bool)showAura;
- (long long)state;

@end
