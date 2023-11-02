
@interface HDBackgroundFeatureDeliveryManager : NSObject <HDFeatureAvailabilityExtensionObserver, HDPeriodicCountryMonitorObserver> {
    <HDFeatureAvailabilityExtension> * _featureAvailabilityExtension;
    <HDBackgroundFeatureDeliveryCriteriaProviding> * _featureSpecificDeliveryCriteria;
    NSObject<OS_os_log> * _loggingCategory;
    HDPeriodicCountryMonitor * _periodicCountryMonitor;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    <HDBackgroundFeatureDeliverySettingsProviding> * _settingsProvider;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithProfile:(id)arg1 periodicCountryMonitor:(id)arg2 featureAvailabilityExtension:(id)arg3 deliveryCriteria:(id)arg4 settingsProvider:(id)arg5 loggingCategory:(id)arg6;
- (id)description;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (id)initWithProfile:(id)arg1 featureAvailabilityExtension:(id)arg2 deliveryCriteria:(id)arg3 settingsProvider:(id)arg4 loggingCategory:(id)arg5;
- (id)initWithProfile:(id)arg1 featureAvailabilityExtension:(id)arg2 loggingCategory:(id)arg3;
- (bool)isEligibleForFetchByPeriodicCountryMonitor:(id)arg1;
- (void)periodicCountryMonitor:(id)arg1 didFetchISOCountryCode:(id)arg2 countryCodeProvenance:(long long)arg3;

@end
