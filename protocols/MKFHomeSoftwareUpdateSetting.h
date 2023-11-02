
@protocol MKFHomeSoftwareUpdateSetting <MKFHomeSetting, MKFHomeSoftwareUpdateSettingPublicExtensions>

@required

- (NSNumber *)automaticSoftwareUpdateEnabled;
- (NSNumber *)automaticThirdPartyAccessorySoftwareUpdateEnabled;
- (MKFHomeSoftwareUpdateSettingDatabaseID *)databaseID;
- (void)setAutomaticSoftwareUpdateEnabled:(NSNumber *)arg1;
- (void)setAutomaticThirdPartyAccessorySoftwareUpdateEnabled:(NSNumber *)arg1;

@end
