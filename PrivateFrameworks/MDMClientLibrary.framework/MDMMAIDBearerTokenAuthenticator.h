
@interface MDMMAIDBearerTokenAuthenticator : NSObject <MDMAuthenticatorProtocol> {
    NSArray * _anchorCertificateRefs;
    NSString * _personaID;
    NSString * _token;
}

@property (nonatomic, retain) NSArray *anchorCertificateRefs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *personaID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *token;

+ (id)_createAuthInvalidError;
+ (id)_createGeneralServerError;
+ (id)_createManagedAppleAccountInvalidatedError;
+ (id)_createMissingBearerTokenError;
+ (id)authenticationMethod;
+ (id)authenticatorWithAnchorCertificateRefs:(id)arg1;

- (void).cxx_destruct;
- (void)_executeExchangeRequestWithURL:(id)arg1 accountID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_processTokenResponse:(id)arg1 data:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)anchorCertificateRefs;
- (bool)authenticateRequest:(id)arg1 error:(id*)arg2;
- (bool)canRefreshToken;
- (bool)doesWebAuthentication;
- (void)fetchTokenWithAuthParams:(id)arg1 accountID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithRMAccountID:(id)arg1;
- (id)initWithTokens:(id)arg1;
- (id)personaID;
- (id)prepareForReauthenticationWithAuthParams:(id)arg1 accountID:(id)arg2 error:(id*)arg3;
- (void)refreshTokenWithAuthParams:(id)arg1 accountID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAnchorCertificateRefs:(id)arg1;
- (void)setPersonaID:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (bool)validAuthParams:(id)arg1;

@end
