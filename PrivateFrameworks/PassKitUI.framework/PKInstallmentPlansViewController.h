
@interface PKInstallmentPlansViewController : UITableViewController <PKPaymentDataProviderDelegate> {
    PKAccount * _account;
    PKAccountService * _accountService;
    PKAccountUserCollection * _accountUserCollection;
    NSArray * _activeInstallmentPlans;
    NSArray * _completedInstallmentPlans;
    <PKPaymentDataProvider> * _dataProvider;
    PKFamilyMemberCollection * _familyCollection;
    NSDateFormatter * _installmentDateFormatter;
    NSMutableDictionary * _installmentPlanImages;
    NSMutableDictionary * _installmentPlanToDeviceName;
    NSSet * _physicalCards;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKTransactionSourceCollection *transactionSourceCollection;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 forInstallmentPlan:(id)arg2;
- (void)_handleAccountUpdatedNotification:(id)arg1;
- (id)_imageWithURL:(id)arg1 installmentPlan:(id)arg2;
- (id)_indexPathForInstallmentPlan:(id)arg1;
- (id)_installmentPlanForIndexPath:(id)arg1;
- (void)_updateInstallmentPlans;
- (void)didUpdateFamilyMembers:(id)arg1;
- (id)initWithAccount:(id)arg1 accountUserCollection:(id)arg2 physicalCards:(id)arg3 accountService:(id)arg4 transactionSourceCollection:(id)arg5 familyCollection:(id)arg6 dataProvider:(id)arg7;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)transactionSourceCollection;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
