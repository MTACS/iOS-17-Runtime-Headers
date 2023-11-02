
@protocol UIKeyboardInputModeIndicatorControllerDelegate

@required

- (void)keyboardInputModeIndicatorControllerDismissIndicator:(UIKeyboardInputModeIndicatorController *)arg1;
- (void)keyboardInputModeIndicatorControllerPresentIndicator:(UIKeyboardInputModeIndicatorController *)arg1 reason:(NSString *)arg2;
- (bool)keyboardInputModeIndicatorControllerShouldPresentIndicator:(UIKeyboardInputModeIndicatorController *)arg1;

@end
