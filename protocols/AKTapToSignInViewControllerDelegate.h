
@protocol AKTapToSignInViewControllerDelegate <AKSignInViewControllerDelegate>

@required

- (void)tapToSignInViewController:(AKTapToSignInViewController *)arg1 didAuthenticateWithResults:(NSDictionary *)arg2 error:(NSError *)arg3;

@end
