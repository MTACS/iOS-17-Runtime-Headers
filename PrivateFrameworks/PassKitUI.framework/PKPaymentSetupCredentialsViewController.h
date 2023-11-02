
@interface PKPaymentSetupCredentialsViewController : PKPaymentSetupOptionsViewController <PKDynamicListDataChangeDelegate, PKLoadingUIProviding, PKPaymentSetupCredentialsSectionControllerDelegate, PKPaymentSetupPresentationProtocol> {
    bool  _didBeginWalletProvisioningSubject;
    <PKPaymentSetupCredentialsViewControllerFlowDelegate> * _flowDelegate;
    bool  _isDockViewConfigured;
    LAContext * _localAuthenticationContext;
    PKPaymentSetupProduct * _product;
    PKPaymentSetupCredentialsSectionController * _sectionController;
    unsigned long long  _showPrivacyDisclosure;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupCredentialsViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long showPrivacyDisclosure;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analyticsPageTag;
- (void)_beginReportingIfNecessary;
- (void)_configureAndUpdateDockView;
- (void)_continueButtonPressed;
- (void)_endReportingIfNecessary;
- (void)_presentCredentialDoubleCheckAlert:(id)arg1 continueHandler:(id /* block */)arg2 setupLaterHandler:(id /* block */)arg3;
- (void)_presentManualAddController;
- (void)_presentProvisioningFlowForCredentials:(id)arg1;
- (bool)_readerModeIsSupported;
- (void)_requestAuthAndStartProvisioningForCredentials:(id)arg1;
- (void)_requestExternalizedAuthIfNeededWithCompletion:(id /* block */)arg1;
- (void)_setUserInteractionEnabled:(bool)arg1;
- (void)_setupLaterTapped;
- (void)_terminateSetupFlow;
- (void)_toggleEdit;
- (void)_transferExistingCardTapped;
- (void)_updateEditButtonVisibility;
- (void)credentialSelectionDidChange;
- (void)dealloc;
- (id)flowDelegate;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 credentials:(id)arg3 product:(id)arg4 allowsManualEntry:(bool)arg5;
- (void)presentRefundFlowForCredential:(id)arg1;
- (void)presentUnavailableDetailsForCredential:(id)arg1;
- (void)reloadAnimated:(bool)arg1;
- (void)setFlowDelegate:(id)arg1;
- (void)setShowNoResultsView:(bool)arg1;
- (void)setShowPrivacyDisclosure:(unsigned long long)arg1;
- (void)showCredentialDeletionError;
- (void)showDeleteConfirmationWithCompletion:(id /* block */)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)showMaxSelectionAlertForCredential:(id)arg1;
- (unsigned long long)showPrivacyDisclosure;
- (void)showUnableToDeleteCredentialError;
- (void)showUnableToDeleteSafariCredentialError;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
