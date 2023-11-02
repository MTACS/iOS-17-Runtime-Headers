
@interface ACMTicketManager : ACCTicketManager

- (id)certificateLabelForRealm:(id)arg1;
- (id)components;
- (id)decodedUserPreferences:(id)arg1;
- (struct __SecCertificate { }*)defaultPublicKeyCertificateForRealm:(id)arg1;
- (id)defaultPublicKeyVersionForRealm:(id)arg1;
- (id)encodedUserPreferences:(id)arg1;
- (id)preferences;
- (id)publicKeyVersionForRealm:(id)arg1;
- (void)setPublickKeyVersion:(id)arg1 label:(id)arg2 forRealm:(id)arg3;
- (void)setUserPreferences:(id)arg1 forToken:(id)arg2;
- (id)systemInfo;
- (void)uninstallPublicKeyForRealm:(id)arg1;
- (id)userPreferencesForToken:(id)arg1;

@end
