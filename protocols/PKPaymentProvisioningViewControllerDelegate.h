
@protocol PKPaymentProvisioningViewControllerDelegate <NSObject>

@required

- (void)provisioningViewController:(PKPaymentSetupProvisioningFieldsViewController *)arg1 didFinishWithSuccess:(bool)arg2;

@optional

- (void)provisioningViewControllerDidSelectManualEntry:(PKPaymentSetupProvisioningFieldsViewController *)arg1;

@end
