
@protocol DMCEnrollmentAuthenticationViewControllerDelegate <NSObject>

@required

- (void)authenticationViewController:(DMCEnrollmentAuthenticationViewController *)arg1 didReceivePassword:(NSString *)arg2 forUsername:(NSString *)arg3;
- (void)authenticationViewController:(DMCEnrollmentAuthenticationViewController *)arg1 didReceiveUsername:(NSString *)arg2;
- (void)authenticationViewControllerDidCancel:(DMCEnrollmentAuthenticationViewController *)arg1;

@end
