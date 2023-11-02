
@interface AMSProcessInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountMediaType;
    NSData * _auditTokenData;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSString * _clientVersion;
    NSString * _executableName;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _localizedName;
    AMSMappedBundleInfo * _mappedBundleInfo;
    NSString * _partnerHeader;
    NSString * _proxyAppBundleID;
    NSString * _treatmentNamespace;
    NSString * _userAgentSuffix;
}

@property (nonatomic, retain) NSString *accountMediaType;
@property (getter=isAccountsDaemon, nonatomic, readonly) bool accountsDaemon;
@property (nonatomic, retain) NSData *auditTokenData;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic, retain) NSString *executableName;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, readonly) AMSMappedBundleInfo *mappedBundleInfo;
@property (nonatomic, retain) NSString *partnerHeader;
@property (nonatomic, retain) NSString *proxyAppBundleID;
@property (nonatomic, copy) NSString *treatmentNamespace;
@property (nonatomic, retain) NSString *userAgentSuffix;

+ (void)_accessProcessInfoCache:(id /* block */)arg1;
+ (id)_bundleForIdentifier:(id)arg1 record:(id)arg2;
+ (id)_bundleRecordForIdentifier:(id)arg1;
+ (void)_cacheProcessInfo:(id)arg1;
+ (id)_cachedProcessInfoForIdentifier:(id)arg1;
+ (id)_currentProcessBundleIdentifier;
+ (id)arrayForEntitlement:(id)arg1;
+ (bool)boolForEntitlement:(id)arg1;
+ (bool)boolForMachLookupAccess:(id)arg1;
+ (void)copyPropertiesFrom:(id)arg1 to:(id)arg2;
+ (id)currentProcess;
+ (id)defaultMediaTypeForCurrentProcess;
+ (bool)hasAMSEntitlement;
+ (bool)hasValue:(id)arg1 inArrayForEntitlement:(id)arg2;
+ (bool)isBuddyRunning;
+ (void)setDefaultMediaTypeForCurrentProcess:(id)arg1;
+ (id)stringForEntitlement:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)valueForEntitlement:(id)arg1;

- (void).cxx_destruct;
- (id)accountMediaType;
- (id)auditTokenData;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executableName;
- (id)generateConfiguration;
- (id)generateConfigurationFromBag:(id)arg1;
- (id)generateConfigurationFromBagContract:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAccountsDaemon;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)mappedBundleInfo;
- (id)partnerHeader;
- (id)proxyAppBundleID;
- (void)setAccountMediaType:(id)arg1;
- (void)setAuditTokenData:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setExecutableName:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setPartnerHeader:(id)arg1;
- (void)setProxyAppBundleID:(id)arg1;
- (void)setTreatmentNamespace:(id)arg1;
- (void)setUserAgentSuffix:(id)arg1;
- (id)treatmentNamespace;
- (id)userAgentSuffix;

@end
