
@interface VUIMediaAPIClient : NSObject {
    NSString * _clientIdentifier;
    AMSURLSession * _session;
    AMSMediaTokenService * _tokenService;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) AMSURLSession *session;
@property (nonatomic, retain) AMSMediaTokenService *tokenService;

+ (id)getPlatformClientIdentifier;
+ (void)initializeWithAppleTVClientIdentifier;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createSession;
- (id)_createTokenServiceWithSession:(id)arg1;
- (id)clientIdentifier;
- (void)fetchContentForUrl:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithClientIdentifier:(id)arg1;
- (id)session;
- (void)setClientIdentifier:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTokenService:(id)arg1;
- (id)tokenService;

@end
