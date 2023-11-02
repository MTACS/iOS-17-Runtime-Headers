
@protocol PKPaymentProvisioningControllerDelegate <NSObject>

@optional

- (void)metadataUpdatedOnCredentials;
- (void)paymentPassUpdatedOnCredential:(PKPaymentCredential *)arg1;
- (void)preflightRequirementsUpdated:(unsigned long long)arg1 displayableError:(NSError *)arg2;
- (void)provisioningControllerUpdatedAccounts:(PKPaymentProvisioningController *)arg1;
- (void)provisioningControllerUpdatedPendingProvisioning:(PKPaymentProvisioningController *)arg1;
- (void)provisioningControllerUpdatedProducts:(PKPaymentProvisioningController *)arg1;

@end
