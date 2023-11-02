
@protocol PKTextInputHoverControllerDelegate <NSObject>

@required

- (UIView *)hoverController:(PKTextInputHoverController *)arg1 topLevelHitViewAt:(struct CGPoint { double x1; double x2; })arg2;
- (UIView *)hoverControllerContainerView:(PKTextInputHoverController *)arg1;
- (PKTextInputCursorController *)hoverControllerCursorController:(PKTextInputHoverController *)arg1;
- (void)hoverControllerDidLift:(PKTextInputHoverController *)arg1;

@end
