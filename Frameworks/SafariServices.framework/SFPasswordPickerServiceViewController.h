
@interface SFPasswordPickerServiceViewController : SFPasswordServiceViewController <SFAccountPickerViewControllerSystemAutoFillDelegate, SFCredentialProviderExtensionManagerObserver, SFPasswordPickerServiceViewControllerProtocol, UIPresentationControllerDelegatePrivate, _ASCredentialAuthenticationViewControllerDelegate, _ASCredentialListViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate> {
    SFAccountPickerViewController * _accountPickerViewController;
    double  _authenticationGracePeriod;
    WBSAuthenticationServicesAgentProxy * _authenticationServicesAgentProxy;
    _ASIncomingCallObserver * _callObserver;
    _SFAuthenticationContext * _context;
    NSString * _credentialType;
    _ASCredentialAuthenticationViewController * _externalCredentialViewController;
    NSArray * _externallyVerifiedAssociatedDomains;
    bool  _hasAuthenticationForOtherPasswords;
    id /* block */  _presentCredentialsHandler;
    bool  _presentInPopover;
    NSString * _remoteAppID;
    NSString * _remoteLocalizedAppName;
    NSString * _remoteUnlocalizedAppName;
    RTIDocumentTraits * _systemAutoFillDocumentTraits;
    WBSGlobalFrameIdentifier * _webFrameIdentifier;
    NSURL * _webViewURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (id)_actionForPresentingPasswordManagerExtension:(id)arg1;
- (void)_authenticateAndSetPresentCredentialsHandlerWithSavedAccountContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_authenticateToViewOtherPasswordsWithCompletion:(id /* block */)arg1;
- (id)_context;
- (void)_dismiss;
- (void)_fillCredential:(id)arg1 needsAuthentication:(bool)arg2;
- (bool)_isClientEntitledToDirectlyReceiveCredentials;
- (bool)_isConfiguredForSystemAutoFill;
- (void)_presentCredentialListForExtension:(id)arg1;
- (void)_sendCredentialToClientAndDismiss:(id)arg1;
- (void)accountPickerViewController:(id)arg1 fillPasswordForSavedAccount:(id)arg2;
- (void)accountPickerViewController:(id)arg1 fillUsernameForSavedAccount:(id)arg2;
- (void)accountPickerViewController:(id)arg1 fillVerificationCode:(id)arg2;
- (void)accountPickerViewController:(id)arg1 fillVerificationCodeForSavedAccount:(id)arg2;
- (void)authenticateToPresentInPopover:(bool)arg1 savedAccountContext:(id)arg2 completion:(id /* block */)arg3;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyAssertionCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyRegistrationCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialListViewController:(id)arg1 didFinishWithPasskeyAssertionCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (bool)displayMessageAsTitleForContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)passcodePromptForContext:(id)arg1;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1;
- (void)setPageID:(id)arg1 frameID:(id)arg2 credentialType:(id)arg3;
- (void)setRemoteAppID:(id)arg1;
- (void)setRemoteLocalizedAppName:(id)arg1;
- (void)setRemoteUnlocalizedAppName:(id)arg1;
- (void)setSystemAutoFillDocumentTraits:(id)arg1;
- (void)setWebViewURL:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
