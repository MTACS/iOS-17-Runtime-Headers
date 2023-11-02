
@interface BAApplicationConfigurationOverrides : NSObject {
    NSArray * _domainAllowlist;
    NSNumber * _downloadAllowance;
    NSNumber * _essentialDownloadAllowance;
    NSNumber * _essentialMaxInstallSize;
    NSString * _manifestURL;
    NSNumber * _maxInstallSize;
}

@property (nonatomic, retain) NSArray *domainAllowlist;
@property (nonatomic, retain) NSNumber *downloadAllowance;
@property (nonatomic, retain) NSNumber *essentialDownloadAllowance;
@property (nonatomic, retain) NSNumber *essentialMaxInstallSize;
@property (nonatomic, retain) NSString *manifestURL;
@property (nonatomic, retain) NSNumber *maxInstallSize;
@property (nonatomic, retain) NSNumber *optionalDownloadAllowance;
@property (nonatomic, retain) NSNumber *optionalMaxInstallSize;

+ (bool)clearAllOverrides;
+ (bool)clearOverridesForAppBundleIdentifier:(id)arg1;
+ (id)overridesForAppBundleIdentifier:(id)arg1;
+ (bool)setOverrides:(id)arg1 forAppBundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)domainAllowlist;
- (id)downloadAllowance;
- (id)essentialDownloadAllowance;
- (id)essentialMaxInstallSize;
- (id)manifestURL;
- (id)maxInstallSize;
- (id)optionalDownloadAllowance;
- (id)optionalMaxInstallSize;
- (void)setDomainAllowlist:(id)arg1;
- (void)setDownloadAllowance:(id)arg1;
- (void)setEssentialDownloadAllowance:(id)arg1;
- (void)setEssentialMaxInstallSize:(id)arg1;
- (void)setManifestURL:(id)arg1;
- (void)setMaxInstallSize:(id)arg1;
- (void)setOptionalDownloadAllowance:(id)arg1;
- (void)setOptionalMaxInstallSize:(id)arg1;

@end
