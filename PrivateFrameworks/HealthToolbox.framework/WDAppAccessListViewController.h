
@interface WDAppAccessListViewController : HKTableViewController {
    NSArray * _allowedApps;
    HKAuthorizationStore * _authorizationStore;
    UIFont * _bodyFont;
    NSArray * _disallowedApps;
    HKHealthStore * _healthStore;
    HKSample * _sample;
}

@property (nonatomic, retain) NSArray *allowedApps;
@property (nonatomic, retain) UIFont *bodyFont;
@property (nonatomic, retain) NSArray *disallowedApps;
@property (nonatomic, retain) HKSample *sample;

- (void).cxx_destruct;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (id)_identifierForCellInSection:(long long)arg1;
- (void)_loadIconForSource:(id)arg1 onCell:(id)arg2 ofTableView:(id)arg3;
- (void)_refreshAppAuthorizationData;
- (id)_sourceForIndexPath:(id)arg1;
- (id)_textForCellAtIndexPath:(id)arg1;
- (id)allowedApps;
- (id)bodyFont;
- (id)disallowedApps;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetAccess;
- (id)sample;
- (void)setAllowedApps:(id)arg1;
- (void)setBodyFont:(id)arg1;
- (void)setDisallowedApps:(id)arg1;
- (void)setSample:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
