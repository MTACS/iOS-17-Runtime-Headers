
@interface SFSharedAccountsGroupMemberDetailViewController : UITableViewController <SFTableViewDiffableDataSourceDelegate, UIEditMenuInteractionDelegate, UITableViewDelegate, WBSOngoingSharingGroupProviderSubscriber> {
    _ASAccountSharingGroupMemberData * _currentUserGroupMemberData;
    <SFSharedAccountsGroupMemberDetailViewControllerDelegate> * _delegate;
    SFTableViewDiffableDataSource * _diffableDataSource;
    UIEditMenuInteraction * _editMenuInteraction;
    KCSharingGroup * _group;
    _ASAccountSharingGroupMemberData * _groupMemberData;
    unsigned long long  _persona;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFSharedAccountsGroupMemberDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canChangeGroupMemberPermissionLevel;
- (id)_cellForItemIdentifier:(id)arg1;
- (void)_changeGroupMemberPermissionToPermissionLevel:(long long)arg1;
- (void)_configureCanMakeChangesCell:(id)arg1;
- (id)_configureMemberDetailsCell:(id)arg1;
- (id)_configureMemberHeaderCell:(id)arg1;
- (void)_configureRemoveMemberCell:(id)arg1;
- (void)_configureViewOnlyCell:(id)arg1;
- (id)_indexPathForEditMenuInteraction:(id)arg1 withConfiguration:(id)arg2;
- (void)_presentAlertTellingUserThatRemovedGroupMemberMightStillHaveAccessToAccounts;
- (void)_presentContactViewController;
- (void)_presentFailedToUpdatePermissionLevelAlertWithError:(id)arg1;
- (void)_presentRemoveMemberConfirmationAlert;
- (void)_reloadDiffableDataSource;
- (void)_removeGroupMember;
- (bool)_shouldPreventGroupMemberPermissionFromChangingToReadOnly;
- (bool)_shouldShowContactDetails;
- (void)_showPendingRequestUI:(bool)arg1;
- (void)_updatePermissionOnExistingGroupForGroupMemberToPermissionLevel:(long long)arg1;
- (id)dataSource:(id)arg1 footerTextForSection:(long long)arg2;
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;
- (id)delegate;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)groupProviderReceivedUpdates:(id)arg1;
- (id)initWithGroupMemberData:(id)arg1 group:(id)arg2 groupMemberDataForCurrentUser:(id)arg3 persona:(unsigned long long)arg4;
- (void)setDelegate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
