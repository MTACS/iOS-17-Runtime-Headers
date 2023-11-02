
@interface HMDPhotosPersonManagerSettingsModel : HMBModel

@property (retain) NSNumber *sharingFaceClassificationsEnabled;
@property (retain) NSUUID *zoneUUID;

+ (id)hmbProperties;
+ (id)sentinelParentUUID;

- (id)createSettings;
- (id)initWithModelID:(id)arg1 settings:(id)arg2;

@end
