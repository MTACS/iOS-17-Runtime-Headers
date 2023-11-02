
@interface HKFeatureAvailabilityProvidingDataSource : HKObserverBridge {
    NSMutableDictionary * _featureAvailabilityProvidingByFeatureIdentifier;
    <HKFeatureAvailabilityHealthDataSource> * _healthDataSource;
    <HKFeatureAvailabilityProviding> * _knownFeatureAvailabilityProviding;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _observationQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *featureAvailabilityProvidingByFeatureIdentifier;
@property (nonatomic, readonly) <HKFeatureAvailabilityHealthDataSource> *healthDataSource;
@property (nonatomic) <HKFeatureAvailabilityProviding> *knownFeatureAvailabilityProviding;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observationQueue;

- (void).cxx_destruct;
- (id)featureAvailabilityProvidingByFeatureIdentifier;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)arg1;
- (id)healthDataSource;
- (id)initWithHealthDataSource:(id)arg1;
- (id)knownFeatureAvailabilityProviding;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;
- (id)observationQueue;
- (void)setKnownFeatureAvailabilityProviding:(id)arg1;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;

@end
