
@protocol TVRCKeyboardControllerDelegate <NSObject>

@optional

- (void)keyboardController:(TVRCKeyboardController *)arg1 beganTextEditingWithAttributes:(TVRCKeyboardAttributes *)arg2;
- (void)keyboardController:(TVRCKeyboardController *)arg1 didUpdateAttributes:(TVRCKeyboardAttributes *)arg2;
- (void)keyboardController:(TVRCKeyboardController *)arg1 didUpdateText:(NSString *)arg2;
- (void)keyboardControllerEndedTextEditing:(TVRCKeyboardController *)arg1;

@end
