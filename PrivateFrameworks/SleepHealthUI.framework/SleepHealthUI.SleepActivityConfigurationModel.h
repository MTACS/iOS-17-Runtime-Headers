
@interface SleepHealthUI.SleepActivityConfigurationModel : NSObject <HKFeatureAvailabilityProvidingObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _layout;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _scheduleModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _settingsModel;
    void behavior;
    void configUIVisitedKey;
    void featureAvailability;
    void subscriptions;
    void watchAppInstalledProvider;
}

- (void).cxx_destruct;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (id)init;

@end
