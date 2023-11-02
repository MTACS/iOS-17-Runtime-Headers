
@interface ACMExternalAuthenticationController : NSObject {
    <ACMExternalAuthenticationControllerDelegate> * _delegate;
    <ACFLocalAuthenticationContextProtocol> * _localAuthenticationContext;
}

@property (nonatomic, readonly) ACCComponents *components;
@property (nonatomic) <ACMExternalAuthenticationControllerDelegate> *delegate;
@property (nonatomic, readonly) <ACFKeychainManagerProtocol> *keychainManager;
@property (nonatomic, retain) <ACFLocalAuthenticationContextProtocol> *localAuthenticationContext;
@property (nonatomic, readonly) <ACCTicketManagerProtocol> *ticketManager;

- (void)authenticate2SVWithSSOTokenIfRequired:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)authenticateWithRequest:(id)arg1 password:(id)arg2 completion:(id /* block */)arg3;
- (void)cleanSSOStorageWithRequest:(id)arg1;
- (id)components;
- (id)convertLAError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)evaluateSSOWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)evaluateTouchIDIfNeededWithSSOToken:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)evaluateTouchIDWithToken:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (bool)isCriticalError:(id)arg1;
- (bool)isValidToken:(id)arg1 duration:(double)arg2;
- (id)keychainManager;
- (id)localAuthenticationContext;
- (id)localizedReasonForUsername:(id)arg1;
- (void)saveSSOIfNeeded:(id)arg1 withRequest:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLocalAuthenticationContext:(id)arg1;
- (id)tgtStoragePolicy;
- (id)ticketManager;
- (id)tokenWithRequest:(id)arg1;
- (void)updateAuthContext:(id)arg1;
- (void)verifyServiceTicketWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyToken:(id)arg1 withRequest:(id)arg2 completion:(id /* block */)arg3;

@end
