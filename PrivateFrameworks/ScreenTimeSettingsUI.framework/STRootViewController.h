
@interface STRootViewController : STPINListViewController {
    STEnableScreenTimeGroupSpecifierProvider * _enableScreenTimeGroupSpecifierProvider;
    STNoUsageReportedGroupSpecifierProvider * _noUsageReportedGroupSpecifierProvider;
    bool  _presentedAsModal;
    STScreenTimeGroupSpecifierProvider * _screenTimeGroupSpecifierProvider;
    bool  _shouldRefreshUsageData;
}

@property (readonly) STEnableScreenTimeGroupSpecifierProvider *enableScreenTimeGroupSpecifierProvider;
@property (readonly) STNoUsageReportedGroupSpecifierProvider *noUsageReportedGroupSpecifierProvider;
@property (nonatomic, readonly) bool presentedAsModal;
@property (readonly) STScreenTimeGroupSpecifierProvider *screenTimeGroupSpecifierProvider;
@property (nonatomic) bool shouldRefreshUsageData;

- (void).cxx_destruct;
- (void)_startObservingCoordinator;
- (void)_stopObservingCoordinator;
- (void)_toggleNewUsageAction:(id)arg1;
- (void)dealloc;
- (void)doneButtonAction:(id)arg1;
- (id)enableScreenTimeGroupSpecifierProvider;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithRootViewModelCoordinator:(id)arg1;
- (id)initWithRootViewModelCoordinator:(id)arg1 presentedAsModal:(bool)arg2;
- (id)noUsageReportedGroupSpecifierProvider;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)presentedAsModal;
- (id)screenTimeGroupSpecifierProvider;
- (void)setShouldRefreshUsageData:(bool)arg1;
- (void)setSpecifier:(id)arg1;
- (bool)shouldRefreshUsageData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
