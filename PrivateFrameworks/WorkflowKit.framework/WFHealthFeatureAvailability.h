
@interface WFHealthFeatureAvailability : NSObject <HKFeatureAvailabilityProvidingObserver> {
    <WFHealthFeatureObserver> * _observer;
    NSString * _onboardingCompletedKey;
    NSObject<OS_dispatch_queue> * _queue;
    HKSPFeatureAvailabilityStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <WFHealthFeatureObserver> *observer;
@property (nonatomic, readonly) NSString *onboardingCompletedKey;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long sleepOnboardingStatus;
@property (nonatomic, retain) HKSPFeatureAvailabilityStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)getSleepOnboardingStatus:(id /* block */)arg1;
- (id)initWithSleepFeature:(unsigned long long)arg1;
- (id)observer;
- (id)onboardingCompletedKey;
- (id)queue;
- (void)setObserver:(id)arg1;
- (void)setSleepOnboardingStatus:(unsigned long long)arg1;
- (void)setStore:(id)arg1;
- (unsigned long long)sleepOnboardingStatus;
- (id)store;

@end
