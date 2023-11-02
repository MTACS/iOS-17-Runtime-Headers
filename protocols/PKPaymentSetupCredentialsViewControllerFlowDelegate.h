
@protocol PKPaymentSetupCredentialsViewControllerFlowDelegate <NSObject>

@required

- (void)credentialsViewController:(PKPaymentSetupCredentialsViewController *)arg1 didSelectCredentials:(NSArray *)arg2;
- (void)credentialsViewControllerDidSelectManualEntry:(PKPaymentSetupCredentialsViewController *)arg1;
- (void)credentialsViewControllerDidSelectSecondaryManualEntry:(PKPaymentSetupCredentialsViewController *)arg1;
- (void)credentialsViewControllerDidTerminate:(PKPaymentSetupCredentialsViewController *)arg1;

@end
