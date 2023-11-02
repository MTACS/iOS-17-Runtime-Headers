
@interface SFExternalPasswordCredentialServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, SFExternalPasswordCredentialServiceViewControllerProtocol, _ASCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate> {
    _SFAuthenticationContext * _authenticationContext;
    WBSAuthenticationServicesAgentProxy * _authenticationServicesAgentProxy;
    long long  _completionAction;
    _ASCredentialAuthenticationViewController * _extensionController;
    WBSGlobalFrameIdentifier * _frameIdentifier;
    id /* block */  _getCredentialCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (void)_autoFillWithCredentialIdentity:(id)arg1 pageID:(id)arg2 frameID:(id)arg3;
- (void)_dismiss;
- (void)_finishRequestToAutoFillCredential:(id)arg1 extensionShowedUI:(bool)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)_finishRequestToReturnCredential:(id)arg1 extensionShowedUI:(bool)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (void)autoFillWithCredentialIdentity:(id)arg1;
- (void)autoFillWithCredentialIdentity:(id)arg1 pageID:(id)arg2 frameID:(id)arg3;
- (bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyAssertionCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyRegistrationCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (bool)displayMessageAsTitleForContext:(id)arg1;
- (void)getCredentialForCredentialIdentity:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)passcodePromptForContext:(id)arg1;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;

@end
