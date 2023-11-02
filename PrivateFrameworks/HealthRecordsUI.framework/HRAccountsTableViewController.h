
@interface HRAccountsTableViewController : UITableViewController {
    NSArray * _accounts;
    <HRRecordViewControllerFactory> * _factory;
    HRContentStatusView * _loadingView;
    HRProfile * _profile;
}

@property (nonatomic, retain) NSArray *accounts;
@property (nonatomic, retain) <HRRecordViewControllerFactory> *factory;
@property (nonatomic, retain) HRContentStatusView *loadingView;
@property (nonatomic, readonly) HRProfile *profile;

- (void).cxx_destruct;
- (void)_hideLoadingIndicator;
- (void)_reloadAccounts;
- (void)_showLoadingIndicator;
- (id)accounts;
- (id)factory;
- (id)init;
- (id)loadingView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (void)setAccounts:(id)arg1;
- (void)setFactory:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
