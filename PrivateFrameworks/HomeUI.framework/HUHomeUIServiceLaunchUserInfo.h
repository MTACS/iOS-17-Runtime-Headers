
@interface HUHomeUIServiceLaunchUserInfo : NSObject

+ (bool)isInSetupContext:(long long)arg1;
+ (long long)launchReasonFromUserInfo:(id)arg1;
+ (id)userInfoForLockAccessFirmwareUpgradeSetupInHome:(id)arg1;
+ (id)userInfoForLockAccessPinCodeSetupInHome:(id)arg1;
+ (id)userInfoForLockAccessWalletKeySetupInHome:(id)arg1;
+ (id)userInfoForResumeAccessorySetupInHome:(id)arg1 accessoryUUIDs:(id)arg2;
+ (id)userInfoForSafetyAndSecurityInHome:(id)arg1;
+ (id)userInfoForSiriEndpointInHome:(id)arg1;
+ (id)userInfoForUpgradeOfferResults:(id)arg1;

@end
