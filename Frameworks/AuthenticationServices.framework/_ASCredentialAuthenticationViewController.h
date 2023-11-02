
@interface _ASCredentialAuthenticationViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate> {
    <ASCredentialRequest> * _credentialRequest;
    <_ASCredentialAuthenticationViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_ASCredentialAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithCredential:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_finishWithPasskeyAssertionCredential:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_finishWithPasskeyRegistrationCredential:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_requestDidFailWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)initWithExtension:(id)arg1 credentialIdentity:(id)arg2;
- (id)initWithExtension:(id)arg1 passkeyAssertionRequest:(id)arg2;
- (id)initWithExtension:(id)arg1 passkeyRegistrationRequest:(id)arg2;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 passkeyAssertionCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 passkeyRegistrationCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
