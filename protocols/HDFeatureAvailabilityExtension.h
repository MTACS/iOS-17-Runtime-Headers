
@protocol HDFeatureAvailabilityExtension <HKFeatureAvailabilityProviding>

@required

- (void)registerObserver:(id <HDFeatureAvailabilityExtensionObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)unregisterObserver:(id <HDFeatureAvailabilityExtensionObserver>)arg1;

@end
