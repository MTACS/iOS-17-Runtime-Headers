
@interface SFMoveAccountsToGroupPickerViewController : _SFAccountTableViewController <SFAccountTableViewCellDelegate, SFTableViewDiffableDataSourceDelegate> {
    WBSAutoFillQuirksManager * _autoFillQuirksManager;
    <SFMoveAccountsToGroupPickerViewControllerDelegate> * _delegate;
    SFTableViewDiffableDataSource * _diffableDataSource;
    KCSharingGroup * _group;
    WBSPasswordWarningManager * _passwordWarningManager;
    long long  _pickerType;
    NSMutableSet * _selectedSavedAccounts;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFMoveAccountsToGroupPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addExistingPasswordsBarItemTapped:(id)arg1;
- (void)_cancel;
- (id)_cellForIdentifier:(id)arg1 tableView:(id)arg2;
- (void)_checkReusedPasswordsAndPresentAlertIfNecessary:(id /* block */)arg1;
- (id)_headerForHeaderSection;
- (id)_headerForMyPasswordsSection;
- (id)_headerForSharingGroupSection:(id)arg1;
- (void)_presentConfirmationAlertForMovingSharedSavedAccountsWithConfiguration:(id)arg1;
- (void)_reloadDiffableDataSource;
- (bool)_shouldShowMyPasswordsSectionHeader;
- (void)_updateNavigationBarItems;
- (bool)canBeShownFromSuspendedState;
- (bool)dataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)delegate;
- (id)initWithGroup:(id)arg1 pickerType:(long long)arg2 autoFillQuirksManager:(id)arg3 passwordWarningManager:(id)arg4;
- (void)searchPatternDidUpdate;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
