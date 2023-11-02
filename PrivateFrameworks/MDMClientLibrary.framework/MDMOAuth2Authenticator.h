
@interface MDMOAuth2Authenticator : NSObject <MDMAuthenticatorProtocol> {
    NSString * _personaID;
    NSString * _state;
    NSDictionary * _tokens;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *personaID;
@property (nonatomic, retain) NSString *state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *tokens;

+ (id)_createOAuth2InvalidError;
+ (id)authenticationMethod;
+ (id)deserializeTokens:(id)arg1;
+ (id)serializeTokens:(id)arg1;

- (void).cxx_destruct;
- (id)_authorizationGrantURLWithAuthParams:(id)arg1;
- (void)_executeTokenRequestWithURL:(id)arg1 body:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_processTokenResponse:(id)arg1 data:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_refreshRequestWithRefreshToken:(id)arg1 authParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_tokenRequestWithCode:(id)arg1 authParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authTokensWithCallbackURL:(id)arg1 authParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)authenticateRequest:(id)arg1 error:(id*)arg2;
- (bool)canRefreshToken;
- (bool)doesWebAuthentication;
- (id)initWithRMAccountID:(id)arg1;
- (id)initWithTokens:(id)arg1;
- (id)personaID;
- (id)prepareForReauthenticationWithAuthParams:(id)arg1 accountID:(id)arg2 error:(id*)arg3;
- (void)refreshTokenWithAuthParams:(id)arg1 accountID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setPersonaID:(id)arg1;
- (void)setState:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)state;
- (id)tokens;
- (bool)validAuthParams:(id)arg1;
- (id)webAuthenticationURLForAuthParams:(id)arg1 userIdentifier:(id)arg2;

@end
