
@interface PKBalanceDetailsViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate> {
    PKPaymentPassAction * _action;
    PKPaymentBalance * _balance;
    NSString * _currencyCode;
    NSString * _currentBalance;
    <PKBalanceDetailsViewControllerDelegate> * _delegate;
    bool  _isPostPaidPass;
    PKPaymentPass * _pass;
    <PKPaymentDataProvider> * _paymentDataProvider;
    NSArray * _reminderAmounts;
    unsigned long long  _selectedReminderAmountIndex;
    bool  _shouldShowReminderSettings;
    long long  _style;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKBalanceDetailsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_balanceDetailsRowTypeForRowIndex:(long long)arg1;
- (void)_handleActionSelected;
- (void)_handleReminderAmountChanged:(id)arg1;
- (void)_initializeReminderAmounts:(id)arg1;
- (long long)_numberOfBalanceDetailsRowsEnabled;
- (long long)_numberOfBalanceDetailsRowsEnabledForRowType:(unsigned long long)arg1;
- (bool)_shouldDisplayAction;
- (void)dealloc;
- (id)delegate;
- (id)initWithBalance:(id)arg1 forPass:(id)arg2 balanceReminder:(id)arg3 associatedAction:(id)arg4 paymentDataProvider:(id)arg5 webService:(id)arg6 style:(long long)arg7;
- (id)initWithBalance:(id)arg1 forPass:(id)arg2 balanceReminder:(id)arg3 balanceName:(id)arg4 currencyCode:(id)arg5 associatedAction:(id)arg6 paymentDataProvider:(id)arg7 webService:(id)arg8 style:(long long)arg9;
- (id)initWithTransitPassProperties:(id)arg1 forPass:(id)arg2 balanceReminder:(id)arg3 associatedAction:(id)arg4 paymentDataProvider:(id)arg5 webService:(id)arg6 style:(long long)arg7;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
