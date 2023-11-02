
@protocol VCNetworkFeedbackControllerDelegate

@required

- (void)preWarmStateChanged:(bool)arg1;
- (void)recommendedSettingsChanged:(VCRecommendedNetworkSettings *)arg1;
- (void)reportingIntervalChanged:(double)arg1;

@end
