
@interface CDPUIBeneficiaryWelcomeViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _accessibleAppsDetails;
    <CDPUIBeneficiaryWelcomeViewControllerDelegate> * _delegate;
    NSArray * _restrictedAppsDetails;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CDPUIBeneficiaryWelcomeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_configurationForIndexPath:(id)arg1;
- (void)_setupAppOptions;
- (void)_setupTableView;
- (void)_setupViews;
- (void)cancelTapped:(id)arg1;
- (id)delegate;
- (id)init;
- (void)learnMoreTapped:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)okTapped:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
