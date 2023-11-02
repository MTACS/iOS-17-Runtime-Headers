
@protocol PKNumberPadInputViewDelegate <NSObject>

@required

- (void)numberPadInputView:(PKNumberPadInputView *)arg1 requestReplaceSelectedTextFieldRangeWithText:(NSString *)arg2;
- (void)numberPadInputViewRequestDeleteText:(PKNumberPadInputView *)arg1;

@end
