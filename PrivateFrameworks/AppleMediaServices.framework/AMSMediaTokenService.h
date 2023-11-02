
@interface AMSMediaTokenService : NSObject <AMSBagConsumer, AMSMediaTokenServiceProtocol> {
    bool  _URLKnownToBeTrusted;
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSString * _clientIdentifier;
    AMSProcessInfo * _clientInfo;
    long long  _clientType;
    NSString * _clientVersion;
    bool  _enabled;
    double  _refreshPercentage;
    double  _refreshTime;
    AMSURLSession * _session;
    AMSMediaTokenServiceThrottler * _throttler;
    NSObject<OS_dispatch_queue> * _tokenFetchQueue;
    AMSMediaTokenServiceStore * _tokenStore;
}

@property (nonatomic) bool URLKnownToBeTrusted;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSMediaToken *cachedMediaToken;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic) long long clientType;
@property (nonatomic, readonly) NSString *clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *keychainAccessGroup;
@property (nonatomic) double refreshPercentage;
@property (nonatomic) double refreshTime;
@property (nonatomic) AMSURLSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSMediaTokenServiceThrottler *throttler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *tokenFetchQueue;
@property (nonatomic, readonly) AMSMediaTokenServiceStore *tokenStore;

+ (id)_overrideOrClientIdentifier:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (bool)URLKnownToBeTrusted;
- (id)_fetchBagProperties;
- (id)_fetchToken;
- (void)_refreshMediaTokenIfNeeded:(id)arg1;
- (bool)_shouldRefreshMediaToken:(id)arg1;
- (bool)_shouldReturnMediaToken:(id)arg1;
- (id)_tokenRequestWithError:(id*)arg1;
- (id)account;
- (id)bag;
- (id)cachedMediaToken;
- (id)clientIdentifier;
- (id)clientInfo;
- (long long)clientType;
- (id)clientVersion;
- (id)fetchMediaToken;
- (id)initWithClientIdentifier:(id)arg1 bag:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 bag:(id)arg3;
- (id)initWithClientIdentifier:(id)arg1 tokenStore:(id)arg2 bag:(id)arg3;
- (void)invalidateMediaToken;
- (bool)isEnabled;
- (id)keychainAccessGroup;
- (double)refreshPercentage;
- (double)refreshTime;
- (id)session;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setCachedMediaToken:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setClientType:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setKeychainAccessGroup:(id)arg1;
- (void)setRefreshPercentage:(double)arg1;
- (void)setRefreshTime:(double)arg1;
- (void)setSession:(id)arg1;
- (void)setURLKnownToBeTrusted:(bool)arg1;
- (id)throttler;
- (id)tokenFetchQueue;
- (id)tokenStore;

@end
