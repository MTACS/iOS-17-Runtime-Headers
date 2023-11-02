
@protocol OBPasscodeInputViewDelegate <NSObject>

@required

- (void)passcodeInput:(OBPasscodeInputView *)arg1 enteredPasscode:(NSString *)arg2;
- (void)passcodeInput:(OBPasscodeInputView *)arg1 willChangeContents:(NSString *)arg2;

@end
