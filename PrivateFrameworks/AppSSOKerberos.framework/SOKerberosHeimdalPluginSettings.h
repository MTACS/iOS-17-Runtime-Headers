
@interface SOKerberosHeimdalPluginSettings : NSObject <NSSecureCoding> {
    long long  _credentialUseMode;
    bool  _defaultRealm;
    NSDictionary * _domainRealmMapping;
    NSArray * _hosts;
    NSArray * _kdcs;
    NSString * _realm;
}

@property (nonatomic) long long credentialUseMode;
@property (nonatomic, retain) NSUUID *currentCredential;
@property (getter=isDefaultRealm, nonatomic) bool defaultRealm;
@property (nonatomic, retain) NSDictionary *domainRealmMapping;
@property (nonatomic, retain) NSArray *hosts;
@property (nonatomic, retain) NSArray *kdcs;
@property (nonatomic, readonly) NSString *realm;
@property (nonatomic, retain) NSString *siteCode;

+ (id)appSSOKerberosCacheName;
+ (struct HeimCred_s { }*)createCacheEntryWithError:(id*)arg1;
+ (bool)createSettingCacheEntryIfNeededWithError:(id*)arg1;
+ (void)deleteAllSettings;
+ (bool)deleteSettingsForRealm:(id)arg1 error:(id*)arg2;
+ (id)retrieveAllCurrentSettings;
+ (struct HeimCred_s { }*)retrieveCacheEntry;
+ (struct HeimCred_s { }*)retrieveCurrentSettingsForRealm:(id)arg1;
+ (id)retrieveCurrentSettingsForRealm:(id)arg1 error:(id*)arg2;
+ (struct HeimCred_s { }*)retrieveSetting:(id)arg1 forRealm:(id)arg2;
+ (void)setAppSSOKerberosCacheName:(id)arg1;
+ (id)stringWithCredentialUseMode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)credentialUseMode;
- (id)currentCredential;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainRealmMapping;
- (void)encodeWithCoder:(id)arg1;
- (id)hosts;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRealm:(id)arg1;
- (bool)isDefaultRealm;
- (id)kdcs;
- (id)realm;
- (bool)saveSetting:(id)arg1 data:(id)arg2 withError:(id*)arg3;
- (bool)saveWithError:(id*)arg1;
- (void)setCredentialUseMode:(long long)arg1;
- (void)setCurrentCredential:(id)arg1;
- (void)setDefaultRealm:(bool)arg1;
- (void)setDomainRealmMapping:(id)arg1;
- (void)setHosts:(id)arg1;
- (void)setKdcs:(id)arg1;
- (void)setSiteCode:(id)arg1;
- (id)siteCode;

@end
