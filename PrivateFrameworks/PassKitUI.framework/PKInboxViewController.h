
@interface PKInboxViewController : UITableViewController <PKPaymentSetupViewControllerDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    PKApplyController * _applyController;
    PKContactAvatarManager * _avatarManager;
    long long  _context;
    PKInboxDataSource * _dataSource;
    PKTableViewDiffableDataSource * _diffableDataSource;
    bool  _disableSelection;
    PKTableHeaderView * _headerView;
    double  _previousHeaderHeight;
    PKSecurityCapabilitiesController * _securityCapabilitiesController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkManateeCapabilityForFeatureApplication:(id)arg1 completion:(id /* block */)arg2;
- (id)_configurationForInboxMessage:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_presentAccountUserInvitation:(id)arg1;
- (void)_presentExpiredAlertForInboxMessage:(id)arg1;
- (void)_presentInboxMessage:(id)arg1;
- (void)_presentManateeUpgradeForFeatureApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)_showSpinner:(bool)arg1;
- (void)_updateDiffableDataSourceAnimated:(bool)arg1;
- (void)_updateImage:(id)arg1 onCellAtIndexPath:(id)arg2;
- (id)initWithInboxDataSource:(id)arg1 contactAvatarManager:(id)arg2 context:(long long)arg3;
- (void)presentInboxMessageWithIdentifier:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
