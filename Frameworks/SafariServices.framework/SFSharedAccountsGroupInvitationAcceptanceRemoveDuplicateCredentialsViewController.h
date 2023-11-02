
@interface SFSharedAccountsGroupInvitationAcceptanceRemoveDuplicateCredentialsViewController : _SFAccountTableViewController <SFAccountTableViewCellDelegate, SFTableViewDiffableDataSourceDelegate> {
    WBSAutoFillQuirksManager * _autoFillQuirksManager;
    <SFSharedAccountsGroupInvitationAcceptanceRemoveDuplicateCredentialsViewControllerDelegate> * _delegate;
    SFTableViewDiffableDataSource * _diffableDataSource;
    KCSharingGroup * _group;
    NSMutableSet * _selectedSavedAccounts;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFSharedAccountsGroupInvitationAcceptanceRemoveDuplicateCredentialsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cellForIdentifier:(id)arg1 tableView:(id)arg2;
- (void)_deleteButtonTapped:(id)arg1;
- (id)_headerForHeaderSection;
- (void)_notNowButtonTapped;
- (void)_reloadDiffableDataSource;
- (void)_updateNavigationBarItems;
- (bool)canBeShownFromSuspendedState;
- (bool)dataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)delegate;
- (id)initWithGroup:(id)arg1 autoFillQuirksManager:(id)arg2;
- (void)searchPatternDidUpdate;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
