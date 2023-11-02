
@interface PKPaymentSelectPassesViewController : PKPaymentSetupTableViewController {
    NSString * _buttonText;
    bool  _confirmIntentToDelete;
    <PKPaymentSelectPassesViewControllerDelegate> * _delegate;
    NSString * _headerSubtitle;
    NSString * _headerTitle;
    PKTableHeaderView * _headerView;
    unsigned long long  _minimumSelectionCount;
    NSArray * _passes;
    PKPeerPaymentAccount * _peerPaymentAccount;
    NSMutableArray * _selectedIndexPaths;
    bool  _showCancelButton;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic) bool confirmIntentToDelete;
@property (nonatomic, copy) NSString *headerSubtitle;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic) unsigned long long minimumSelectionCount;
@property (nonatomic) bool showCancelButton;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_continuousButtonPressed;
- (void)_setContinuousButtonEnabledState;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)_setViewEnabledState:(bool)arg1;
- (id)buttonText;
- (bool)confirmIntentToDelete;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)headerView;
- (id)initWithSecureElementPasses:(id)arg1 context:(long long)arg2 delegate:(id)arg3 peerPaymentAccount:(id)arg4;
- (unsigned long long)minimumSelectionCount;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setConfirmIntentToDelete:(bool)arg1;
- (void)setHeaderSubtitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (void)setMinimumSelectionCount:(unsigned long long)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (bool)showCancelButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
