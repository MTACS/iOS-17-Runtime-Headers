
@protocol PKPaymentAutoReloadSetupControllerDelegate <NSObject>

@required

- (void)autoReloadSetupControllerDidCompleteWithAmount:(PKCurrencyAmount *)arg1 threshold:(PKCurrencyAmount *)arg2;

@optional

- (void)autoReloadSetupController:(PKPaymentAutoReloadSetupController *)arg1 requestsDismissViewController:(UIViewController *)arg2;
- (void)autoReloadSetupController:(PKPaymentAutoReloadSetupController *)arg1 requestsPopViewController:(UIViewController *)arg2;
- (void)autoReloadSetupController:(PKPaymentAutoReloadSetupController *)arg1 requestsPresentViewController:(UIViewController *)arg2;
- (void)autoReloadSetupController:(PKPaymentAutoReloadSetupController *)arg1 requestsPushViewController:(UIViewController *)arg2;
- (void)autoReloadSetupControllerDidCancel:(PKPaymentAutoReloadSetupController *)arg1;

@end
