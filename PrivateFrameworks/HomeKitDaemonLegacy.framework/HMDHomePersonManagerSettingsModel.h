
@interface HMDHomePersonManagerSettingsModel : HMDHomeSettingsBaseModel

@property (retain) NSUUID *zoneUUID;
@property (retain) NSString *zoneUUIDString;

+ (id)defaultModelForHomeUUID:(id)arg1;
+ (id)modelIDForHomeUUID:(id)arg1;
+ (id)properties;

- (id)createSettings;
- (id)initWithHomeUUID:(id)arg1;
- (void)setZoneUUID:(id)arg1;
- (id)zoneUUID;

@end
