
@protocol PKPaymentCredentialProvisioningViewControllerCoordinator <NSObject>

@required

- (void)cancel;
- (void)continueWithFieldModel:(PKPaymentSetupFieldsModel *)arg1;
- (PKSecureElementPass *)provisionedPass;

@end
