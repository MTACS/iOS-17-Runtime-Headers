
@interface HLPURLSessionACAuthHandler : NSObject <HLPURLSessionCustomAuthHandling> {
    HLPURLSessionACAuthContext * _authContext;
    HLPURLSessionACAuthContext * _authenticationContext;
    PPCExtensibleSSOAuthenticator * _ssoAuthenticator;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic, copy) HLPURLSessionACAuthContext *authContext;
@property (nonatomic, readonly, copy) HLPURLSessionACAuthContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PPCExtensibleSSOAuthenticator *ssoAuthenticator;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;

+ (bool)canAuthenticateWithURLResponse:(id)arg1;

- (void).cxx_destruct;
- (id)authContext;
- (void)authenticateWithCompletion:(id /* block */)arg1;
- (id)authenticationContext;
- (id)customHeaderFields;
- (id)initWithAuthenticationContext:(id)arg1;
- (void)setAuthContext:(id)arg1;
- (void)setSsoAuthenticator:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (id)ssoAuthenticator;
- (id)syncQueue;

@end
