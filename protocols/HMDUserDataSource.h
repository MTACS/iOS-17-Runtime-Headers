
@protocol HMDUserDataSource <NSObject>

@required

- (bool)isCurrentUser:(HMDUser *)arg1;
- (HMDUserSettingsBackingStoreController *)userDataBackingStoreControllerWithDelegate:(id <HMDUserSettingsBackingStoreControllerDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 zoneName:(NSString *)arg3 shareMessenger:(HMDCloudShareMessenger *)arg4;
- (HMDUserDataController *)userDataControllerWithDelegate:(id <HMDUserDataControllerDelegate>)arg1 dataSource:(id <HMDUserDataControllerDataSource>)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 userID:(NSUUID *)arg4 homeID:(NSUUID *)arg5 sharedSettingsController:(id <HMDSettingsControllerProtocol>)arg6 privateSettingsController:(id <HMDSettingsControllerProtocol>)arg7 isCurrentUser:(bool)arg8;

@end
