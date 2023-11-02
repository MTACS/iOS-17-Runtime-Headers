
@interface AKFidoAuthorizationController : NSObject <ASAuthorizationControllerDelegate> {
    ASAuthorizationController * __authController;
    id /* block */  _authCompletion;
    AKFidoContext * _context;
    id /* block */  _registrationCompletion;
    <AKFidoUIProvider> * _uiProvider;
}

@property (nonatomic, retain) ASAuthorizationController *_authController;
@property (nonatomic, copy) id /* block */ authCompletion;
@property (nonatomic, retain) AKFidoContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ registrationCompletion;
@property (readonly) Class superclass;
@property (nonatomic, retain) <AKFidoUIProvider> *uiProvider;

+ (bool)isFidoUserCancelError:(id)arg1;

- (void).cxx_destruct;
- (id)_authController;
- (id)_authRequestFromContext:(id)arg1;
- (void)_populateCustomStringsFromContext:(id)arg1;
- (id)_requestFromContext:(id)arg1;
- (void)_startAuthControllerWithRequest:(id)arg1 context:(id)arg2;
- (id /* block */)authCompletion;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (id)context;
- (void)performAuthenticationRequestWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performRegistrationRequestWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)registrationCompletion;
- (void)setAuthCompletion:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setRegistrationCompletion:(id /* block */)arg1;
- (void)setUiProvider:(id)arg1;
- (void)set_authController:(id)arg1;
- (id)uiProvider;

@end
