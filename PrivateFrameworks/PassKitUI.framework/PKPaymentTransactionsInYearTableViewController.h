
@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <CNAvatarViewDelegate, PKDashboardTransactionFetcherDelegate> {
    PKAccount * _account;
    NSCalendar * _calendar;
    PKContactResolver * _contactResolver;
    bool  _contentRevealed;
    NSDate * _dateFromYear;
    long long  _detailViewStyle;
    PKFamilyMemberCollection * _familyCollection;
    NSArray * _instantWithdrawalFeesTransactionGroups;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    PKPeerPaymentWebService * _peerPaymentWebService;
    PKPaymentTransactionCellController * _transactionCellController;
    PKPaymentTransactionDetailsFactory * _transactionDetailsFactory;
    PKDashboardTransactionFetcher * _transactionFetcher;
    NSDateFormatter * _transactionMonthFormatter;
    PKTransactionSourceCollection * _transactionSourceCollection;
    NSSet * _transactionSourceIdentifiers;
    NSArray * _transactionsByMonth;
    NSDateFormatter * _withdrawalFeeMonthYearFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)titleForYear:(id)arg1;

- (void).cxx_destruct;
- (void)_fetchDataWithCompletion:(id /* block */)arg1;
- (long long)_sectionTypeForSection:(long long)arg1;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (id)_transactionMonthFormatter;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)_updateWithTransactions:(id)arg1 completion:(id /* block */)arg2;
- (id)_withdrawalFeeMonthYearFormatter;
- (id)initWithDateFromYear:(id)arg1 calendar:(id)arg2 transactionSourceCollection:(id)arg3 familyCollection:(id)arg4 detailViewStyle:(long long)arg5 paymentServiceDataProvider:(id)arg6 contactResolver:(id)arg7 peerPaymentWebService:(id)arg8 account:(id)arg9;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)transactionsChanged:(id)arg1;
- (void)viewDidLoad;

@end
