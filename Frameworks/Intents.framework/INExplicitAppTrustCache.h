
@interface INExplicitAppTrustCache : NSObject {
    bool  _enterpriseAppTrustAllowed;
    bool  _enterpriseAppTrustAllowedLoaded;
    bool  _loadedManagedBundleIdentifiers;
    bool  _loadedTrustedCodeSigningIdentities;
    NSArray * _managedBundleIdentifiers;
    NSSet * _signingIdentitiesRequiringExplicitTrust;
    NSArray * _trustedCodeSigningIdentities;
}

@property (nonatomic) bool enterpriseAppTrustAllowed;
@property (nonatomic, retain) NSArray *managedBundleIdentifiers;
@property (nonatomic, retain) NSSet *signingIdentitiesRequiringExplicitTrust;
@property (nonatomic, retain) NSArray *trustedCodeSigningIdentities;

- (void).cxx_destruct;
- (bool)enterpriseAppTrustAllowed;
- (id)managedBundleIdentifiers;
- (void)setEnterpriseAppTrustAllowed:(bool)arg1;
- (void)setManagedBundleIdentifiers:(id)arg1;
- (void)setSigningIdentitiesRequiringExplicitTrust:(id)arg1;
- (void)setTrustedCodeSigningIdentities:(id)arg1;
- (id)signingIdentitiesRequiringExplicitTrust;
- (id)trustedCodeSigningIdentities;

@end
