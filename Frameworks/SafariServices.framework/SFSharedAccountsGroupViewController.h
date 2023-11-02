
@interface SFSharedAccountsGroupViewController : UITableViewController <MFMessageComposeViewControllerDelegate, SFSharedAccountsGroupMemberDetailViewControllerDelegate, SFSharedAccountsGroupMemberPickerViewControllerDelegate, SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate, SFTableViewDiffableDataSourceDelegate, UITableViewDelegate, UITextFieldDelegate, WBSOngoingSharingGroupProviderSubscriber> {
    <SFSharedAccountsGroupViewControllerDelegate> * _delegate;
    SFTableViewDiffableDataSource * _diffableDataSource;
    KCSharingGroup * _group;
    _ASAccountSharingGroupMemberData * _groupMemberDataForCurrentUser;
    UITableViewCell * _groupNameTableViewCell;
    bool  _isShowingActivityIndicator;
    unsigned long long  _persona;
    bool  _shouldStartAcceleratedAddMembersFlow;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFSharedAccountsGroupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)groupCreationViewControllerWithInitialParticipants:(id)arg1 prepopulatedName:(id)arg2;
+ (id)groupManagementViewControllerForGroup:(id)arg1;
+ (id)groupManagementViewControllerForGroup:(id)arg1 shouldStartAcceleratedAddMembersFlow:(bool)arg2;

- (void).cxx_destruct;
- (id)_addGroupMembersCell;
- (void)_addGroupMembersToKCSharingGroup:(id)arg1;
- (void)_cancelButtonPressed;
- (id)_cellForItemIdentifier:(id)arg1;
- (void)_configureGroupMemberCell:(id)arg1 withData:(id)arg2;
- (void)_configureNavigationBar;
- (void)_configureNavigationBarForCreatePersona;
- (void)_configureNavigationBarForManagePersona;
- (void)_createButtonPressed;
- (void)_deleteGroup;
- (id)_deleteGroupCell;
- (void)_didSelectRowForGroupMemberData:(id)arg1;
- (void)_doneButtonPressed;
- (void)_editButtonPressed;
- (id)_groupNameTextFieldCell;
- (void)_groupNameTextFieldChanged;
- (void)_groupNameTextFieldDidBeginEditing;
- (id)_groupOwnerCell;
- (id)_initWithPersona:(unsigned long long)arg1 group:(id)arg2;
- (long long)_itemTypeForIdentifier:(id)arg1;
- (void)_leaveGroup;
- (id)_leaveGroupCell;
- (void)_moveContributedCredentialsBackToPersonalKeychainAndDeleteGroup;
- (void)_moveContributedCredentialsBackToPersonalKeychainAndLeaveGroup;
- (void)_presentDeleteGroupConfirmationAlert;
- (void)_presentErrorAlertWithString:(id)arg1;
- (void)_presentGroupMemberPickerViewController;
- (void)_presentLeaveGroupConfirmationAlert;
- (void)_reloadDiffableDataSource;
- (void)_removeGroupMemberFromKCSharingGroup:(id)arg1;
- (void)_saveButtonPressed;
- (void)_setIsRunningActivityForUserToWaitOn:(bool)arg1;
- (void)_showGroupInviteMessageComposeSheetForGroup:(id)arg1 invitedGroupMemberData:(id)arg2;
- (void)_showGroupInviteMessagePreviewForGroup:(id)arg1 invitedGroupMembers:(id)arg2;
- (void)_startAcceleratedAddMembersFlowIfNeeded;
- (id)dataSource:(id)arg1 footerTextForSection:(long long)arg2;
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;
- (id)delegate;
- (void)groupMemberDetailViewController:(id)arg1 changedPermissionForGroupMember:(id)arg2 toPermissionLevel:(long long)arg3;
- (void)groupMemberDetailViewController:(id)arg1 removedGroupMember:(id)arg2;
- (void)groupMessageInvitePreviewViewControllerDidSelectCancel:(id)arg1;
- (void)groupMessageInvitePreviewViewControllerDidSelectContinue:(id)arg1;
- (void)groupProviderReceivedUpdates:(id)arg1;
- (void)memberPickerViewController:(id)arg1 addedRecipients:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
