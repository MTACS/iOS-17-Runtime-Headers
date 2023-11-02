
@protocol MKFDevice <MKFModel, MKFDevicePublicExtensions>

@required

- (<MKFAppleMediaAccessory> *)accessoryAppleMedia;
- (<MKFAccount> *)account;
- (MKFDeviceDatabaseID *)databaseID;
- (NSArray *)handles;
- (NSUUID *)identifier;
- (NSUUID *)mediaRouteID;
- (NSString *)name;
- (<MKFHome> *)primaryResidentOf;
- (HMFProductInfo *)productInfo;
- (<MKFResident> *)resident;
- (HMDRPIdentity *)rpIdentity;
- (void)setHandles:(NSArray *)arg1;
- (void)setIdentifier:(NSUUID *)arg1;
- (void)setMediaRouteID:(NSUUID *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setPrimaryResidentOf:(id <MKFHome>)arg1;
- (void)setProductInfo:(HMFProductInfo *)arg1;
- (void)setResident:(id <MKFResident>)arg1;
- (void)setRpIdentity:(HMDRPIdentity *)arg1;
- (void)setSettingRouterManager:(id <MKFHomeNetworkRouterManagingDeviceSetting>)arg1;
- (void)setVersion:(HMDHomeKitVersion *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (<MKFHomeNetworkRouterManagingDeviceSetting> *)settingRouterManager;
- (HMDHomeKitVersion *)version;
- (NSDate *)writerTimestamp;

@end
