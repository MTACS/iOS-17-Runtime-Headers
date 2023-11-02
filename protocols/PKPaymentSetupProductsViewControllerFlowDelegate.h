
@protocol PKPaymentSetupProductsViewControllerFlowDelegate <NSObject>

@required

- (void)productsViewController:(PKPaymentSetupProductsViewController *)arg1 didSelectProduct:(PKPaymentSetupProduct *)arg2;
- (void)productsViewControllerDidSelectManualEntry:(PKPaymentSetupProductsViewController *)arg1;

@end
