
@protocol WFInputViewMutable <NSObject>

@required

- (UIView *)inputAccessoryView;
- (UIView *)inputView;
- (void)setInputAccessoryView:(UIView *)arg1;
- (void)setInputView:(UIView *)arg1;

@end
