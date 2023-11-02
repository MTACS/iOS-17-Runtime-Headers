
@protocol ACMEnvironmentPreferences <ACMBasePreferences>

@required

+ (<ACMEnvironmentPreferences> *)environmentPreferencesWithRealm:(NSString *)arg1;
+ (NSArray *)supportedRealms;

- (NSString *)authenticateURLString;
- (NSString *)defaultPublicKeyString;
- (NSDictionary *)environmentSpecification;
- (NSDictionary *)environmentSpecificationForRealm:(NSString *)arg1;
- (NSString *)generateAndSendSecCodeURLString;
- (NSString *)getTrustedDevicesURLString;
- (NSString *)iForgotURL;
- (<ACMEnvironmentPreferences> *)initWithRealm:(NSString *)arg1;
- (NSString *)myAppleIDURL;
- (<ACMPrincipalPreferences> *)principalPreferences;
- (<ACMPrincipalPreferences> *)principalPreferencesWithUserName:(NSString *)arg1;
- (NSString *)provisionedDeviceIdentifier;
- (NSString *)publicKeyCertificateName;
- (NSString *)publicKeyVersion;
- (NSString *)realm;
- (NSString *)realmName;
- (NSString *)realmShortName;
- (NSArray *)serverAttemptsDelays;
- (NSArray *)serverHosts;
- (void)setPublicKeyCertificateName:(NSString *)arg1;
- (void)setPublicKeyVersion:(NSString *)arg1;
- (NSString *)verifyRecoveryKeyURLString;
- (NSString *)verifySecurityCodeURLString;
- (NSString *)verifyTicketURLString;

@end
