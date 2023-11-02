
@interface TPSURLSessionACAuthHandler : NSObject <TPSURLSessionCustomAuthHandling> {
    TPSURLSessionACAuthContext * _authContext;
    TPSURLSessionACAuthContext * _authenticationContext;
    PPCExtensibleSSOAuthenticator * _ssoAuthenticator;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic, copy) TPSURLSessionACAuthContext *authContext;
@property (nonatomic, readonly, copy) TPSURLSessionACAuthContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PPCExtensibleSSOAuthenticator *ssoAuthenticator;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;

+ (bool)canAuthenticateWithURLResponse:(id)arg1;

- (void).cxx_destruct;
- (void)_authenticateWithAppleConnect:(id /* block */)arg1;
- (id)_authenticationTokenForHost:(id)arg1 error:(id*)arg2;
- (id)authContext;
- (void)authenticateForURLResponse:(id)arg1 completion:(id /* block */)arg2;
- (id)authenticationContext;
- (id)customHeaderFields;
- (id)initWithAuthenticationContext:(id)arg1;
- (void)setAuthContext:(id)arg1;
- (void)setSsoAuthenticator:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (id)ssoAuthenticator;
- (id)syncQueue;

@end
