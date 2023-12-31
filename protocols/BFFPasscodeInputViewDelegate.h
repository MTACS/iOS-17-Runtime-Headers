
@protocol BFFPasscodeInputViewDelegate <NSObject>

@optional

- (void)passcodeInput:(BFFPasscodeInputView *)arg1 enteredPasscode:(NSString *)arg2;
- (void)passcodeInput:(BFFPasscodeInputView *)arg1 tappedFooterButton:(UIButton *)arg2;
- (void)passcodeInput:(BFFPasscodeInputView *)arg1 willChangeContents:(NSString *)arg2;
- (void)passcodeInputTappedInstructionsLink:(BFFPasscodeInputView *)arg1;

@end
