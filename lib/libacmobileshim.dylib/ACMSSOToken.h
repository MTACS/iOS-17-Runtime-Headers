
@interface ACMSSOToken : ACMToken <ACCSSOTokenProtocol> {
    NSString * _clientSecret;
    NSNumber * _clientSecretCreationTimestamp;
    ACFMessage * _initialRequest;
    bool  _longLiveSession;
    NSNumber * _personID;
    NSDate * _recentAuthenticationDate;
    NSDate * _recentUnlockDate;
    NSString * _sessionToken;
}

@property (nonatomic, retain) NSString *clientSecret;
@property (nonatomic, retain) NSNumber *clientSecretCreationTimestamp;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ACFMessage *initialRequest;
@property (nonatomic, retain) NSNumber *isTwoStepVerificationRequired;
@property (nonatomic, retain) NSNumber *isUserEnrolledFor2SV;
@property (nonatomic) bool longLiveSession;
@property (nonatomic, retain) NSString *nonce;
@property (nonatomic, retain) NSNumber *personID;
@property (nonatomic, retain) ACFPrincipal *principal;
@property (nonatomic, retain) NSDate *recentAuthenticationDate;
@property (nonatomic, retain) NSDate *recentUnlockDate;
@property (nonatomic, retain) NSString *sessionToken;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *tokenDictionary;
@property (nonatomic, retain) NSString *userPreferences;

+ (id)tokenWithKeychainTokenInfo:(id)arg1;
+ (id)tokenWithToken:(id)arg1 data:(id)arg2;

- (id)clientSecret;
- (id)clientSecretCreationTimestamp;
- (void)dealloc;
- (id)initialRequest;
- (bool)longLiveSession;
- (id)personID;
- (id)recentAuthenticationDate;
- (id)recentUnlockDate;
- (id)sessionToken;
- (void)setClientSecret:(id)arg1;
- (void)setClientSecretCreationTimestamp:(id)arg1;
- (void)setInitialRequest:(id)arg1;
- (void)setLongLiveSession:(bool)arg1;
- (void)setPersonID:(id)arg1;
- (void)setRecentAuthenticationDate:(id)arg1;
- (void)setRecentUnlockDate:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (id)tokenDictionary;

@end
