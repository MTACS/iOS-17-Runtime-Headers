
@protocol TVRAlertControllerDelegate <NSObject>

@required

- (void)alertController:(TVRAlertController *)arg1 enteredText:(NSString *)arg2;
- (void)alertController:(TVRAlertController *)arg1 generatedTextInputPayload:(RTIDataPayload *)arg2;
- (void)alertControllerCancelled:(TVRAlertController *)arg1;
- (void)alertControllerHitKeyboardReturnKey:(TVRAlertController *)arg1;
- (void)alertControllerPressedDictationButton:(TVRAlertController *)arg1;
- (void)alertControllerReleasedDictationButton:(TVRAlertController *)arg1;

@end
