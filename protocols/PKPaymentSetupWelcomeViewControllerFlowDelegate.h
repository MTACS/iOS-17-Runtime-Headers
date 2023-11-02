
@protocol PKPaymentSetupWelcomeViewControllerFlowDelegate <NSObject>

@required

- (void)welcomeViewController:(PKPaymentSetupWelcomeViewController *)arg1 didSelectCategory:(PKPaymentSetupProductCategory *)arg2 products:(NSArray *)arg3;
- (void)welcomeViewControllerDidSelectCardsOnFile:(PKPaymentSetupWelcomeViewController *)arg1;
- (void)welcomeViewControllerDidSelectManualEntry:(PKPaymentSetupWelcomeViewController *)arg1;

@end
