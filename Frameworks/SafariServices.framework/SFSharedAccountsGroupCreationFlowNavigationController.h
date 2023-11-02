
@interface SFSharedAccountsGroupCreationFlowNavigationController : UINavigationController <MFMessageComposeViewControllerDelegate, SFMoveAccountsToGroupPickerViewControllerDelegate, SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate, SFSharedAccountsGroupViewControllerDelegate, _ASAccountSharingGroupOnBoardingViewControllerDelegate> {
    PMDeviceSharingAvailability * _deviceSharingAvailability;
    KCSharingGroup * _group;
    bool  _hasFetchedDeviceList;
    bool  _isWaitingOnDeviceListToContinueFlow;
    long long  _originType;
    NSArray * _participants;
    WBSPasswordWarningManager * _passwordWarningManager;
    WBSSavedAccount * _savedAccountToMoveToNewlyCreatedGroup;
    <SFSharedAccountsGroupCreationFlowNavigationControllerDelegate> * _sharingDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSSavedAccount *savedAccountToMoveToNewlyCreatedGroup;
@property (nonatomic) <SFSharedAccountsGroupCreationFlowNavigationControllerDelegate> *sharingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeFlowWithGroup:(id)arg1 error:(id)arg2;
- (id)_composeSharedCredentialsGroupCreationViewController;
- (void)_fetchDeviceLists;
- (void)_presentDeviceListViewIfNecessary;
- (void)_presentErrorAlertForFailingToMoveAccountToGroup:(id)arg1;
- (void)_presentSharedCredentialsGroupCreationViewController;
- (void)_showGroupInviteMessageComposeSheetForGroupWithInvitedGroupMemberData:(id)arg1;
- (void)_showGroupInviteMessagePreviewIfNecessary;
- (void)_showMoveAccountsPickerIfNecessary;
- (void)accountSharingGroupOnBoardingViewControllerDidSelectCancel:(id)arg1;
- (void)accountSharingGroupOnBoardingViewControllerDidSelectContinue:(id)arg1;
- (void)createGroupViewController:(id)arg1 completedWithGroup:(id)arg2 error:(id)arg3;
- (void)groupMessageInvitePreviewViewControllerDidSelectCancel:(id)arg1;
- (void)groupMessageInvitePreviewViewControllerDidSelectContinue:(id)arg1;
- (id)initWithOriginType:(long long)arg1 initialParticipants:(id)arg2 passwordWarningManager:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)moveAccountsToGroupPickerTableViewController:(id)arg1 didPickSavedAccounts:(id)arg2;
- (void)moveAccountsToGroupPickerTableViewControllerDidCancel:(id)arg1;
- (id)savedAccountToMoveToNewlyCreatedGroup;
- (void)setSavedAccountToMoveToNewlyCreatedGroup:(id)arg1;
- (void)setSharingDelegate:(id)arg1;
- (id)sharingDelegate;

@end
