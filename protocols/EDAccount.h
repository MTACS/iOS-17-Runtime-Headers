
@protocol EDAccount <ECMailAccount>

@required

- (NSString *)altDSID;
- (bool)canAuthenticateWithCurrentCredentials;
- (NSString *)displayName;
- (bool)hasPasswordCredential;
- (NSString *)identifier;
- (bool)isActive;
- (bool)primaryiCloudAccount;
- (void)savePersistentAccount;
- (void)setDisplayName:(NSString *)arg1;
- (NSString *)statisticsKind;
- (ACAccount *)systemAccount;
- (NSString *)username;

@end
