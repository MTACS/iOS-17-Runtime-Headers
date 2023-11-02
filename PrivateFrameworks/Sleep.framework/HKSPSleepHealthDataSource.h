
@interface HKSPSleepHealthDataSource : NSObject <HKFeatureAvailabilityHealthDataSource> {
    HKSPSleepStore * _sleepStore;
    <HKFeatureAvailabilityHealthDataSource> * _strongHealthDataSource;
    <HKFeatureAvailabilityHealthDataSource> * _weakHealthDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HKFeatureAvailabilityHealthDataSource> *healthDataSource;
@property (nonatomic, readonly) HKProfileIdentifier *profileIdentifier;
@property (nonatomic, readonly) bool requiresWeakRetention;
@property (nonatomic, readonly) HKSPSleepStore *sleepStore;
@property (nonatomic, readonly) <HKFeatureAvailabilityHealthDataSource> *strongHealthDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKFeatureAvailabilityHealthDataSource> *weakHealthDataSource;

- (void).cxx_destruct;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)arg1;
- (id)healthDataSource;
- (id)initWithSleepStore:(id)arg1 healthDataSource:(id)arg2;
- (id)profileIdentifier;
- (id)requirementSatisfactionOverridesDataSource;
- (bool)requiresWeakRetention;
- (id)sleepStore;
- (id)strongHealthDataSource;
- (id)watchLowPowerModeDataSource;
- (id)weakHealthDataSource;
- (id)wristDetectionSettingManager;

@end
