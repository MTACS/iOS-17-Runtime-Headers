
@interface HKObjectDataAccessViewController : HKTableViewController <HKSwitchTableViewCellDelegate> {
    NSMutableDictionary * _authorizationByApp;
    HKAuthorizationStore * _authorizationStore;
    UIFont * _bodyFont;
    HKDisplayType * _displayType;
    HKTitledIconHeaderView * _headerView;
    HKHealthStore * _healthStore;
    NSArray * _orderedApps;
    HKSample * _sample;
}

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_cellForSource:(id)arg1 tableView:(id)arg2;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (id)_headerSubtitle;
- (void)_loadIconForSource:(id)arg1 onCell:(id)arg2 ofTableView:(id)arg3;
- (id)_noAppsCell;
- (void)_refreshAppAuthorizationData;
- (void)_setupHeaderViewSize;
- (id)bodyFont;
- (void)dealloc;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
