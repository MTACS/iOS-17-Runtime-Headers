
@protocol HKFeatureAvailabilityStoreClient <NSObject>

@required

- (void)client_featureAvailabilityExtensionDidUpdateOnboardingCompletion;
- (void)client_featureAvailabilityExtensionDidUpdatePairedDeviceCapability;
- (void)client_featureAvailabilityProvidingDidUpdateSettings;

@end
