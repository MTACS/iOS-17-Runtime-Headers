
@protocol MKFHomeNetworkRouterSetting <MKFHomeSetting, MKFHomeNetworkRouterSettingPublicExtensions>

@required

- (NSString *)activeNetworkRouterInitialSetupNeededUUID;
- (MKFHomeNetworkRouterSettingDatabaseID *)databaseID;
- (NSString *)minHomeKitVersionForAccessoryNetworkProtectionChange;
- (NSString *)minimumNetworkRouterSupportHomeKitVersion;
- (<MKFHAPAccessory> *)networkAccessory;
- (void)setActiveNetworkRouterInitialSetupNeededUUID:(NSString *)arg1;
- (void)setMinHomeKitVersionForAccessoryNetworkProtectionChange:(NSString *)arg1;
- (void)setMinimumNetworkRouterSupportHomeKitVersion:(NSString *)arg1;
- (void)setNetworkAccessory:(id <MKFHAPAccessory>)arg1;

@end
