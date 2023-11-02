
@interface NMCUICloudNotificationOnboardingViewController : OBTableWelcomeController <NMCUIAccountDataSourceObserver, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _accounts;
    id /* block */  _completion;
    NMCUICloudNotificationAccountDataSource * _dataSource;
    NSLayoutConstraint * _tableViewHeightConstraint;
}

@property (nonatomic, retain) NSArray *accounts;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NMCUICloudNotificationAccountDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *tableViewHeightConstraint;

+ (id)detailTextForAccounts:(id)arg1;
+ (bool)missingCredentialsForAccounts:(id)arg1;

- (void).cxx_destruct;
- (void)accountDataSourceAccountsChanged:(id)arg1;
- (id)accounts;
- (id /* block */)completion;
- (id)dataSource;
- (void)enableButtonTapped:(id)arg1;
- (id)initWithAccount:(id)arg1 dataSource:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithAccounts:(id)arg1 dataSource:(id)arg2 completion:(id /* block */)arg3;
- (void)notNowButtonTapped:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAccounts:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDataSource:(id)arg1;
- (void)setTableViewHeightConstraint:(id)arg1;
- (void)setupView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableViewHeightConstraint;
- (void)viewDidLayoutSubviews;

@end
