
@interface HUHomePodServiceDetails : NSObject

+ (id)SAHomePodCardForMediaRoutingIdentifier:(id)arg1 deviceName:(id)arg2 mediaAccessoryItemType:(long long)arg3;
+ (id)SAHomePodCardForMediaRoutingIdentifier:(id)arg1 deviceName:(id)arg2 mediaAccessoryItemType:(long long)arg3 cornerRadius:(double)arg4;
+ (id)SAHomePodCardWithQuickControlsForDeviceUUID:(id)arg1 inHomeWithUUID:(id)arg2;
+ (id)SAHomePodCardWithQuickControlsForDeviceUUID:(id)arg1 inHomeWithUUID:(id)arg2 cornerRadius:(double)arg3;
+ (id)_homePodDetailsViewControllerForAccessory:(id)arg1 inHome:(id)arg2 cornerRadius:(double)arg3;
+ (id)_homePodDetailsViewControllerForAccessoryWithMediaRoutingIdentifier:(id)arg1 deviceName:(id)arg2 mediaAccessoryItemType:(long long)arg3 cornerRadius:(double)arg4;
+ (id)_homePodDetailsViewControllerForHomePodWithUUID:(id)arg1 inHomeWithUUID:(id)arg2 fromHomes:(id)arg3 cornerRadius:(double)arg4;
+ (id)_homePodDetailsViewControllerForMediaRoutingIdentifier:(id)arg1 deviceName:(id)arg2 mediaAccessoryItemType:(long long)arg3 cornerRadius:(double)arg4;
+ (id)_homePodSettingsViewControllerForAccessory:(id)arg1 inHome:(id)arg2;
+ (id)_homePodSettingsViewControllerForHomePodWithUUID:(id)arg1 inHomeWithUUID:(id)arg2 fromHomes:(id)arg3;
+ (id)homePodCardForDeviceUUID:(id)arg1 inHomeWithUUID:(id)arg2;
+ (id)homePodCardForMediaRoutingIdentifier:(id)arg1 deviceName:(id)arg2 mediaAccessoryItemType:(long long)arg3;
+ (id)homePodCardForMediaRoutingIdentifier:(id)arg1 deviceName:(id)arg2 mediaAccessoryItemType:(long long)arg3 cornerRadius:(double)arg4;
+ (id)homePodCardWithQuickControlsForDeviceUUID:(id)arg1 inHomeWithUUID:(id)arg2;
+ (id)homePodCardWithQuickControlsForDeviceUUID:(id)arg1 inHomeWithUUID:(id)arg2 cornerRadius:(double)arg3;

@end
