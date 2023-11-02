
@interface HMDDatabaseZoneManagerConfiguration : HMFObject <NSCopying, NSMutableCopying> {
    HMBCloudZoneConfiguration * _cloudZoneConfiguration;
    NSSet * _externalRecordTypesForSubscriptions;
    HMDHomeKitVersion * _minimumHomeKitVersion;
    NSSet * _requiredSupportedFeatures;
    bool  _shouldCreateZone;
    bool  _zoneOwner;
}

@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration;
@property (copy) NSSet *externalRecordTypesForSubscriptions;
@property (copy) HMDHomeKitVersion *minimumHomeKitVersion;
@property (copy) NSSet *requiredSupportedFeatures;
@property bool shouldCreateZone;
@property (getter=isZoneOwner) bool zoneOwner;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)cloudZoneConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)externalRecordTypesForSubscriptions;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isZoneOwner;
- (id)minimumHomeKitVersion;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)requiredSupportedFeatures;
- (void)setCloudZoneConfiguration:(id)arg1;
- (void)setExternalRecordTypesForSubscriptions:(id)arg1;
- (void)setMinimumHomeKitVersion:(id)arg1;
- (void)setRequiredSupportedFeatures:(id)arg1;
- (void)setShouldCreateZone:(bool)arg1;
- (void)setZoneOwner:(bool)arg1;
- (bool)shouldCreateZone;

@end
