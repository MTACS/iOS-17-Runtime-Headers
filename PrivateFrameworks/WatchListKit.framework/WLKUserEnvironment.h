
@interface WLKUserEnvironment : NSObject {
    NSNumber * _DSID;
    bool  _consented;
    NSArray * _consentedBrands;
    NSString * _countryIdentifier;
    NSArray * _deniedBrands;
    NSDictionary * _entitlements;
    bool  _internalBuild;
    NSString * _languageIdentifier;
    NSString * _platform;
    unsigned long long  _protocolVersion;
    NSString * _restrictions;
    NSString * _storeFrontIdentifier;
}

@property (nonatomic, retain) NSNumber *DSID;
@property (nonatomic) bool consented;
@property (nonatomic, retain) NSArray *consentedBrands;
@property (nonatomic, retain) NSString *countryIdentifier;
@property (nonatomic, retain) NSArray *deniedBrands;
@property (nonatomic, retain) NSDictionary *entitlements;
@property (nonatomic) bool internalBuild;
@property (nonatomic, retain) NSString *languageIdentifier;
@property (nonatomic, retain) NSString *platform;
@property (nonatomic) unsigned long long protocolVersion;
@property (nonatomic, retain) NSString *restrictions;
@property (nonatomic, retain) NSString *storeFrontIdentifier;

+ (id)currentEnvironment;
+ (void)setCurrentEnvironmentForTesting:(id)arg1;

- (void).cxx_destruct;
- (id)DSID;
- (id)_consentQuery;
- (id)_entitlementsQuery;
- (id)_queryParametersV3;
- (id)_queryPostV3;
- (bool)consented;
- (id)consentedBrands;
- (id)countryIdentifier;
- (id)deniedBrands;
- (id)description;
- (id)entitlements;
- (unsigned long long)hash;
- (id)init;
- (bool)internalBuild;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEnvironment:(id)arg1;
- (id)languageIdentifier;
- (id)platform;
- (unsigned long long)protocolVersion;
- (id)restrictions;
- (void)setConsented:(bool)arg1;
- (void)setConsentedBrands:(id)arg1;
- (void)setCountryIdentifier:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setDeniedBrands:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setInternalBuild:(bool)arg1;
- (void)setLanguageIdentifier:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setProtocolVersion:(unsigned long long)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (id)storeFrontIdentifier;

@end
