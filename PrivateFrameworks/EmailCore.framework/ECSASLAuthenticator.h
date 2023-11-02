
@interface ECSASLAuthenticator : NSObject {
    <ECAuthenticatableAccount> * _account;
    ECAuthenticationScheme * _authenticationScheme;
    long long  _authenticationState;
    <ECAuthenticatableConnection> * _connection;
}

@property (nonatomic, readonly) <ECAuthenticatableAccount> *account;
@property (nonatomic, readonly) ECAuthenticationScheme *authenticationScheme;
@property (nonatomic) long long authenticationState;
@property (nonatomic, readonly) bool couldRetry;
@property (nonatomic, readonly) bool justSentPlainTextPassword;
@property (nonatomic, readonly) NSString *saslName;
@property (nonatomic, readonly) <ECSASLSecurityLayer> *securityLayer;
@property (nonatomic, readonly) bool supportsInitialClientResponse;
@property (nonatomic, readonly) bool usesBase64EncodeResponseData;
@property (getter=isUsingSSL, nonatomic, readonly) bool usingSSL;

- (void).cxx_destruct;
- (id)account;
- (id)authScheme;
- (id)authenticationScheme;
- (long long)authenticationState;
- (bool)couldRetry;
- (id)initWithAuthenticationScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;
- (bool)isUsingSSL;
- (bool)justSentPlainTextPassword;
- (id)responseForServerData:(id)arg1;
- (id)saslName;
- (id)securityLayer;
- (void)setAuthenticationState:(long long)arg1;
- (void)setMissingPasswordError;
- (bool)supportsInitialClientResponse;
- (bool)usesBase64EncodeResponseData;

@end
