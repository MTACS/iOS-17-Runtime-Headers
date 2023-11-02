
@interface HealthMobilityUI.WalkingSteadinessAdvertisableFeatureSource : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerObserver> {
    void countryProvider;
    void delegate;
    void featureOnboardingManager;
    void featureStatusManager;
    void healthStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)featureStatusManager:(id)arg1 didUpdateNotificationStatus:(id)arg2;
- (void)featureStatusManager:(id)arg1 didUpdateOnboardingStatus:(id)arg2;
- (id)init;

@end
