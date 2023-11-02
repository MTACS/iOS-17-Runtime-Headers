
@interface PKPassDetailScheduledPaymentsSectionController : PKPaymentPassDetailSectionController <PKAccountAutomaticPaymentsControllerDelegate, PKAccountServiceObserver> {
    PKAccount * _account;
    PKAccountService * _accountService;
    NSArray * _allSectionIdentifiers;
    <PKPassDetailScheduledPaymentsSectionControllerDelegate> * _delegate;
    NSDateFormatter * _dueDateFormatter;
    NSDateFormatter * _dueTimeFormatter;
    bool  _loadingAutomaticPayments;
    bool  _loadingPayments;
    PKPaymentPass * _pass;
    NSString * _presentationSceneIdentifier;
    NSArray * _recurringPayments;
    NSArray * _scheduledPayments;
    NSArray * _sectionIdentifiers;
    unsigned long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassDetailScheduledPaymentsSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *recurringPayments;
@property (nonatomic, readonly) NSArray *scheduledPayments;
@property (readonly) Class superclass;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (id)_accountServiceScheduledPaymentsCellForRowIndex:(long long)arg1 sectionIdentifier:(id)arg2 tableView:(id)arg3;
- (unsigned long long)_accountServiceScheduledPaymentsRowTypeForRowIndex:(long long)arg1 sectionIdentifier:(id)arg2;
- (id)_dueDateFormatter;
- (id)_dueTimeFormatter;
- (void)_fetchScheduledPaymentsWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)_scheduledPaymentCellForPayment:(id)arg1 tableView:(id)arg2;
- (bool)_shouldDisplaySection:(id)arg1;
- (id)_titleForScheduledPaymentsSection;
- (bool)_updateSections;
- (void)accountAutomaticPaymentsController:(id)arg1 didSchedulePayment:(id)arg2;
- (id)allSectionIdentifiers;
- (void)dealloc;
- (id)delegate;
- (void)fetchScheduledPaymentsAndReloadSections:(id /* block */)arg1;
- (id)initWithStyle:(unsigned long long)arg1 account:(id)arg2 pass:(id)arg3 accountService:(id)arg4 delegate:(id)arg5;
- (void)preflight:(id /* block */)arg1;
- (void)presentSchedulePayments:(id)arg1 completion:(id /* block */)arg2;
- (id)presentationSceneIdentifierForAccountAutomaticPaymentsController:(id)arg1;
- (id)recurringPayments;
- (void)reloadScheduledPayments;
- (id)scheduledPayments;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (void)setCurrentSegment:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldHighlightRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSectionIdentifier:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)titleForFooterInSectionIdentifier:(id)arg1;
- (id)titleForHeaderInSectionIdentifier:(id)arg1;
- (void)updateWithAccount:(id)arg1;

@end
