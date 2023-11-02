
@protocol ACMExternalAppleConnectDelegate <NSObject>

@required

- (void)appleConnect:(ACMAppleConnect *)arg1 authenticationDidEndWithResponse:(id <ACMAuthenticationResponse>)arg2;
- (UIViewController *)appleConnectParentViewController:(ACMAppleConnect *)arg1;

@optional

- (NSString *)appleConnectAccountLabel:(ACMAppleConnect *)arg1;
- (bool)appleConnectCanHideSignInDialog:(ACMAppleConnect *)arg1;
- (id)appleConnectCancelButton:(ACMAppleConnect *)arg1;
- (void)appleConnectDidHideSignInDialog:(ACMAppleConnect *)arg1;
- (void)appleConnectDidShowSignInDialog:(ACMAppleConnect *)arg1;
- (long long)appleConnectPasswordFieldsReturnKeyType:(ACMAppleConnect *)arg1;
- (bool)appleConnectShouldAuthenticateOnUserInput:(ACMAppleConnect *)arg1;
- (bool)appleConnectSignInAnimated:(ACMAppleConnect *)arg1;
- (id)appleConnectSignInButton:(ACMAppleConnect *)arg1;
- (unsigned long long)appleConnectSignInDialogContentStyle:(ACMAppleConnect *)arg1;
- (void)appleConnectSignInDialogDidBecomeDisabled:(ACMAppleConnect *)arg1;
- (void)appleConnectSignInDialogDidBecomeEnabled:(ACMAppleConnect *)arg1;
- (void)appleConnectSignInDialogWillBecomeDisabled:(ACMAppleConnect *)arg1;
- (void)appleConnectSignInDialogWillBecomeEnabled:(ACMAppleConnect *)arg1;
- (NSString *)appleConnectStandardAccountNameFieldPlaceholder:(ACMAppleConnect *)arg1;
- (UIColor *)appleConnectStandardBackgroundColor:(ACMAppleConnect *)arg1;
- (UIImage *)appleConnectStandardLogoImage:(ACMAppleConnect *)arg1;
- (bool)appleConnectUseCustomAppearance:(ACMAppleConnect *)arg1;
- (struct CGPoint { double x1; double x2; })appleConnectWidgetPosition:(ACMAppleConnect *)arg1;
- (void)appleConnectWillHideSignInDialog:(ACMAppleConnect *)arg1;
- (void)appleConnectWillShowSignInDialog:(ACMAppleConnect *)arg1;

@end
