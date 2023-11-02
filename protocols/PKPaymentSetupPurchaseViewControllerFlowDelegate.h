
@protocol PKPaymentSetupPurchaseViewControllerFlowDelegate

@required

- (void)purchaseViewController:(PKPaymentSetupPurchaseViewController *)arg1 didPerformPurchaseWithCredential:(PKPaymentDigitalIssuanceProductCredential *)arg2;
- (void)purchaseViewControllerDidRequestTransferBalance:(PKPaymentSetupPurchaseViewController *)arg1;

@end
