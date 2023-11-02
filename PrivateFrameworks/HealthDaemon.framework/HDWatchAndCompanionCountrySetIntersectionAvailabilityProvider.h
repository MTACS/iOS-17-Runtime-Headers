
@interface HDWatchAndCompanionCountrySetIntersectionAvailabilityProvider : NSObject <HDAllowedCountriesDataSourceObserver, HDObservableRegionAvailabilityProviding> {
    <HDAllowedCountriesDataSource> * _allowedCountriesDataSource;
    <HDRegionAvailabilityProvidingDelegate> * _delegate;
    NSUUID * _featureCapability;
    NSObject<OS_os_log> * _loggingCategory;
    <HDPairedDeviceCapabilityProviding> * _pairedDeviceCapabilityProvider;
    HDProfile * _profile;
    bool  _reloadsLocalCountrySetOnRemoteCountrySetUpdate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDRegionAvailabilityProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)lastContentVersionDuringReloadAttemptDomainForProfile:(id)arg1;

- (void).cxx_destruct;
- (void)allowedCountriesDataSourceDidUpdateActiveRemoteCountrySet:(id)arg1;
- (void)allowedCountriesDataSourceDidUpdateLocalCountrySet:(id)arg1;
- (id)delegate;
- (id)description;
- (id)initWithAllowedCountriesDataSource:(id)arg1 profile:(id)arg2 featureCapability:(id)arg3 loggingCategory:(id)arg4;
- (id)initWithAllowedCountriesDataSource:(id)arg1 profile:(id)arg2 featureCapability:(id)arg3 reloadsLocalCountrySetOnRemoteCountrySetUpdate:(bool)arg4 loggingCategory:(id)arg5;
- (id)onboardingEligibilityForCountryCode:(id)arg1;
- (id)onboardingEligibilityForCountryCode:(id)arg1 device:(id)arg2;
- (id)regionAvailability;
- (id)regionAvailabilityForDevice:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
