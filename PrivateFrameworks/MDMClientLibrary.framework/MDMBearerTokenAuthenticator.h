
@interface MDMBearerTokenAuthenticator : NSObject <MDMAuthenticatorProtocol> {
    NSString * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *token;

+ (id)_createAuthInvalidError;
+ (id)authenticationMethod;

- (void).cxx_destruct;
- (void)authTokensWithCallbackURL:(id)arg1 authParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)authenticateRequest:(id)arg1 error:(id*)arg2;
- (bool)canRefreshToken;
- (bool)doesWebAuthentication;
- (id)initWithRMAccountID:(id)arg1;
- (id)initWithTokens:(id)arg1;
- (id)prepareForReauthenticationWithAuthParams:(id)arg1 accountID:(id)arg2 error:(id*)arg3;
- (void)setToken:(id)arg1;
- (id)token;
- (bool)validAuthParams:(id)arg1;
- (id)webAuthenticationURLForAuthParams:(id)arg1 userIdentifier:(id)arg2;

@end
