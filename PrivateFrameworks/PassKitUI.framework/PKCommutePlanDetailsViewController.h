
@interface PKCommutePlanDetailsViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate> {
    PKPaymentPassAction * _action;
    PKTransitBalanceModel * _balanceModel;
    bool  _canShowReminders;
    PKTransitCommutePlan * _commutePlan;
    NSArray * _fields;
    PKPaymentPass * _pass;
    <PKPaymentDataProvider> * _paymentDataProvider;
    NSArray * _reminderIntervals;
    unsigned long long  _selectedReminderIntervalsIndex;
    bool  _shouldLoadReminderInterval;
    long long  _style;
    NSDateComponentsFormatter * _timeIntervalFormatter;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_commutePlanBalanceIdentifiers;
- (unsigned long long)_commutePlanDetailsRowTypeForRowIndex:(long long)arg1;
- (void)_handleActionSelected;
- (void)_handleReminderIntervalChanged:(long long)arg1;
- (long long)_numberOfCommutePlanDetailsRowsEnabled;
- (long long)_numberOfCommutePlanDetailsRowsEnabledForRowType:(unsigned long long)arg1;
- (void)_reloadBalance;
- (void)_reloadChangedIndexPathsWithOldIndex:(unsigned long long)arg1 newIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (bool)_shouldShowRenewAction;
- (void)_updateSelectedBalanceReminderWithBalanceReminder:(id)arg1;
- (void)_updateSelectedReminderIntervalsIndexWithReminder:(id)arg1;
- (id)initWithCommutePlan:(id)arg1 associatedAction:(id)arg2 forPass:(id)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 style:(long long)arg6;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceivePlanUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
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
