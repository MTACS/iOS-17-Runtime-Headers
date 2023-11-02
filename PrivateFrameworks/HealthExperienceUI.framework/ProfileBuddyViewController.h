
@interface ProfileBuddyViewController : HKTableViewController <HKSimpleDataEntryItemToolbarDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _dataEntryItems;
    <ProfileBuddyViewControllerDelegate> * _delegate;
    WDBuddyFlowContinueFooterView * _footerView;
    bool  _hasSetUpHeaderAndFooterViews;
    HKTitledContactBuddyHeaderView * _headerView;
    WDBuddyFlowUserInfo * _userInfo;
}

@property (nonatomic, readonly) WDBuddyFlowUserInfo *buddyFlowUserInfo;
@property (nonatomic, retain) NSArray *dataEntryItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ProfileBuddyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureHeaderView:(id)arg1;
- (id)_createTableFooterView;
- (id)_createTableHeaderView;
- (void)_localeDidChange:(id)arg1;
- (void)_setupObservers;
- (void)_updateForCurrentSizeCategory;
- (id)buddyFlowUserInfo;
- (void)continueButtonTapped:(id)arg1;
- (void)dataEntryItemDonePressed:(id)arg1;
- (void)dataEntryItemNextPressed:(id)arg1;
- (void)dataEntryItemPrevPressed:(id)arg1;
- (id)dataEntryItems;
- (void)dealloc;
- (id)delegate;
- (void)focusItemAtIndex:(long long)arg1;
- (id)init;
- (id)initWithBuddyFlowUserInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setDataEntryItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUpHeaderAndFooterViewsIfNeeded;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
