
@protocol _SFAutoFillInputViewDelegate <NSObject>

@required

- (void)autoFillTextSuggestion:(_SFTextSuggestion *)arg1;

@optional

- (void)autoFillInputViewDidSelectMorePasswords:(_SFAutoFillInputView *)arg1;
- (void)autoFillInputViewDidSelectUseKeyboard:(_SFAutoFillInputView *)arg1;

@end
