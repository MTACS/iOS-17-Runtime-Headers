
@interface HealthUI.DefaultPairedDeviceFeatureAttributesDataSource : NSObject <HKFeatureAvailabilityProvidingObserver> {
    void activePairedDeviceProvider;
    void featureAvailabilityStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void subscribers;
    void updateSignalPublisher;
}

- (void).cxx_destruct;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (id)init;

@end
