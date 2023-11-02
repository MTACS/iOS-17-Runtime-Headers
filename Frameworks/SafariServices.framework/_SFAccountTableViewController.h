
@interface _SFAccountTableViewController : UITableViewController <SFAccountDetailViewControllerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, _SFAccountIconControllerDelegate, _SFAccountManagerLockableContentContainer> {
    _SFAccountTableConfiguration * _configuration;
    _SFAccountIconController * _iconController;
    bool  _isOneTimeSharingAccount;
    UISearchController * _searchController;
    NSString * _searchPattern;
    NSCountedSet * _visibleDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFAccountIconController *iconController;
@property (nonatomic, retain) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, readonly) NSString *searchPattern;
@property (nonatomic, retain) NSString *searchQuery;
@property (nonatomic, readonly) bool shouldSuppressAccountManagerLockedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allSharedCredentialGroupsMenuForSavedAccount:(id)arg1;
- (id)_contextMenuForSavedAccountAtIndexPath:(id)arg1;
- (void)_fillPasswordForSavedAccount:(id)arg1;
- (void)_fillUsernameForSavedAccount:(id)arg1;
- (void)_fillVerificationCodeForSavedAccount:(id)arg1;
- (bool)_hasMarkedText;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_shareSavedAccount:(id)arg1 authenticationContext:(id)arg2 modalPresentationSourceView:(id)arg3;
- (void)_shareSavedAccount:(id)arg1 modalPresentationSourceView:(id)arg2;
- (bool)_shouldShowDeleteContextMenuItemForSavedAccount:(id)arg1;
- (bool)_shouldShowToolbarWhenSearching;
- (void)_updateIconForDomain:(id)arg1 forCell:(id)arg2;
- (void)handleContextMenuDeleteForIndexPath:(id)arg1;
- (void)handleIconDidUpdateForDomain:(id)arg1;
- (id)iconController;
- (id)iconControllerForAccountDetailViewController:(id)arg1;
- (void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2;
- (id)initWithSiteMetadataManager:(id)arg1 configuration:(id)arg2;
- (long long)positionForBar:(id)arg1;
- (void)presentConfirmationAlertToShareSavedAccount:(id)arg1 toGroup:(id)arg2;
- (void)presentSharedAccountGroupCreationFlowWithSavedAccountToAddToNewlyCreatedGroup:(id)arg1;
- (id)searchController;
- (id)searchPattern;
- (void)searchPatternDidUpdate;
- (id)searchQuery;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setIconController:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (bool)shouldSuppressAccountManagerLockedView;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
