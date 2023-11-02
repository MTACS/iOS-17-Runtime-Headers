
@protocol HKHRCardioFitnessFeatureStatusManagerClient <NSObject>

@required

- (void)client_didUpdateNotificationStatus:(HKHRCardioFitnessNotificationStatus *)arg1;
- (void)client_didUpdateOnboardingStatus:(HKHRCardioFitnessOnboardingStatus *)arg1;

@end
