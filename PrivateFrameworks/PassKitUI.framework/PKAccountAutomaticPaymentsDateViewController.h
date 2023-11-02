
@interface PKAccountAutomaticPaymentsDateViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate> {
    PKAccount * _account;
    NSDateFormatter * _cardinalDayDateFormatter;
    PKAccountAutomaticPaymentsDateFooterView * _collectionFooterView;
    PKAccountAutomaticPaymentsController * _controller;
    NSDate * _date;
    unsigned long long  _featureIdentifier;
    PKMonthDayCollectionViewController * _monthDayCollectionViewController;
    NSCalendar * _productCalendar;
    NSTimeZone * _productTimeZone;
    long long  _scheduledDay;
    NSIndexPath * _selectedIndexPath;
    PKTableHeaderView * _tableHeaderView;
    bool  _useOrdinalDay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addBankAccountInformationViewController;
- (id)_footerText;
- (long long)_frequency;
- (void)_handleNext:(id)arg1;
- (void)_handlePresentPayment;
- (void)_performPresentPayment;
- (bool)_shouldShowCollectionView;
- (void)_updateNextButtonEnabledIfNecessary;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)monthDaySelectionViewController:(id)arg1 didSelectDate:(id)arg2 day:(long long)arg3;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableHeaderView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
