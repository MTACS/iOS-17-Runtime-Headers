
@interface HKHRCardioFitnessOnboardingFlowManager : NSObject {
    <HKFeatureAvailabilityProviding> * _featureAvailabilityStore;
    HKHRCardioFitnessFeatureStatusManager * _featureStatusManager;
    HKHealthStore * _healthStore;
    <HKRegulatoryDomainProvider> * _mobileCountryCodeManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <HKFeatureAvailabilityProviding> *featureAvailabilityStore;
@property (nonatomic, retain) HKHRCardioFitnessFeatureStatusManager *featureStatusManager;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) <HKRegulatoryDomainProvider> *mobileCountryCodeManager;

- (void).cxx_destruct;
- (id)featureAvailabilityStore;
- (id)featureStatusManager;
- (void)fetchUserCanContinueOnboardingAtCurrentLocationWithCompletion:(id /* block */)arg1;
- (id)fetchUserCanContinueOnboardingWithCountryCode:(id)arg1 error:(id*)arg2;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 featureAvailabilityStore:(id)arg2 featureStatusManager:(id)arg3;
- (void)markOnboardingCompleteWithCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 notificationEnablement:(id)arg3 completion:(id /* block */)arg4;
- (id)mobileCountryCodeManager;
- (void)setFeatureAvailabilityStore:(id)arg1;
- (void)setFeatureStatusManager:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMobileCountryCodeManager:(id)arg1;
- (bool)userCanContinueOnboardingWithDateOfBirthComponents:(id)arg1;

@end
