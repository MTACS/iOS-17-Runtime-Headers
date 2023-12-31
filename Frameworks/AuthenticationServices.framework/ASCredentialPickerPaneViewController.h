
@interface ASCredentialPickerPaneViewController : ASCredentialRequestPaneViewController <ASCredentialRequestSubPaneConfirmButtonDelegate, UITableViewDataSource, _ASAuthenticationPresentationProvider, _ASCredentialAuthenticationViewControllerDelegate> {
    NSObject<OS_dispatch_queue> * _alertQueue;
    AKASAuthorizationProvider * _authKitAuthorizationProvider;
    NSObject<OS_os_activity> * _authorizationActivity;
    bool  _canKeychainSyncBeEnabled;
    ASCredentialRequestConfirmButtonSubPane * _confirmButtonSubPane;
    _ASCredentialAuthenticationViewController * _credentialProviderViewController;
    long long  _currentlyEnabledBiometryType;
    long long  _currentlySelectedRow;
    ASCPasswordCredential * _externalPasswordCredentialForSelectedLoginChoice;
    bool  _hasAvailablePasskeyProviders;
    ASCredentialRequestImageSubPane * _imageSubPane;
    ASCredentialRequestInfoLabelSubPane * _infoLabelPane;
    bool  _isKeychainSyncEnabled;
    bool  _isUserVerificationConfigured;
    NSArray * _otherLoginChoices;
    ASCAuthorizationPresentationContext * _presentationContext;
    <ASCLoginChoiceProtocol> * _previouslySelectedLoginChoice;
    bool  _shouldAutoFillFromICloudKeychain;
    bool  _shouldExpandOtherLoginChoices;
    bool  _shouldShowEnableCredentialProviderPrompt;
    ASCredentialRequestInfoLabelSubPane * _subtitleSubPane;
    long long  _supportedBiometryType;
    NSArray * _tableViewLoginChoices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIWindow *presentationAnchor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAuthorizationButtonToPaneContext:(id)arg1;
- (void)_addManuallyEnterPasswordButtonIfNeeded;
- (void)_addOtherLoginChoicesButtonIfNeeded;
- (id)_cellForRow:(long long)arg1;
- (void)_configureAuthenticationPaneForSelectedLoginChoice:(id)arg1;
- (id)_defaultPasskeySignInTitle;
- (void)_dismiss;
- (bool)_errorIsPINRequiredError:(id)arg1;
- (id)_iconImage;
- (id)_infoLabelStringForPassword;
- (id)_infoLabelStringForSecurityKeyCredentialAssertion;
- (id)_infoLabelStringForSignInWithApple;
- (bool)_isUserVerificationConfigured;
- (void)_keychainSyncStatusMayHaveChanged:(id)arg1;
- (id)_localizedInfoString;
- (void)_manuallyEnterPasswordButtonTapped;
- (void)_otherLoginChoicesButtonTapped;
- (void)_performAuthorizationWithAuthenticatedContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_presentAlert:(id)arg1 primaryAction:(id /* block */)arg2 alternateAction:(id /* block */)arg3;
- (double)_secondaryButtonBottomMargin;
- (void)_selectInitialLoginChoice;
- (void)_selectPreviouslySelectedLoginChoiceIfPossible:(id)arg1;
- (id)_serviceName;
- (void)_setCancelButtonEnabled:(bool)arg1;
- (void)_setUpIconViewIfNecessary;
- (void)_setUpInfoLabel;
- (void)_setUpPlatformCredentialRequestPane;
- (void)_setUpView;
- (bool)_shouldShowLoginChoicesInTableView;
- (id)_subtitleForPlatformPublicKeyCredentialAssertion;
- (id)_subtitleForPlatformPublicKeyCredentialRegistration;
- (id)_titleForPlatformPublicKeyCredentialAssertion;
- (id)_titleForPlatformPublicKeyCredentialRegistration;
- (void)_updateCachedLoginChoices;
- (void)_updateSelectedRow:(long long)arg1;
- (void)_useCABLEButtonTapped;
- (void)_useSecurityKeyButtonTapped;
- (void)_userSelectedExternalPasswordCredential;
- (void)_userTappedContinueButtonForCABLELoginChoice:(id)arg1;
- (void)_userTappedContinueButtonForPasskeyLoginChoice:(id)arg1;
- (void)_userTappedContinueButtonForPasswordLoginChoice:(id)arg1;
- (void)_userTappendContinueButtonForSecurityKeyLoginChoice:(id)arg1;
- (id)_usernameForContinueButtonWithLoginChoice:(id)arg1;
- (void)authenticationProvider:(id)arg1 hideViewController:(id)arg2;
- (void)authenticationProvider:(id)arg1 presentAlert:(id)arg2 primaryAction:(id /* block */)arg3 alternateAction:(id /* block */)arg4;
- (void)authenticationProvider:(id)arg1 showViewController:(id)arg2;
- (void)confirmButtonSubPaneDidEnterProcessingState:(id)arg1 withAuthenticatedContext:(id)arg2;
- (void)confirmButtonSubPaneDidFailBiometry:(id)arg1;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyAssertionCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyRegistrationCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithPresentationContext:(id)arg1 activity:(id)arg2;
- (id)initWithPresentationContext:(id)arg1 shouldExpandOtherLoginChoices:(bool)arg2 activity:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfTableRows;
- (void)performAuthorization:(id)arg1 withAuthenticatedLAContext:(id)arg2;
- (void)performPasswordAuthentication:(id)arg1;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (id)presentationAnchor;
- (void)reloadLoginChoices;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)userTappedContinueButton;
- (bool)validateReadyForAuthorization:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
