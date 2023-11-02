
@protocol MKFHomeNetworkRouterManagingDeviceSetting <MKFHomeSetting, MKFHomeNetworkRouterManagingDeviceSettingPublicExtensions>

@required

- (MKFHomeNetworkRouterManagingDeviceSettingDatabaseID *)databaseID;
- (<MKFDevice> *)device;
- (void)setDevice:(id <MKFDevice>)arg1;

@end
