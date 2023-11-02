
@protocol AFInvocationFeedbackExperiment <NSObject>

@required

- (unsigned long long)featureGroups;
- (bool)isFeatureGroupFourEnabled;
- (bool)isFeatureGroupOneEnabled;
- (bool)isFeatureGroupThreeEnabled;
- (bool)isFeatureGroupTwoEnabled;
- (void)logExperimentExposureForInvocationFeedbacks;

@end
