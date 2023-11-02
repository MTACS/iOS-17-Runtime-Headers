
@interface EDAMAuthenticationResult : FATObject {
    NSString * _authenticationToken;
    NSNumber * _currentTime;
    NSNumber * _expiration;
    NSString * _noteStoreUrl;
    EDAMPublicUserInfo * _publicUserInfo;
    NSString * _secondFactorDeliveryHint;
    NSNumber * _secondFactorRequired;
    EDAMUserUrls * _urls;
    EDAMUser * _user;
    NSString * _webApiUrlPrefix;
}

@property (nonatomic, retain) NSString *authenticationToken;
@property (nonatomic, retain) NSNumber *currentTime;
@property (nonatomic, retain) NSNumber *expiration;
@property (nonatomic, retain) NSString *noteStoreUrl;
@property (nonatomic, retain) EDAMPublicUserInfo *publicUserInfo;
@property (nonatomic, retain) NSString *secondFactorDeliveryHint;
@property (nonatomic, retain) NSNumber *secondFactorRequired;
@property (nonatomic, retain) EDAMUserUrls *urls;
@property (nonatomic, retain) EDAMUser *user;
@property (nonatomic, retain) NSString *webApiUrlPrefix;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)authenticationToken;
- (id)currentTime;
- (id)expiration;
- (id)noteStoreUrl;
- (id)publicUserInfo;
- (id)secondFactorDeliveryHint;
- (id)secondFactorRequired;
- (void)setAuthenticationToken:(id)arg1;
- (void)setCurrentTime:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setNoteStoreUrl:(id)arg1;
- (void)setPublicUserInfo:(id)arg1;
- (void)setSecondFactorDeliveryHint:(id)arg1;
- (void)setSecondFactorRequired:(id)arg1;
- (void)setUrls:(id)arg1;
- (void)setUser:(id)arg1;
- (void)setWebApiUrlPrefix:(id)arg1;
- (id)urls;
- (id)user;
- (id)webApiUrlPrefix;

@end
