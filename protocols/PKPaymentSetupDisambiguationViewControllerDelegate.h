
@protocol PKPaymentSetupDisambiguationViewControllerDelegate <NSObject>

@required

- (void)disambiguationViewController:(PKPaymentSetupDisambiguationViewController *)arg1 didSelectProduct:(PKPaymentSetupProduct *)arg2;
- (void)disambiguationViewControllerSetUpLater:(PKPaymentSetupDisambiguationViewController *)arg1;

@end
