
@interface ASAccountAuthenticationModificationController : NSObject <_ASAccountAuthenticationModificationRemoteViewControllerDelegate> {
    _ASAccountAuthenticationModificationRemoteViewController * _accountAuthenticationModificationRemoteViewController;
    <ASAccountAuthenticationModificationControllerDelegate> * _delegate;
    NSExtension * _helperExtension;
    <ASAccountAuthenticationModificationControllerPresentationContextProviding> * _presentationContextProvider;
    ASAccountAuthenticationModificationController * _referenceToSelf;
    ASAccountAuthenticationModificationRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASAccountAuthenticationModificationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ASAccountAuthenticationModificationControllerPresentationContextProviding> *presentationContextProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_failRequestWithError:(id)arg1;
- (void)_invalidate;
- (void)_performReplacePasswordWithSignInWithAppleRequest:(id)arg1;
- (void)_performUpgradePasswordToStrongPasswordRequest:(id)arg1;
- (void)_requestRemoteViewController:(id /* block */)arg1;
- (void)_showUpgradeToStrongPasswordPromptForRequest:(id)arg1;
- (id)_viewControllerToPresentFrom;
- (void)accountModificationRemoteViewController:(id)arg1 didFinishWithCredential:(id)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)accountModificationRemoteViewController:(id)arg1 requestCanceledWithError:(id)arg2 completion:(id /* block */)arg3;
- (void)accountModificationRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)accountModificationRemoteViewControllerDidFinishUpgradeToSignInWithApple:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (void)dismissAccountModificationRemoteViewController:(id)arg1;
- (id)init;
- (void)performRequest:(id)arg1;
- (void)presentAccountModificationRemoteViewController:(id)arg1;
- (id)presentationContextProvider;
- (void)setDelegate:(id)arg1;
- (void)setPresentationContextProvider:(id)arg1;

@end
