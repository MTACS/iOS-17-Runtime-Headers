
@interface HKMCOnboardingManager : NSObject <HKFeatureAvailabilityProvidingObserver> {
    HKFeatureAvailabilityStore * _deviationsFeatureAvailabilityStore;
    HKFeatureAvailabilityStore * _featureAvailabilityStore;
    HKHealthStore * _healthStore;
    HKFeatureAvailabilityStore * _heartRateInputFeatureAvailabilityStore;
    HKKeyValueDomain * _legacyOnboardingKeyValueDomain;
    HKMenstrualCyclesStore * _menstrualCyclesStore;
    NSObject<OS_dispatch_queue> * _observerQueue;
    HKObserverSet * _observers;
    HKFeatureAvailabilityStore * _wristTemperatureInputFeatureAvailabilityStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKFeatureAvailabilityStore *deviationsFeatureAvailabilityStore;
@property (nonatomic, readonly) HKFeatureAvailabilityStore *featureAvailabilityStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKFeatureAvailabilityStore *heartRateInputFeatureAvailabilityStore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKQuantity *userEnteredCycleLength;
@property (nonatomic, readonly) HKQuantity *userEnteredPeriodLength;
@property (nonatomic, readonly) HKFeatureAvailabilityStore *wristTemperatureInputFeatureAvailabilityStore;

- (void).cxx_destruct;
- (id)_featureAvailabilityStoreForFeatureWithIdentifier:(id)arg1;
- (id)_onboardingRecordForFeatureWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)_resetOnboardingCharacteristicsWithError:(id*)arg1;
- (bool)_resetOnboardingKeyValueDomainWithError:(id*)arg1;
- (void)_saveUserEnteredCycleLength:(id)arg1 userEnteredPeriodLength:(id)arg2 userEnteredLastPeriodStartDay:(id)arg3 addedCycleFactors:(id)arg4 deletedCycleFactors:(id)arg5 completion:(id /* block */)arg6;
- (void)_setCurrentOnboardingVersionCompletedWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (bool)_setLegacyOnboardingCompletedVersion:(long long)arg1 error:(id*)arg2;
- (void)_triggerHealthKitSync;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)deviationsFeatureAvailabilityStore;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (id)featureAvailabilityStore;
- (id)heartRateInputFeatureAvailabilityStore;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 queue:(id)arg2;
- (bool)isAnyOnboardingVersionCompleted;
- (void)isAnyOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (id)onboardingRecordWithError:(id*)arg1;
- (void)removeObserver:(id)arg1;
- (void)resetOnboarding:(id /* block */)arg1;
- (void)setOnboardingCompletedWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)userEnteredCycleLength;
- (id)userEnteredPeriodLength;
- (id)wristTemperatureInputFeatureAvailabilityStore;

@end
