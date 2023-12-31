
@protocol CAMBarsAccessibilityHUDManagerDelegate <NSObject>

@required

- (void)accessibilityHUDManager:(CAMBarsAccessibilityHUDManager *)arg1 wantsToShowHUDItem:(UIAccessibilityHUDItem *)arg2;
- (void)dismissAccessibilityHUDViewForAccessibilityHUDManager:(CAMBarsAccessibilityHUDManager *)arg1;

@end
