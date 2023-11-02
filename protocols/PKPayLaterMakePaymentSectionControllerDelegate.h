
@protocol PKPayLaterMakePaymentSectionControllerDelegate <PKPayLaterViewControllerDelegate>

@required

- (void)sectionController:(PKPayLaterMakePaymentSectionController *)arg1 didUpdateCurrentSelectedAmount:(PKCurrencyAmount *)arg2;

@end
