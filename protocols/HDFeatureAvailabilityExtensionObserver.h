
@protocol HDFeatureAvailabilityExtensionObserver <HKFeatureAvailabilityProvidingObserver>

@required

- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id <HDFeatureAvailabilityExtension>)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id <HDFeatureAvailabilityExtension>)arg1;

@end
