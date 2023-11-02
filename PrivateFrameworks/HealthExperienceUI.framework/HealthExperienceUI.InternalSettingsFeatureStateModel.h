
@interface HealthExperienceUI.InternalSettingsFeatureStateModel : NSObject <HKFeatureAvailabilityProvidingObserver> {
    void $__lazy_storage_$_dateFormatter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _errorMessage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _featureState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _featureStatus;
    void featureAvailabilityStore;
    void featureStatusManager;
    void subscriptions;
}

- (void).cxx_destruct;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (id)init;

@end
