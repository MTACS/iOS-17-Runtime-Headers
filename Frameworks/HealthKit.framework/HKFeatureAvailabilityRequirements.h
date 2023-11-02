
@interface HKFeatureAvailabilityRequirements : NSObject

+ (id)activeRemoteDeviceIsPresentWhenRequiredForRegionAvailabilityOrDeviceCapabilityForFeatureWithIdentifier:(id)arg1;
+ (id)bloodOxygenMeasurementsAreEnabled;
+ (id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)arg1;
+ (id)capabilityIsSupportedOnActiveWatchForFeatureWithIdentifier:(id)arg1 supportedOnLocalDevice:(bool)arg2;
+ (id)capabilityIsSupportedOnAnyWatch:(id)arg1 supportedOnLocalDevice:(bool)arg2;
+ (id)countryCodeIsPresentForFeatureWithIdentifier:(id)arg1;
+ (id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)arg1 isSupportedIfCountryListMissing:(bool)arg2;
+ (id)countryIsSupportedOnLocalDeviceAndPhoneForFeatureWithIdentifier:(id)arg1 isSupportedIfCountryListMissing:(bool)arg2;
+ (id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)arg1;
+ (id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)arg1 isSupportedIfCountryListMissing:(bool)arg2;
+ (id)defaultHelpTileRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)arg1 isAgeGatedUserDefaultsKey:(id)arg2;
+ (id)defaultOnboardingEligibilityRequirementsForFeatureIdentifier:(id)arg1;
+ (id)defaultTipsAppVisibilityRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)arg1 isAgeGatedUserDefaultsKey:(id)arg2;
+ (id)featureFlagIsEnabled:(bool)arg1;
+ (id)featureIsNotRemotelyDisabledWithIdentifier:(id)arg1;
+ (id)featureIsOnWithIdentifier:(id)arg1 isOnIfSettingIsAbsent:(bool)arg2;
+ (id)featureIsOnWithIdentifier:(id)arg1 settingsKey:(id)arg2 isOnIfSettingIsAbsent:(bool)arg3;
+ (id)healthAppIsNotHidden;
+ (id)heartRateIsEnabledInPrivacy;
+ (id)localDeviceIsCapableOfPairingWithWatch;
+ (id)localDeviceIsCapableOfWatchPairing;
+ (id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)arg1;
+ (id)notAgeGatedForUserDefaultsKey:(id)arg1;
+ (id)notInStoreDemoMode;
+ (id)onboardedAtLeastDaysAgo:(long long)arg1 featureIdentifier:(id)arg2;
+ (id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)arg1;
+ (id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)arg1;
+ (id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)arg1;
+ (id)onboardingRecordsArePresentForPrerequisiteFeaturesWithIdentifiers:(id)arg1;
+ (id)prerequisiteFeaturesAreOnWithFeatureSettings:(id)arg1;
+ (id)profileIsNotFamilySetupPairingProfile;
+ (id)seedIsNotExpiredForFeatureWithIdentifier:(id)arg1;
+ (id)watchAppIsInstalledForBundleIdentifier:(id)arg1;
+ (id)watchLowPowerModeIsOff;
+ (id)wristDetectionIsEnabledForActiveWatch;

@end
