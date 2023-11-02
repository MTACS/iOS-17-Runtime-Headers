
@interface DAEASOAuthIdentity : NSObject {
    NSString * _accessToken;
    NSString * _displayName;
    NSString * _issuer;
    NSData * _jwksData;
    NSString * _jwksURI;
    NSString * _oauthURI;
    NSString * _refreshToken;
    NSString * _tokenRequestURI;
    NSString * _username;
}

@property (nonatomic, copy) NSString *accessToken;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *issuer;
@property (nonatomic, copy) NSData *jwksData;
@property (nonatomic, copy) NSString *jwksURI;
@property (nonatomic, copy) NSString *oauthURI;
@property (nonatomic, copy) NSString *refreshToken;
@property (nonatomic, copy) NSString *tokenRequestURI;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)accessToken;
- (id)displayName;
- (id)issuer;
- (id)jwksData;
- (id)jwksURI;
- (id)oauthURI;
- (id)refreshToken;
- (void)setAccessToken:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIssuer:(id)arg1;
- (void)setJwksData:(id)arg1;
- (void)setJwksURI:(id)arg1;
- (void)setOauthURI:(id)arg1;
- (void)setRefreshToken:(id)arg1;
- (void)setTokenRequestURI:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)tokenRequestURI;
- (id)username;

@end
