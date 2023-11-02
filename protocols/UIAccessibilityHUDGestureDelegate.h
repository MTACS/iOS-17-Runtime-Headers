
@protocol UIAccessibilityHUDGestureDelegate <NSObject>

@required

- (UIAccessibilityHUDItem *)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;

@optional

- (bool)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 showHUDItem:(UIAccessibilityHUDItem *)arg2;
- (bool)_accessibilityHUDGestureManagerCancelsTouchesInView:(UIAccessibilityHUDGestureManager *)arg1;
- (void)_dismissAccessibilityHUDForGestureManager:(UIAccessibilityHUDGestureManager *)arg1;

@end
