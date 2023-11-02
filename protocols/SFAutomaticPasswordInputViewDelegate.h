
@protocol SFAutomaticPasswordInputViewDelegate <NSObject>

@optional

- (void)inputViewControllerDidSelectUseCustomPassword:(SFAutomaticPasswordInputView *)arg1;
- (void)inputViewControllerDidSelectUseStrongPassword:(SFAutomaticPasswordInputView *)arg1;
- (UIMenu *)inputViewControllerOtherOptionsMenu:(SFAutomaticPasswordInputView *)arg1;

@end
