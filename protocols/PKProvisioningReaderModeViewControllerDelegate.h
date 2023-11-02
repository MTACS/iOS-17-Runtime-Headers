
@protocol PKProvisioningReaderModeViewControllerDelegate <NSObject>

@required

- (void)provisionWithFieldModel:(PKPaymentSetupFieldsModel *)arg1 paymentCredential:(PKPaymentContactlessProductCredential *)arg2;
- (PKSecureElementPass *)provisionedPass;
- (void)viewControllerDidCancel:(PKProvisioningReaderModeViewController *)arg1;
- (void)viewControllerDidComplete:(PKProvisioningReaderModeViewController *)arg1;
- (void)viewControllerDidFailIngestion:(PKProvisioningReaderModeViewController *)arg1;

@end
