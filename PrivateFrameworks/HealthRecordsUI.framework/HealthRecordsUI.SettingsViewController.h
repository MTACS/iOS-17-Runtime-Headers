
@interface HealthRecordsUI.SettingsViewController : HKTableViewController <HKClinicalAccountStoreStateChangeListener, HKSourceListDataSourceObserver> {
    void $__lazy_storage_$_shouldEnableAddAccounts;
    void accountLoadingToken;
    void accounts;
    void appSourceModels;
    void factory;
    void profile;
    void researchStudySourceModels;
    void sourceListDataSource;
    void sourceLoadingToken;
}

- (void).cxx_destruct;
- (void)clinicalAccountStore:(id)arg1 accountDidChange:(id)arg2 changeType:(long long)arg3;
- (void)closeButtonTapped;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithUsingInsetStyling:(bool)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tapToRadar:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
