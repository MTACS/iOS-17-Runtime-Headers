
@interface SUCorePolicyMacUpdateBrain : SUCorePolicy {
    NSNumber * _compatibilityVersion;
    NSString * _majorTargetBuildVersion;
    NSString * _minorTargetBuildVersion;
}

@property (nonatomic, retain) NSNumber *compatibilityVersion;
@property (nonatomic, retain) NSString *majorTargetBuildVersion;
@property (nonatomic, retain) NSString *minorTargetBuildVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compatibilityVersion;
- (id)constructMASoftwareUpdateCatalogDownloadOptionsWithUUID:(id)arg1 assetAudience:(id)arg2;
- (id)constructSoftwareUpdateMAAssetQuery;
- (id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetType:(id)arg1 majorTargetBuild:(id)arg2 minorTargetBuild:(id)arg3 usingPolicies:(long long)arg4 usingExtensions:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)majorTargetBuildVersion;
- (id)minorTargetBuildVersion;
- (void)selectSoftwareUpdateMajorPrimaryAsset:(id*)arg1 majorSecondaryAsset:(id*)arg2 minorPrimaryAsset:(id*)arg3 minorSecondaryAsset:(id*)arg4 fromAssetQuery:(id)arg5;
- (void)setCompatibilityVersion:(id)arg1;
- (void)setMajorTargetBuildVersion:(id)arg1;
- (void)setMinorTargetBuildVersion:(id)arg1;
- (id)summary;

@end
