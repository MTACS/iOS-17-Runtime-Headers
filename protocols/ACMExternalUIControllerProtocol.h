
@protocol ACMExternalUIControllerProtocol <ACMUIControllerProtocol>

@required

- (NSString *)accountNameFieldPlaceholder;
- (UIColor *)backgroundColor;
- (id)cancelButton;
- (UIImage *)logoImage;
- (NSString *)password;
- (void)setAccountNameFieldPlaceholder:(NSString *)arg1;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setLogoImage:(UIImage *)arg1;
- (void)setPassword:(NSString *)arg1;
- (void)setShouldAuthenticateOnUserInput:(bool)arg1;
- (void)setSignInButton:(id)arg1;
- (void)setSignInStyle:(unsigned long long)arg1;
- (void)setWidgetAccountLabel:(NSString *)arg1;
- (void)setWidgetPasswordReturnKeyType:(long long)arg1;
- (void)setWidgetPosition:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldAuthenticateOnUserInput;
- (id)signInButton;
- (unsigned long long)signInStyle;
- (NSString *)widgetAccountLabel;
- (long long)widgetPasswordReturnKeyType;
- (struct CGPoint { double x1; double x2; })widgetPosition;

@end
