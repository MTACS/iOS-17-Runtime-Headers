
@interface PKPassDetailSchedulePaymentsViewController : PKDynamicTableViewController <PKAccountServiceAccountResolutionControllerDelegate, PKPassDetailScheduledPaymentsSectionControllerDelegate> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKAccountServiceAccountResolutionController * _resolutionController;
    PKPassDetailScheduledPaymentsSectionController * _schedulePaymentsSection;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountResolutionController;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (id)cellForRow:(unsigned long long)arg1 inSection:(id)arg2;
- (void)didSelectInDemoMode;
- (void)didSelectMakePayment;
- (void)didSelectPayment:(id)arg1;
- (void)didSelectSchedulePayments;
- (id)initWithAccount:(id)arg1 pass:(id)arg2 accountService:(id)arg3 accountUserCollection:(id)arg4 transactionSourceCollection:(id)arg5;
- (void)recomputeMappedSectionsAndReloadSections:(id)arg1;

@end
