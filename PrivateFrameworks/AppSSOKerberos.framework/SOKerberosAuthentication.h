
@interface SOKerberosAuthentication : NSObject {
    SOKerberosHelper * _kerberosHelper;
    SOKeychainHelper * _keychainHelper;
    NSString * _realm;
    SOADSiteDiscovery * _siteDiscovery;
    bool  _siteDiscoveryInProgress;
}

@property (retain) SOKerberosHelper *kerberosHelper;
@property (retain) SOKeychainHelper *keychainHelper;
@property (nonatomic, retain) NSString *realm;
@property (retain) SOADSiteDiscovery *siteDiscovery;
@property bool siteDiscoveryInProgress;

+ (void)savePacValues:(id)arg1 atLogin:(bool)arg2;
+ (void)saveValuesForPlugins:(id)arg1;

- (void).cxx_destruct;
- (void)_determineSiteCodeUsingDispatchGroup:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3 networkFingerprint:(id)arg4 requireTLSForLDAP:(bool)arg5;
- (unsigned long long)attemptKerberosWithContext:(id)arg1 returningToken:(id*)arg2 orError:(id*)arg3;
- (bool)changePasswordWithContext:(id)arg1 withError:(id*)arg2;
- (unsigned long long)createNewCredentialUsingContext:(id)arg1 returningCredential:(struct gss_cred_id_t_desc_struct {}**)arg2 orError:(id*)arg3;
- (void)determineSiteCodeUsingContext:(id)arg1;
- (unsigned long long)findExistingCredentialUsingContext:(id)arg1 returningCredential:(struct gss_cred_id_t_desc_struct {}**)arg2 orError:(id*)arg3;
- (id)initWithRealm:(id)arg1;
- (id)kerberosHelper;
- (id)keychainHelper;
- (unsigned long long)mapErrorToKnownError:(id)arg1;
- (id)realm;
- (bool)refreshPacValuesWithContext:(id)arg1 atLogin:(bool)arg2 error:(id*)arg3;
- (bool)refreshPacValuesWithContext:(id)arg1 credential:(struct gss_cred_id_t_desc_struct { }*)arg2 atLogin:(bool)arg3;
- (id)retrieveCachedSiteCodeFromCacheForBundleIdentifier:(id)arg1 networkFingerprint:(id)arg2;
- (void)setKerberosHelper:(id)arg1;
- (void)setKeychainHelper:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setSiteCodeUsingContext:(id)arg1;
- (void)setSiteDiscovery:(id)arg1;
- (void)setSiteDiscoveryInProgress:(bool)arg1;
- (id)siteDiscovery;
- (bool)siteDiscoveryInProgress;
- (void)triggerVPNIfNeededUsingRealm:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(id)arg3;

@end
