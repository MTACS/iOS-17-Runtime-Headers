
@interface EDAMAuthenticationParameters : FATObject {
    NSString * _consumerKey;
    NSString * _consumerSecret;
    NSString * _deviceDescription;
    NSString * _deviceIdentifier;
    NSString * _password;
    NSString * _ssoLoginToken;
    NSNumber * _supportsBusinessOnlyAccounts;
    NSNumber * _supportsTwoFactor;
    NSString * _usernameOrEmail;
}

@property (nonatomic, retain) NSString *consumerKey;
@property (nonatomic, retain) NSString *consumerSecret;
@property (nonatomic, retain) NSString *deviceDescription;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *ssoLoginToken;
@property (nonatomic, retain) NSNumber *supportsBusinessOnlyAccounts;
@property (nonatomic, retain) NSNumber *supportsTwoFactor;
@property (nonatomic, retain) NSString *usernameOrEmail;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)consumerKey;
- (id)consumerSecret;
- (id)deviceDescription;
- (id)deviceIdentifier;
- (id)password;
- (void)setConsumerKey:(id)arg1;
- (void)setConsumerSecret:(id)arg1;
- (void)setDeviceDescription:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSsoLoginToken:(id)arg1;
- (void)setSupportsBusinessOnlyAccounts:(id)arg1;
- (void)setSupportsTwoFactor:(id)arg1;
- (void)setUsernameOrEmail:(id)arg1;
- (id)ssoLoginToken;
- (id)supportsBusinessOnlyAccounts;
- (id)supportsTwoFactor;
- (id)usernameOrEmail;

@end
