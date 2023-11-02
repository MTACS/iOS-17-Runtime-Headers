
@protocol PKListTextFieldContentViewDelegate <NSObject>

@optional

- (void)textFieldDidBeginEditing:(UITextField *)arg1 forContentView:(PKListTextFieldContentView *)arg2;
- (void)textFieldDidChangeSelection:(UITextField *)arg1 forContentView:(PKListTextFieldContentView *)arg2;
- (void)textFieldDidEndEditing:(UITextField *)arg1 forContentView:(PKListTextFieldContentView *)arg2;
- (bool)textFieldShouldReturn:(UITextField *)arg1 forContentView:(PKListTextFieldContentView *)arg2;

@end
