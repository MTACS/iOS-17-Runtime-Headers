
@protocol STUIStatusBarDisplayable <NSObject>

@optional

- (UIAccessibilityHUDItem *)accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(STUIStatusBarStyleAttributes *)arg1;
- (long long)overriddenVerticalAlignment;
- (bool)prefersBaselineAlignment;
- (bool)prefersCenterVerticalAlignment;
- (bool)wantsCrossfade;

@end
