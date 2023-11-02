
@interface SUCorePolicyMacRecoveryOSUpdate : SUCorePolicy {
    NSString * _installedRecoveryOSBuildVersion;
    NSString * _installedRecoveryOSProductVersion;
    NSString * _installedRecoveryOSReleaseType;
    NSString * _installedRecoveryOSRestoreVersion;
    NSString * _installedSFRRestoreVersion;
}

@property (nonatomic, retain) NSString *installedRecoveryOSBuildVersion;
@property (nonatomic, retain) NSString *installedRecoveryOSProductVersion;
@property (nonatomic, retain) NSString *installedRecoveryOSReleaseType;
@property (nonatomic, retain) NSString *installedRecoveryOSRestoreVersion;
@property (nonatomic, retain) NSString *installedSFRRestoreVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)constructMASoftwareUpdateCatalogDownloadOptionsWithUUID:(id)arg1 assetAudience:(id)arg2;
- (id)constructSoftwareUpdateMAAssetQuery;
- (id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetType:(id)arg1 targetRestoreVersion:(id)arg2 usingPolicies:(long long)arg3 usingExtensions:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)installedRecoveryOSBuildVersion;
- (id)installedRecoveryOSProductVersion;
- (id)installedRecoveryOSReleaseType;
- (id)installedRecoveryOSRestoreVersion;
- (id)installedSFRRestoreVersion;
- (bool)isEqual:(id)arg1;
- (void)selectSoftwareUpdatePrimaryAsset:(id*)arg1 secondaryAsset:(id*)arg2 fromAssetQuery:(id)arg3;
- (void)setInstalledRecoveryOSBuildVersion:(id)arg1;
- (void)setInstalledRecoveryOSProductVersion:(id)arg1;
- (void)setInstalledRecoveryOSReleaseType:(id)arg1;
- (void)setInstalledRecoveryOSRestoreVersion:(id)arg1;
- (void)setInstalledSFRRestoreVersion:(id)arg1;
- (id)summary;

@end
