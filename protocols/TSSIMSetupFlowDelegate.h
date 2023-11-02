
@protocol TSSIMSetupFlowDelegate <NSObject>

@required

- (void)viewControllerDidComplete:(UIViewController *)arg1;

@optional

- (void)attemptFailed;
- (void)cancelNextPane;
- (void)maybeRegisterDismissHandler:(UIViewController *)arg1;
- (void)receivedResponse;
- (void)receivedResponseWithVC:(UIViewController *)arg1;
- (void)setDefaultNavigationItems:(UIViewController *)arg1;
- (long long)signupUserConsentResponse;
- (void)userDidTapCancel;
- (void)waitForResponse:(UIViewController *)arg1;

@end
