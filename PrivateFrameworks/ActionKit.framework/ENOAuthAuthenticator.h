
@interface ENOAuthAuthenticator : NSObject <ENAuthenticator> {
    NSString * _consumerKey;
    NSString * _consumerSecret;
    ENCredentialStore * _credentialStore;
    NSString * _currentProfile;
    <ENAuthenticatorDelegate> * _delegate;
    NSString * _host;
    bool  _inProgress;
    bool  _isActiveBecauseOfCallback;
    bool  _isCancelled;
    bool  _isSwitchingInProgress;
    bool  _preferRegistration;
    NSArray * _profiles;
    NSMutableData * _receivedData;
    NSURLResponse * _response;
    long long  _state;
    bool  _supportsLinkedAppNotebook;
    NSString * _tokenSecret;
    bool  _useWebAuthenticationOnly;
    bool  _userSelectedLinkedAppNotebook;
}

@property (nonatomic, copy) NSString *consumerKey;
@property (nonatomic, copy) NSString *consumerSecret;
@property (nonatomic, retain) ENCredentialStore *credentialStore;
@property (nonatomic, copy) NSString *currentProfile;
@property (nonatomic) <ENAuthenticatorDelegate> *delegate;
@property (nonatomic, copy) NSString *host;
@property (nonatomic) bool inProgress;
@property (nonatomic) bool isActiveBecauseOfCallback;
@property (nonatomic) bool isCancelled;
@property (nonatomic) bool isSwitchingInProgress;
@property (nonatomic) bool preferRegistration;
@property (nonatomic, retain) NSArray *profiles;
@property (nonatomic, retain) NSMutableData *receivedData;
@property (nonatomic, retain) NSURLResponse *response;
@property (nonatomic) long long state;
@property (nonatomic) bool supportsLinkedAppNotebook;
@property (nonatomic, copy) NSString *tokenSecret;
@property (nonatomic) bool useWebAuthenticationOnly;
@property (nonatomic) bool userSelectedLinkedAppNotebook;

+ (id)deviceDescription;
+ (id)parametersFromQueryString:(id)arg1;
+ (id)queryStringFromParameters:(id)arg1;

- (void).cxx_destruct;
- (void)authenticate;
- (id)callbackScheme;
- (bool)canHandleSwitchProfileURL:(id)arg1;
- (void)completeAuthenticationWithCredentials:(id)arg1 usesLinkedAppNotebook:(bool)arg2;
- (void)completeAuthenticationWithError:(id)arg1;
- (id)consumerKey;
- (id)consumerSecret;
- (id)credentialStore;
- (id)currentProfile;
- (id)delegate;
- (void)didFinishLoading;
- (void)disableIsActiveBecauseOfCallback;
- (void)emptyCookieJar;
- (void)enableIsActiveBecauseOfCallback;
- (void)failedWithError:(id)arg1;
- (void)getOAuthTokenForURL:(id)arg1;
- (void)gotCallbackURL:(id)arg1;
- (void)handleDidBecomeActive;
- (bool)handleOpenURL:(id)arg1;
- (id)host;
- (bool)inProgress;
- (bool)isActiveBecauseOfCallback;
- (bool)isCancelled;
- (bool)isSwitchingInProgress;
- (id)oauthCallback;
- (bool)preferRegistration;
- (id)profiles;
- (id)receivedData;
- (void)receivedData:(id)arg1;
- (void)receivedResponse:(id)arg1;
- (id)response;
- (void)setConsumerKey:(id)arg1;
- (void)setConsumerSecret:(id)arg1;
- (void)setCredentialStore:(id)arg1;
- (void)setCurrentProfile:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setIsActiveBecauseOfCallback:(bool)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setIsSwitchingInProgress:(bool)arg1;
- (void)setPreferRegistration:(bool)arg1;
- (void)setProfiles:(id)arg1;
- (void)setReceivedData:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportsLinkedAppNotebook:(bool)arg1;
- (void)setTokenSecret:(id)arg1;
- (void)setUseWebAuthenticationOnly:(bool)arg1;
- (void)setUserSelectedLinkedAppNotebook:(bool)arg1;
- (void)startOauthAuthentication;
- (long long)state;
- (bool)supportsLinkedAppNotebook;
- (void)switchProfile;
- (id)tokenSecret;
- (void)updateCurrentBootstrapProfileWithName:(id)arg1;
- (bool)useWebAuthenticationOnly;
- (id)userAuthorizationURLStringWithParameters:(id)arg1;
- (bool)userSelectedLinkedAppNotebook;

@end
