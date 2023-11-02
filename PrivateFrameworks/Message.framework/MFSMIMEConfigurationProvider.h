
@interface MFSMIMEConfigurationProvider : NSObject <EDSMIMEConfigurationProvider>

@property (nonatomic, readonly) bool encryptionIsConfigured;
@property (nonatomic, readonly) bool encryptionIsEnabledByDefault;
@property (nonatomic, readonly) bool signingEnabledByDefault;
@property (nonatomic, readonly) bool signingIsConfigured;

- (bool)encryptionIsConfigured;
- (bool)encryptionIsEnabledByDefault;
- (bool)signingEnabledByDefault;
- (bool)signingIsConfigured;

@end
