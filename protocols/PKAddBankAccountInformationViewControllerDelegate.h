
@protocol PKAddBankAccountInformationViewControllerDelegate <NSObject>

@required

- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(PKAddBankAccountInformationViewController *)arg1;

@optional

- (void)addBankAccountInformationViewController:(PKAddBankAccountInformationViewController *)arg1 didAddFundingSource:(PKAccountPaymentFundingSource *)arg2;
- (void)addBankAccountInformationViewController:(PKAddBankAccountInformationViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(PKAddBankAccountInformationViewController *)arg1;

@end
