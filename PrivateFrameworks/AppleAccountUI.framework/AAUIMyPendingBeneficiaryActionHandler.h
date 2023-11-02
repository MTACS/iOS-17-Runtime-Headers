
@interface AAUIMyPendingBeneficiaryActionHandler : AAUIMyBeneficiaryActionHandler <AAUIInheritanceSetupFlowDelegate, AAUIInviteMessageFlowControllerDelegate> {
    AAUIInviteMessageFlowController * _inviteFlowController;
    UINavigationController * _navigationController;
    AAUIInheritanceShareAccessKeyOptionsViewController * _shareAccessKeyOptionsViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appleAccount;
- (void)_checkMessageEligibility;
- (void)_dismiss;
- (void)_dismissAndNavigateToDateOfBirthSettings;
- (id)_doneButton;
- (void)_showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_showIncompatibleDeviceAlert;
- (void)_showPrintPreview;
- (void)_showSetupCompleteWithShareTypePrint;
- (void)_startInviteMessageFlow;
- (void)doPrimaryAction:(id)arg1 specifier:(id)arg2;
- (void)inheritanceDidSelectSharingOption:(unsigned long long)arg1;
- (void)inviteMessageCompleteSecondaryButtonTapped:(id)arg1;
- (void)inviteMessageFlowDidFinish:(id)arg1;
- (void)inviteMessageWasSent:(id)arg1 completion:(id /* block */)arg2;

@end
