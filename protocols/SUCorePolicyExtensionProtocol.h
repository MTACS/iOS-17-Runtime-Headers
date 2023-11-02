
@protocol SUCorePolicyExtensionProtocol <NSSecureCoding>

@required

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)extendDocumentationMAAssetQuery:(MAAssetQuery *)arg1;
- (void)extendMADocumentationAssetDownloadOptions:(MADownloadOptions *)arg1;
- (void)extendMADocumentationCatalogDownloadOptions:(MADownloadOptions *)arg1 descriptor:(SUCoreDescriptor *)arg2;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(MADownloadOptions *)arg1;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(MADownloadOptions *)arg1;
- (void)extendSoftwareUpdateMAAssetQuery:(MAAssetQuery *)arg1;
- (NSString *)extensionName;
- (NSArray *)filterDocumentationAssetArray:(NSArray *)arg1;
- (NSArray *)filterSoftwareUpdateAssetArray:(NSArray *)arg1;
- (NSString *)summary;

@optional

- (long long)delayPeriodDays;
- (void)extendMSUApplyOptions:(NSMutableDictionary *)arg1;
- (void)extendMSURollbackOptions:(NSMutableDictionary *)arg1;
- (bool)isRequestedPMVSupervisedPolicy;
- (bool)isSplatPolicy;
- (bool)isSupervisedPolicy;
- (NSString *)mdmPathName;
- (NSString *)requestedProductMarketingVersion;

@end
