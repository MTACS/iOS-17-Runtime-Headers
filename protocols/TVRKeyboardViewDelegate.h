
@protocol TVRKeyboardViewDelegate <NSObject>

@required

- (void)keyboardView:(TVRKeyboardView *)arg1 didUpdateText:(NSString *)arg2;
- (void)keyboardView:(TVRKeyboardView *)arg1 generatedTextInputPayload:(RTIDataPayload *)arg2;
- (void)keyboardViewDidCancel:(TVRKeyboardView *)arg1;
- (void)keyboardViewDidHitReturnKey:(TVRKeyboardView *)arg1;
- (void)keyboardViewPressedDictationButton:(TVRKeyboardView *)arg1;
- (void)keyboardViewReleasedDictationButton:(TVRKeyboardView *)arg1;

@end
