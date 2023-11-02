
@interface SFRecentlyDeletedAccountsViewController : _SFAccountTableViewController <PSStateRestoration, SFAccountDetailViewControllerDelegate, SFAccountTableViewCellDelegate, SFTableViewDiffableDataSourceDelegate, _SFAccountManagerLockableContentContainer> {
    WBSAutoFillQuirksManager * _autoFillQuirksManager;
    UIBarButtonItem * _cancelBarButtonItem;
    UIBarButtonItem * _deleteToolbarItem;
    SFTableViewDiffableDataSource * _diffableDataSource;
    KCSharingGroup * _group;
    unsigned long long  _persona;
    UIBarButtonItem * _recoverMenuToolbarItem;
    UIBarButtonItem * _recoverToolbarItem;
    UIBarButtonItem * _selectBarButtonItem;
    UIBarButtonItem * _toolbarSpacerItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (nonatomic, readonly) bool shouldSuppressAccountManagerLockedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (id)_cellForIdentifier:(id)arg1 tableView:(id)arg2;
- (void)_deleteAccountsAtIndexPaths:(id)arg1;
- (void)_deleteButtonTapped:(id)arg1;
- (id)_headerForHeaderSection;
- (id)_headerForMyPasswordsSection;
- (id)_headerForSharingGroupSection:(id)arg1;
- (id)_initWithAutoFillQuirksManager:(id)arg1;
- (void)_presentAlertToConfirmDeletingAccountsAtIndexPaths:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_recoverButtonTapped:(id)arg1;
- (bool)_recoverSavedAccountToMyPasswords:(id)arg1;
- (void)_recoverSavedAccounts:(id)arg1 shouldRecoverToMyPasswords:(bool)arg2;
- (void)_recoverSelectedAccountsToMyPasswords;
- (void)_recoverSelectedSavedAccounts;
- (id)_recoverSharedAccountsMenu;
- (void)_reloadDiffableDataSource;
- (void)_selectBarButtonItemTapped:(id)arg1;
- (id)_selectedSavedAccounts;
- (void)_setEditing:(bool)arg1;
- (void)_setUpNavigationBarAndToolbarItems;
- (bool)_shouldShowMyPasswordsSectionHeader;
- (bool)_shouldShowToolbarWhenSearching;
- (void)_updateNavigationBar;
- (void)_updateToolbar;
- (bool)canBeShownFromSuspendedState;
- (bool)dataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)initWithAutoFillQuirksManager:(id)arg1;
- (id)initWithAutoFillQuirksManager:(id)arg1 group:(id)arg2;
- (void)passwordManagerWillLock;
- (void)searchPatternDidUpdate;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
