
@interface SharedCredentialController : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    ASAuthorizationController * _controller;
    NSError * _error;
    ASPasswordCredential * _passwordCredential;
    ASAuthorizationPasswordProvider * _provider;
    int  _result;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestCredential;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (void)dealloc;
- (id)error;
- (id)passwordCredential;
- (id)presentationAnchorForAuthorizationController:(id)arg1;
- (int)result;

@end
