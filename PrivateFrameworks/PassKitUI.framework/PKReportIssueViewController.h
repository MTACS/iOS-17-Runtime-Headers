
@interface PKReportIssueViewController : PKSectionTableViewController <PKPaymentServiceDelegate, UITextViewDelegate> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    UIActivityIndicatorView * _activityIndicator;
    PKBusinessChatController * _businessChatController;
    bool  _canPerformCancelAccountServicePayment;
    bool  _canPerformDispute;
    bool  _canPerformIncorrectMerchant;
    bool  _canPerformOther;
    bool  _canPerformUnrecognizedTransaction;
    UIBarButtonItem * _cancelButton;
    bool  _cancelingPayment;
    unsigned long long  _context;
    PKFamilyMemberCollection * _familyCollection;
    UITableViewHeaderFooterView * _footerView;
    bool  _hasDisputeTypeSelected;
    bool  _hasIssueSelected;
    bool  _hasMapsIssueSelected;
    UIImageView * _logoView;
    PKPaymentPass * _paymentPass;
    PKPaymentService * _paymentService;
    PKPaymentWebService * _paymentWebService;
    NSSet * _physicalCards;
    bool  _reportingIssue;
    long long  _selectedDisputeType;
    long long  _selectedIssue;
    long long  _selectedMapsIssue;
    NSString * _statementName;
    UIBarButtonItem * _submitButton;
    PKPaymentTransaction * _transaction;
    PKPaymentTransactionCellController * _transactionCellController;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canReportIssueForTransaction:(id)arg1 paymentPass:(id)arg2;
+ (bool)canSelectIssueTypeForTransaction:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_cancelPayment;
- (id)_commentsCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_disputeTypeCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_formattedStatementNameFromRawName:(id)arg1;
- (void)_handleDisputeTypeSelectedInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_handleIssueTypeSelectedInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_handleMapsIssueTypeSelectedInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_issueTypeCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (bool)_issueTypeEnabled:(long long)arg1;
- (long long)_issueTypeForRowIndex:(long long)arg1;
- (id)_mapsIssueCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)_numberOfIssueTypesEnabled;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 dismissAfter:(bool)arg3;
- (void)_reportIssueInBusinessChat;
- (void)_reportIssueToMaps;
- (void)_reprocessTransactionMerchantWithIssueReportIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_resetMapsMerchantAndBrandWithIssueReportIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (long long)_rowIndexForIssueType:(long long)arg1;
- (id)_statementName;
- (id)_statementNameCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_submitButtonTapped:(id)arg1;
- (id)_transactionCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateFooterPlacement;
- (void)_updateNavigationButtons;
- (void)didUpdateFamilyMembers:(id)arg1;
- (id)initWithTransaction:(id)arg1 transactionSourceCollection:(id)arg2 paymentPass:(id)arg3 familyCollection:(id)arg4 account:(id)arg5 accountUserCollection:(id)arg6 physicalCards:(id)arg7 detailViewStyle:(long long)arg8 context:(unsigned long long)arg9;
- (void)scrollViewDidScroll:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
