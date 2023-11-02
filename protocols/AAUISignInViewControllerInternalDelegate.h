
@protocol AAUISignInViewControllerInternalDelegate <AAUISignInViewControllerDelegate>

@optional

- (AKAppleIDAuthenticationInAppContext *)authenticationContext;
- (void)willAuthenticateWithContext:(AKAppleIDAuthenticationContext *)arg1;

@end
