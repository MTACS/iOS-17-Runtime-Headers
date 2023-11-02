
@interface _TtCV9PassKitUI29AddBankAccountInformationView11Coordinator : NSObject <PKAddBankAccountInformationViewControllerDelegate> {
    void completionAction;
    void fundingSourceAdded;
}

- (void).cxx_destruct;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (id)init;

@end
