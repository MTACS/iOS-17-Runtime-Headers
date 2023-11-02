
@interface ACMEnvironmentPreferences : ACMPreferences <ACMEnvironmentPreferences> {
    NSDictionary * _environmentSpecification;
    <ACMPrincipalPreferences> * _principalPreferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *environmentSpecification;
@property (readonly) unsigned long long hash;
@property (retain) <ACMPreferencesStore> *preferencesStore;
@property (retain) <ACMPrincipalPreferences> *principalPreferences;
@property (readonly, retain) NSString *realm;
@property (readonly) Class superclass;

+ (id)environmentPreferencesWithRealm:(id)arg1;
+ (id)environmentSpecifications;
+ (bool)isSupportedRealm:(id)arg1;
+ (id)supportedRealms;

- (id)authenticateURLString;
- (id)createPrincipalPreferencesWithUserName:(id)arg1;
- (void)dealloc;
- (id)defaultPublicKeyString;
- (id)environmentSpecification;
- (id)environmentSpecificationForRealm:(id)arg1;
- (id)generateAndSendSecCodeURLString;
- (id)getTrustedDevicesURLString;
- (id)iForgotURL;
- (id)initWithRealm:(id)arg1;
- (id)myAppleIDURL;
- (id)principalPreferences;
- (id)principalPreferencesWithUserName:(id)arg1;
- (id)provisionedDeviceIdentifier;
- (id)publicKeyCertificateName;
- (id)publicKeyVersion;
- (id)realm;
- (id)realmName;
- (id)realmShortName;
- (id)serverAttemptsDelays;
- (id)serverHosts;
- (void)setEnvironmentSpecification:(id)arg1;
- (void)setPrincipalPreferences:(id)arg1;
- (void)setPublicKeyCertificateName:(id)arg1;
- (void)setPublicKeyVersion:(id)arg1;
- (id)verifyRecoveryKeyURLString;
- (id)verifySecurityCodeURLString;
- (id)verifyTicketURLString;

@end
