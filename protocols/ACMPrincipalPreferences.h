
@protocol ACMPrincipalPreferences <ACMBasePreferences>

@required

+ (<ACMPrincipalPreferences> *)preferencesForPrincipal:(ACFPrincipal *)arg1;

- (NSString *)clientSecret;
- (NSNumber *)clientSecretCreateDate;
- (<ACMPrincipalPreferences> *)initWithPrincipal:(ACFPrincipal *)arg1;
- (NSNumber *)personID;
- (ACFPrincipal *)principal;
- (NSString *)realm;
- (void)setClientSecret:(NSString *)arg1;
- (void)setClientSecretCreateDate:(NSNumber *)arg1;
- (void)setPersonID:(NSNumber *)arg1;
- (NSString *)userName;

@end
