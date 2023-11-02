
@protocol ACMSignInDialogCustomProtocol <ACMSignInDialogProtocol>

@required

- (UIColor *)backgroundColor;
- (UIBarButtonItem *)cancelBarButton;
- (UIButton *)cancelButton;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)setCancelBarButton:(UIBarButtonItem *)arg1;
- (void)setCancelButton:(UIButton *)arg1;
- (void)setShouldAuthenticateOnUserInput:(bool)arg1;
- (void)setSignInBarButton:(UIBarButtonItem *)arg1;
- (void)setSignInButton:(UIButton *)arg1;
- (void)setUserNameFieldEditable:(bool)arg1;
- (void)setWidgetAccountLabel:(NSString *)arg1;
- (void)setWidgetClass:(Class)arg1;
- (void)setWidgetPasswordReturnKeyType:(long long)arg1;
- (void)setWidgetPosition:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldAuthenticateOnUserInput;
- (UIBarButtonItem *)signInBarButton;
- (UIButton *)signInButton;
- (bool)userNameFieldEditable;
- (NSString *)widgetAccountLabel;
- (Class)widgetClass;
- (long long)widgetPasswordReturnKeyType;
- (struct CGPoint { double x1; double x2; })widgetPosition;

@end
