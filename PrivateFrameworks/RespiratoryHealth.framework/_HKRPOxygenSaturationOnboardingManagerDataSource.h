
@interface _HKRPOxygenSaturationOnboardingManagerDataSource : NSObject <HKRPOxygenSaturationOnboardingManagerDataSource> {
    HKFeatureAvailabilityStore * _featureAvailabilityProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HKRegulatoryDomainProvider> * _mobileCountryCodeManager;
    HKRPOxygenSaturationOnboardingCache * _onboardingCache;
    HKRPOxygenSaturationAvailability * _oxygenSaturationAvailability;
    HKRPOxygenSaturationSettings * _oxygenSaturationSettings;
}

@property (getter=isAgeGated, nonatomic, readonly) bool ageGated;
@property (getter=isBloodOxygenSaturationEnabled, nonatomic, readonly) bool bloodOxygenSaturationEnabled;
@property (nonatomic, readonly) NSString *countryCodeFromCurrentLocale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NRDevice *device;
@property (nonatomic, readonly) <HKFeatureAvailabilityProviding> *featureAvailabilityProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HKRegulatoryDomainProvider> *mobileCountryCodeManager;
@property (nonatomic, readonly) HKRPOxygenSaturationOnboardingCache *onboardingCache;
@property (nonatomic, readonly) HKRPOxygenSaturationSettings *oxygenSaturationSettings;
@property (nonatomic, readonly) bool shouldAdvertise;
@property (nonatomic, readonly) bool skipHardwareCheck;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lazyPropertyWithLockedBlock:(id /* block */)arg1;
- (id)countryCodeFromCurrentLocale;
- (id)device;
- (id)featureAvailabilityProvider;
- (id)init;
- (bool)isAgeGated;
- (bool)isBloodOxygenSaturationEnabled;
- (id)mobileCountryCodeManager;
- (id)onboardingCache;
- (id)oxygenSaturationSettings;
- (bool)shouldAdvertise;
- (bool)skipHardwareCheck;

@end
