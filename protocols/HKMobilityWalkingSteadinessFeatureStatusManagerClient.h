
@protocol HKMobilityWalkingSteadinessFeatureStatusManagerClient <NSObject>

@required

- (void)client_didUpdateFitnessTrackingEnabled:(bool)arg1;
- (void)client_didUpdateNotificationStatus:(HKMobilityWalkingSteadinessNotificationStatus *)arg1;
- (void)client_didUpdateOnboardingStatus:(HKMobilityWalkingSteadinessOnboardingStatus *)arg1;

@end
