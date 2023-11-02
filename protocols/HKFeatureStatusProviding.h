
@protocol HKFeatureStatusProviding

@required

- (<HKFeatureAvailabilityProviding> *)featureAvailabilityProviding;
- (NSString *)featureIdentifier;
- (HKFeatureStatus *)featureStatusWithError:(id*)arg1;
- (void)registerObserver:(id <HKFeatureStatusProvidingObserver>)arg1;
- (void)registerObserver:(id <HKFeatureStatusProvidingObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)unregisterObserver:(id <HKFeatureStatusProvidingObserver>)arg1;

@end
