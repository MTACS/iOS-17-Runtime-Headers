
@protocol HMDAccessorySettingsControllerDelegate <NSObject>

@required

- (void)accessorySettingsController:(HMDAccessorySettingsController *)arg1 saveWithReason:(NSString *)arg2;
- (void)accessorySettingsController:(HMDAccessorySettingsController *)arg1 saveWithReason:(NSString *)arg2 model:(HMDBackingStoreModelObject *)arg3;
- (HMDBackingStoreModelObject *)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(HMDAccessorySettingsController *)arg1;
- (bool)isMultiUserEnabledForAccessorySettingsController:(HMDAccessorySettingsController *)arg1;
- (void)languagesChangedForAccessorySettingsController:(HMDAccessorySettingsController *)arg1;
- (HMDRemoteDeviceMessageDestination *)remoteMessageDestinationForAccessorySettingsController:(HMDAccessorySettingsController *)arg1 target:(NSUUID *)arg2;
- (NSArray *)supportedMultiUserLanguageCodesForAccessorySettingsController:(HMDAccessorySettingsController *)arg1;

@end
