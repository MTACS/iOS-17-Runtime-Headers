
@protocol SBAppSwitcherPageContentView <NSObject>

@required

- (bool)contentRequiresGroupOpacity;
- (double)cornerRadius;
- (void)invalidate;
- (bool)isActive;
- (bool)isVisible;
- (unsigned long long)maskedCorners;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setVisible:(bool)arg1;

@optional

- (bool)hasSceneOverlayView;
- (void)setShouldStretchToBounds:(bool)arg1;
- (void)setShouldUseBrightMaterial:(bool)arg1;
- (void)setShowingIconOverlayView:(bool)arg1;
- (void)setUsesNonuniformScaling:(bool)arg1;

@end
