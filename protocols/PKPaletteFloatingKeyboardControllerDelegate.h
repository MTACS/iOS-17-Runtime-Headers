
@protocol PKPaletteFloatingKeyboardControllerDelegate <NSObject>

@required

- (UIResponder *)responderForFloatingKeyboardController:(PKPaletteFloatingKeyboardController *)arg1;

@optional

- (void)floatingKeyboardController:(PKPaletteFloatingKeyboardController *)arg1 didChangeKeyboardType:(long long)arg2;
- (void)floatingKeyboardController:(PKPaletteFloatingKeyboardController *)arg1 didDismissWithReason:(NSString *)arg2;
- (void)floatingKeyboardControllerWillHide:(PKPaletteFloatingKeyboardController *)arg1;
- (void)floatingKeyboardControllerWillShow:(PKPaletteFloatingKeyboardController *)arg1;

@end
