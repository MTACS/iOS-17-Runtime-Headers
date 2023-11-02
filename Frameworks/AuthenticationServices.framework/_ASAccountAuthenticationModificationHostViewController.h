
@interface _ASAccountAuthenticationModificationHostViewController : _ASExtensionViewController <_ASAccountAuthenticationModificationExtensionHostContextDelegate> {
    <_ASAccountAuthenticationModificationExtensionContextProtocol> * _accountModificationExtensionContextProxy;
    long long  _accountModificationOperation;
    <_ASAccountAuthenticationModificationHostViewControllerDelegate> * _delegate;
    ASPasswordCredential * _existingCredential;
    NSString * _newPassword;
    ASCredentialServiceIdentifier * _serviceIdentifier;
    AKAuthorization * _signInWithAppleAuthorization;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_ASAccountAuthenticationModificationHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonPressed;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_requestDidFailWithError:(id)arg1 completion:(id /* block */)arg2;
- (bool)_shouldUseNonUIRequestTimer;
- (id)delegate;
- (void)dismissRequestUI:(id)arg1;
- (void)getSignInWithAppleAuthorizationWithState:(id)arg1 nonce:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithExtension:(id)arg1 serviceIdentifier:(id)arg2;
- (void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 updatedCredential:(id)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)prepareToCompleteUpgradeToSignInWithAppleRequestWithHostContext:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)updateCredential:(id)arg1 withNewPassword:(id)arg2 userInfo:(id)arg3;
- (void)upgradeCredentialToSignInWithApple:(id)arg1 userInfo:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end
