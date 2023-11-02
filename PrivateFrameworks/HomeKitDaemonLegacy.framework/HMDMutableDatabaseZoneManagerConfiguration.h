
@interface HMDMutableDatabaseZoneManagerConfiguration : HMDDatabaseZoneManagerConfiguration

@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration;
@property (copy) NSSet *externalRecordTypesForSubscriptions;
@property (copy) HMDHomeKitVersion *minimumHomeKitVersion;
@property (copy) NSSet *requiredSupportedFeatures;
@property bool shouldCreateZone;
@property (getter=isZoneOwner) bool zoneOwner;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
