
@protocol ACCAuthContextProtocol <NSObject>

@required

+ (<ACCAuthContextProtocol> *)authContextWithRequest:(ACFMessage *)arg1;

- (NSNumber *)appID;
- (NSString *)appIDKey;
- (NSNumber *)authenticationType;
- (NSDate *)creationDate;
- (NSString *)currentUserKey;
- (NSString *)dsKeyVersion;
- (NSString *)encryptionHash;
- (NSData *)encryptionKey;
- (NSData *)initializationVector;
- (NSString *)nonce;
- (NSString *)oldUserKey;
- (NSMutableDictionary *)parametersDictionary;
- (NSNumber *)personID;
- (ACFPrincipal *)principal;
- (ACFMessage *)request;
- (NSString *)selectedDeviceId;
- (NSString *)selectedDeviceType;
- (NSString *)sessionToken;
- (void)setAppID:(NSNumber *)arg1;
- (void)setAppIDKey:(NSString *)arg1;
- (void)setAuthenticationType:(NSNumber *)arg1;
- (void)setCreationDate:(NSDate *)arg1;
- (void)setCurrentUserKey:(NSString *)arg1;
- (void)setDsKeyVersion:(NSString *)arg1;
- (void)setEncryptionHash:(NSString *)arg1;
- (void)setEncryptionKey:(NSData *)arg1;
- (void)setInitializationVector:(NSData *)arg1;
- (void)setNonce:(NSString *)arg1;
- (void)setOldUserKey:(NSString *)arg1;
- (void)setPersonID:(NSNumber *)arg1;
- (void)setPrincipal:(ACFPrincipal *)arg1;
- (void)setRequest:(ACFMessage *)arg1;
- (void)setSelectedDeviceId:(NSString *)arg1;
- (void)setSelectedDeviceType:(NSString *)arg1;
- (void)setSessionToken:(NSString *)arg1;
- (void)setTokenVersion:(NSString *)arg1;
- (void)setTwoStepVerificationCode:(NSString *)arg1;
- (NSString *)tokenSourceString;
- (NSString *)tokenVersion;
- (NSString *)twoStepVerificationCode;

@optional

- (NSNumber *)clientSecretCreateDate;
- (NSString *)clientSecretTokenHmac;
- (NSString *)recoveryKey;
- (NSString *)serviceName;
- (void)setClientSecretCreateDate:(NSNumber *)arg1;
- (void)setClientSecretTokenHmac:(NSString *)arg1;
- (void)setRecoveryKey:(NSString *)arg1;
- (void)setServiceName:(NSString *)arg1;
- (void)setTouchIDSupport:(NSNumber *)arg1;
- (NSNumber *)touchIDSupport;
- (NSString *)xmlTokenSourceString;

@end
