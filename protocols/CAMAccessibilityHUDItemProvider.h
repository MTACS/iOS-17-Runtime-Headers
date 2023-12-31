
@protocol CAMAccessibilityHUDItemProvider <NSObject>

@required

- (UIAccessibilityHUDItem *)hudItemForAccessibilityHUDManager:(CAMBarsAccessibilityHUDManager *)arg1;
- (void)selectedByAccessibilityHUDManager:(CAMBarsAccessibilityHUDManager *)arg1;

@optional

- (bool)shouldAccessibilityGestureBeginForHUDManager:(CAMBarsAccessibilityHUDManager *)arg1;

@end
