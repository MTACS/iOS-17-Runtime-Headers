
@protocol HMDUserSettingsBackingStoreControllerDelegate <NSObject>

@required

- (HMDCloudShareParticipantsManager *)backingStoreController:(HMDUserSettingsBackingStoreController *)arg1 createParticipantManagerForCloudZone:(HMBCloudZone *)arg2;
- (void)backingStoreController:(HMDUserSettingsBackingStoreController *)arg1 didUpdatePhotosPersonManagerSettingsModel:(HMDPhotosPersonManagerSettingsModel *)arg2 previousPhotosPersonManagerSettingsModel:(HMDPhotosPersonManagerSettingsModel *)arg3;
- (void)didStartBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
- (void)didStartLocalZoneForBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
- (void)didStopBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
- (bool)isCurrentUser;
- (bool)isRunningOnHomeOwnersDevice;
- (HMDUser *)ownerForUserSettingsBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
- (NSUUID *)userUUID;

@end
