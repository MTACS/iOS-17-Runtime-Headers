
@protocol PKPaymentSetupChooseProductTypeViewControllerFlowDelegate <NSObject>

@required

- (void)chooseProductTypeViewController:(PKPaymentSetupChooseProductTypeViewController *)arg1 didPerformPurchaseWithCredential:(PKPaymentDigitalIssuanceProductCredential *)arg2;
- (void)chooseProductTypeViewController:(PKPaymentSetupChooseProductTypeViewController *)arg1 didSelectServiceProducts:(NSArray *)arg2;
- (void)chooseProductTypeViewControllerDidSelectManualEntry:(PKPaymentSetupChooseProductTypeViewController *)arg1;
- (void)chooseProductTypeViewControllerDidTerminate:(PKPaymentSetupChooseProductTypeViewController *)arg1;

@end
