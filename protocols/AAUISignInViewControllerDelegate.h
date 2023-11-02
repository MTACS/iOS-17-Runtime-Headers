
@protocol AAUISignInViewControllerDelegate <NSObject>

@optional

- (void)signInViewController:(AAUISignInViewController *)arg1 didCompleteWithAuthenticationResults:(NSDictionary *)arg2;
- (void)signInViewControllerDidCancel:(AAUISignInViewController *)arg1;
- (void)signInViewControllerDidSelectChildSignIn:(AAUISignInViewController *)arg1;
- (void)signInViewControllerDidSkip:(AAUISignInViewController *)arg1;

@end
