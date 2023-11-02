
@protocol EDSMIMEConfigurationProvider

@required

- (bool)encryptionIsConfigured;
- (bool)encryptionIsEnabledByDefault;
- (bool)signingEnabledByDefault;
- (bool)signingIsConfigured;

@end
