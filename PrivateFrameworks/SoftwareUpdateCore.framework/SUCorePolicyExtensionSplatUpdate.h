
@interface SUCorePolicyExtensionSplatUpdate : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {
    bool  _allowSameRestoreVersion;
    NSString * _installedBaseOSBuildVersion;
    NSString * _installedBaseOSProductVersion;
    NSString * _installedBaseOSReleaseType;
    NSString * _installedBaseOSRestoreVersion;
    NSString * _installedSplatBuildVersion;
    NSString * _installedSplatProductVersion;
    NSString * _installedSplatProductVersionExtra;
    NSString * _installedSplatReleaseType;
    NSString * _installedSplatRestoreVersion;
    NSString * _requestedSplatRestoreVersion;
}

@property (nonatomic) bool allowSameRestoreVersion;
@property (nonatomic, retain) NSString *installedBaseOSBuildVersion;
@property (nonatomic, retain) NSString *installedBaseOSProductVersion;
@property (nonatomic, retain) NSString *installedBaseOSReleaseType;
@property (nonatomic, retain) NSString *installedBaseOSRestoreVersion;
@property (nonatomic, retain) NSString *installedSplatBuildVersion;
@property (nonatomic, retain) NSString *installedSplatProductVersion;
@property (nonatomic, retain) NSString *installedSplatProductVersionExtra;
@property (nonatomic, retain) NSString *installedSplatReleaseType;
@property (nonatomic, retain) NSString *installedSplatRestoreVersion;
@property (nonatomic, retain) NSString *requestedSplatRestoreVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringRemovingParenthesis:(id)arg1;
- (bool)allowSameRestoreVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)extendDocumentationMAAssetQuery:(id)arg1;
- (void)extendMADocumentationAssetDownloadOptions:(id)arg1;
- (void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1;
- (void)extendSoftwareUpdateMAAssetQuery:(id)arg1;
- (id)extensionName;
- (id)filterDocumentationAssetArray:(id)arg1;
- (id)filterSoftwareUpdateAssetArray:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)installedBaseOSBuildVersion;
- (id)installedBaseOSProductVersion;
- (id)installedBaseOSReleaseType;
- (id)installedBaseOSRestoreVersion;
- (id)installedSplatBuildVersion;
- (id)installedSplatProductVersion;
- (id)installedSplatProductVersionExtra;
- (id)installedSplatReleaseType;
- (id)installedSplatRestoreVersion;
- (bool)isEqual:(id)arg1;
- (bool)isSplatPolicy;
- (id)requestedSplatRestoreVersion;
- (void)setAllowSameRestoreVersion:(bool)arg1;
- (void)setInstalledBaseOSBuildVersion:(id)arg1;
- (void)setInstalledBaseOSProductVersion:(id)arg1;
- (void)setInstalledBaseOSReleaseType:(id)arg1;
- (void)setInstalledBaseOSRestoreVersion:(id)arg1;
- (void)setInstalledSplatBuildVersion:(id)arg1;
- (void)setInstalledSplatProductVersion:(id)arg1;
- (void)setInstalledSplatProductVersionExtra:(id)arg1;
- (void)setInstalledSplatReleaseType:(id)arg1;
- (void)setInstalledSplatRestoreVersion:(id)arg1;
- (void)setRequestedSplatRestoreVersion:(id)arg1;
- (id)summary;

@end
