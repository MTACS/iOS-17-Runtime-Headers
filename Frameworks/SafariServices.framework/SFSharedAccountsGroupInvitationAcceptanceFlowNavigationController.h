
@interface SFSharedAccountsGroupInvitationAcceptanceFlowNavigationController : UINavigationController <SFMoveAccountsToGroupPickerViewControllerDelegate, SFSharedAccountsGroupInvitationAcceptanceRemoveDuplicateCredentialsViewControllerDelegate, _ASAccountSharingGroupOnBoardingViewControllerDelegate> {
    WBSAutoFillQuirksManager * _autoFillQuirksManager;
    PMDeviceSharingAvailability * _deviceSharingAvailability;
    KCSharingGroup * _group;
    bool  _hasFetchedDeviceList;
    bool  _isWaitingOnDeviceListToContinueFlow;
    WBSPasswordWarningManager * _passwordWarningManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchDeviceLists;
- (void)_presentDeviceListViewIfNecessary;
- (void)_presentMoveAccountViewsIfNecessary;
- (void)_presentMoveAccountsOnboardingViewController;
- (void)_presentMoveAccountsViewController;
- (void)_presentRemoveDuplicateCredentialsOnboardingViewController;
- (void)_presentRemoveDuplicateCredentialsViewController;
- (bool)_shouldAskUserToDeleteDuplicateCredentials;
- (bool)_shouldAskUserToMoveAccounts;
- (void)accountSharingGroupOnBoardingViewControllerDidSelectContinue:(id)arg1;
- (void)accountSharingGroupOnBoardingViewControllerDidSelectNotNow:(id)arg1;
- (id)initWithGroup:(id)arg1 autoFillQuirksManager:(id)arg2 passwordWarningManager:(id)arg3;
- (void)moveAccountsToGroupPickerTableViewController:(id)arg1 didPickSavedAccounts:(id)arg2;
- (void)moveAccountsToGroupPickerTableViewControllerDidCancel:(id)arg1;
- (void)removeDuplicateCredentialsViewController:(id)arg1 didPickSavedAccounts:(id)arg2;
- (void)removeDuplicateCredentialsViewControllerDidSelectNotNow:(id)arg1;

@end
