
@protocol _UIStatusBarDisplayable <NSObject>

@optional

- (UIAccessibilityHUDItem *)accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(_UIStatusBarStyleAttributes *)arg1;
- (long long)overriddenVerticalAlignment;
- (bool)prefersBaselineAlignment;
- (bool)prefersCenterVerticalAlignment;
- (bool)wantsCrossfade;

@end
