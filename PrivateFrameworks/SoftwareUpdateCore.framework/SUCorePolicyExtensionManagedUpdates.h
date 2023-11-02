
@interface SUCorePolicyExtensionManagedUpdates : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {
    bool  _MDMUseDelayPeriod;
    long long  _delayPeriodSecs;
    unsigned long long  _mdmSoftwareUpdatePath;
    NSString * _requestedPMV;
    bool  _supervised;
}

@property (nonatomic) bool MDMUseDelayPeriod;
@property (nonatomic) long long delayPeriodSecs;
@property (nonatomic) unsigned long long mdmSoftwareUpdatePath;
@property (nonatomic, retain) NSString *requestedPMV;
@property (nonatomic) bool supervised;

+ (id)nameForMDMSoftwareUpdatePath:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)MDMUseDelayPeriod;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)delayPeriodDays;
- (long long)delayPeriodSecs;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)extendDocumentationMAAssetQuery:(id)arg1;
- (void)extendMADocumentationAssetDownloadOptions:(id)arg1;
- (void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1;
- (void)extendMSUApplyOptions:(id)arg1;
- (void)extendSoftwareUpdateMAAssetQuery:(id)arg1;
- (id)extensionName;
- (id)filterDocumentationAssetArray:(id)arg1;
- (id)filterSoftwareUpdateAssetArray:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRequestedPMVSupervisedPolicy;
- (bool)isSupervisedPolicy;
- (id)mdmPathName;
- (unsigned long long)mdmSoftwareUpdatePath;
- (id)requestedPMV;
- (id)requestedProductMarketingVersion;
- (void)setDelayPeriodSecs:(long long)arg1;
- (void)setMDMUseDelayPeriod:(bool)arg1;
- (void)setMdmSoftwareUpdatePath:(unsigned long long)arg1;
- (void)setRequestedPMV:(id)arg1;
- (void)setSupervised:(bool)arg1;
- (id)summary;
- (bool)supervised;

@end
