
@interface HDLocalCountrySetAvailabilityProvider : NSObject <HDOTAFeatureAvailabilityObserver, HDObservableRegionAvailabilityProviding> {
    HKCountrySet * _defaultCountrySet;
    <HDRegionAvailabilityProvidingDelegate> * _delegate;
    NSString * _featureIdentifier;
    HDDaemon * _healthDaemon;
    NSUserDefaults * _overrideUserDefaults;
}

@property (nonatomic, readonly, copy) HKCountrySet *countrySet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDRegionAvailabilityProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)OTAFeatureAvailabilityManagerDidUpdateFeatureAvailabilityInfo:(id)arg1;
- (id)countrySet;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)downloadLatestOTAAvailabilityInfoWithCompletion:(id /* block */)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 defaultCountrySet:(id)arg2 healthDaemon:(id)arg3;
- (id)initWithFeatureIdentifier:(id)arg1 defaultCountrySet:(id)arg2 healthDaemon:(id)arg3 overrideUserDefaults:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)onboardingEligibilityForCountryCode:(id)arg1;
- (id)onboardingEligibilityForCountryCode:(id)arg1 device:(id)arg2;
- (id)regionAvailability;
- (id)regionAvailabilityForDevice:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
