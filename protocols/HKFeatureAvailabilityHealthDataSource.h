
@protocol HKFeatureAvailabilityHealthDataSource <NSObject>

@required

- (<HKFeatureAvailabilityProviding> *)featureAvailabilityProvidingForFeatureIdentifier:(NSString *)arg1;
- (HKProfileIdentifier *)profileIdentifier;
- (HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *)requirementSatisfactionOverridesDataSource;
- (bool)requiresWeakRetention;
- (HKWatchLowPowerModeDataSource *)watchLowPowerModeDataSource;
- (HKWristDetectionSettingManager *)wristDetectionSettingManager;

@end
