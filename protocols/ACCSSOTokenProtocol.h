
@protocol ACCSSOTokenProtocol <NSObject>

@required

- (NSDate *)creationDate;
- (NSDate *)expirationDate;
- (NSNumber *)isTwoStepVerificationRequired;
- (NSString *)nonce;
- (NSNumber *)personID;
- (ACFPrincipal *)principal;
- (NSDate *)recentAuthenticationDate;
- (NSString *)sessionToken;
- (void)setCreationDate:(NSDate *)arg1;
- (void)setExpirationDate:(NSDate *)arg1;
- (void)setIsTwoStepVerificationRequired:(NSNumber *)arg1;
- (void)setNonce:(NSString *)arg1;
- (void)setPersonID:(NSNumber *)arg1;
- (void)setPrincipal:(ACFPrincipal *)arg1;
- (void)setRecentAuthenticationDate:(NSDate *)arg1;
- (void)setSessionToken:(NSString *)arg1;

@optional

- (NSString *)clientSecret;
- (NSNumber *)clientSecretCreationTimestamp;
- (ACFMessage *)initialRequest;
- (NSNumber *)isUserEnrolledFor2SV;
- (bool)longLiveSession;
- (NSDate *)recentUnlockDate;
- (void)setClientSecret:(NSString *)arg1;
- (void)setClientSecretCreationTimestamp:(NSNumber *)arg1;
- (void)setInitialRequest:(ACFMessage *)arg1;
- (void)setIsUserEnrolledFor2SV:(NSNumber *)arg1;
- (void)setLongLiveSession:(bool)arg1;
- (void)setRecentUnlockDate:(NSDate *)arg1;
- (void)setUserPreferences:(NSString *)arg1;
- (NSString *)userPreferences;

@end
