
@interface MCRemoveProfileViewController : MCInstallProfileViewController <DMCProfileViewControllerDelegate, DevicePINControllerDelegate> {
    UITextField * _passwordField;
    <DMCProfileUIDataProvider> * _profileUIDataProvider;
    bool  _profileWantsToReEnroll;
    MCProfile * _updatingProfile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *passwordField;
@property (nonatomic, retain) <DMCProfileUIDataProvider> *profileUIDataProvider;
@property (nonatomic) bool profileWantsToReEnroll;
@property (readonly) Class superclass;
@property (nonatomic, retain) MCProfile *updatingProfile;

- (void).cxx_destruct;
- (void)_didFinishEnteringPINWithCompletion:(id /* block */)arg1;
- (void)_leaveRemoteManagementAndErase;
- (id)_mdmProfileRemovalAlertBody;
- (void)_performReEnroll;
- (void)_performReEnrollAfterPINVerification;
- (void)_resetWithMode:(int)arg1;
- (void)_showEraseDeviceAlert;
- (void)_showLeaveRemoteManagementAlert;
- (void)_showRemovalWarningActionSheet;
- (void)_showRemovalWarningAfterPINVerification;
- (void)_showRemovalWarningAlert;
- (void)_showWrongRemovalPasswordAlert;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)initWithProfile:(id)arg1;
- (id)passwordField;
- (void)profileRemovalDidFinish;
- (id)profileUIDataProvider;
- (void)profileViewControllerDidSelectPoll:(id)arg1;
- (void)profileViewControllerDidSelectRemoveProfile:(id)arg1;
- (void)profileViewControllerDidSelectUpdateProfile:(id)arg1;
- (bool)profileViewControllerHideUpdateProfile:(id)arg1;
- (bool)profileViewControllerIsProfileInstalled;
- (bool)profileViewControllerShouldDisplayPoll:(id)arg1;
- (bool)profileWantsToReEnroll;
- (void)setInstallState:(int)arg1 animated:(bool)arg2;
- (void)setPasswordField:(id)arg1;
- (void)setProfileUIDataProvider:(id)arg1;
- (void)setProfileWantsToReEnroll:(bool)arg1;
- (void)setUpdatingProfile:(id)arg1;
- (void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(bool)arg2;
- (void)updateTitleForProfileInstallationState:(int)arg1;
- (id)updatingProfile;

@end
