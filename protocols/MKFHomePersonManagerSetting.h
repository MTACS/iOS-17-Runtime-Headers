
@protocol MKFHomePersonManagerSetting <MKFHomeSetting, MKFHomePersonManagerSettingPublicExtensions>

@required

- (MKFHomePersonManagerSettingDatabaseID *)databaseID;
- (void)setZoneUUID:(NSUUID *)arg1;
- (NSUUID *)zoneUUID;

@end
