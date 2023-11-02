
@protocol HKMobilityWalkingSteadinessFeatureStatusManagerObserver <NSObject>

@optional

- (void)featureStatusManager:(HKMobilityWalkingSteadinessFeatureStatusManager *)arg1 didUpdateFitnessTrackingEnabled:(bool)arg2;
- (void)featureStatusManager:(HKMobilityWalkingSteadinessFeatureStatusManager *)arg1 didUpdateNotificationStatus:(HKMobilityWalkingSteadinessNotificationStatus *)arg2;
- (void)featureStatusManager:(HKMobilityWalkingSteadinessFeatureStatusManager *)arg1 didUpdateOnboardingStatus:(HKMobilityWalkingSteadinessOnboardingStatus *)arg2;

@end
