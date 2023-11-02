
@protocol ACMSignInWidgetProtocol <NSObject>

@required

- (UITextField *)accountField;
- (NSString *)accountLabelText;
- (UIColor *)backgroundColor;
- (<ACMSignInWidgetDelegate> *)delegate;
- (void)disableControls:(bool)arg1;
- (UITextField *)passwordField;
- (NSDictionary *)placeholderAttributes;
- (struct CGPoint { double x1; double x2; })position;
- (void)setAccountLabelText:(NSString *)arg1;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)setDelegate:(id <ACMSignInWidgetDelegate>)arg1;
- (void)setPlaceholderAttributes:(NSDictionary *)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldAuthenticateOnUserInput:(bool)arg1;
- (bool)shouldAuthenticateOnUserInput;
- (UIView *)view;

@end
