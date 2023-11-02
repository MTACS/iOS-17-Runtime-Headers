
@interface SUCorePolicyUpdateBrain : SUCorePolicy {
    NSNumber * _compatibilityVersion;
}

@property (nonatomic, retain) NSNumber *compatibilityVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compatibilityVersion;
- (id)constructSoftwareUpdateMAAssetQuery;
- (id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSoftwareUpdateAssetType:(id)arg1 documentationAssetType:(id)arg2 usingExtensions:(id)arg3;
- (id)initWithSoftwareUpdateAssetType:(id)arg1 documentationAssetType:(id)arg2 usingPolicies:(long long)arg3 usingExtensions:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)selectSoftwareUpdatePrimaryAsset:(id*)arg1 secondaryAsset:(id*)arg2 fromAssetQuery:(id)arg3;
- (void)setCompatibilityVersion:(id)arg1;
- (id)summary;

@end
