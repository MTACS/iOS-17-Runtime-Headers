
@interface HKMobilityWalkingSteadinessOnboardingFlowManager : NSObject {
    <HKFeatureStatusProviding> * _classificationsFeatureStatusProvider;
    NSString * _countryCode;
    long long  _countryCodeProvenance;
    HKMobilityWalkingSteadinessFeatureStatusManager * _featureStatusManager;
    HKHealthStore * _healthStore;
    <HKRegulatoryDomainProvider> * _mobileCountryCodeManager;
    <HKFeatureAvailabilityProviding> * _notificationsFeatureAvailabilityStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <HKFeatureStatusProviding> *classificationsFeatureStatusProvider;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) long long countryCodeProvenance;
@property (nonatomic, retain) HKMobilityWalkingSteadinessFeatureStatusManager *featureStatusManager;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) <HKRegulatoryDomainProvider> *mobileCountryCodeManager;
@property (nonatomic, retain) <HKFeatureAvailabilityProviding> *notificationsFeatureAvailabilityStore;

- (void).cxx_destruct;
- (id)_findAnyOnboardingCompletionWithError:(id*)arg1;
- (id)classificationsFeatureStatusProvider;
- (id)countryCode;
- (long long)countryCodeProvenance;
- (id)featureStatusManager;
- (void)fetchUserCanContinueOnboardingForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 completion:(id /* block */)arg3;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 classificationsFeatureStatusProvider:(id)arg2 notificationsFeatureAvailabilityStore:(id)arg3 featureStatusManager:(id)arg4;
- (void)markOnboardingCompleteForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 shouldTurnOnNotifications:(bool)arg3 completion:(id /* block */)arg4;
- (id)mobileCountryCodeManager;
- (id)notificationsFeatureAvailabilityStore;
- (void)setClassificationsFeatureStatusProvider:(id)arg1;
- (void)setFeatureStatusManager:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMobileCountryCodeManager:(id)arg1;
- (void)setNotificationsFeatureAvailabilityStore:(id)arg1;
- (bool)userCanContinueOnboardingWithDateOfBirthComponents:(id)arg1;

@end
