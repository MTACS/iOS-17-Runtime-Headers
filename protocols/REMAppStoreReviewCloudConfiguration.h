
@protocol REMAppStoreReviewCloudConfiguration

@required

- (unsigned long long)appStoreReviewCreatedOrCompletedRemindersCountThreshold;
- (unsigned long long)appStoreReviewNumberOfForegroundsThreshold;
- (double)appStoreReviewTimeIntervalOfInterest;
- (double)appStoreReviewTimeIntervalSinceInitialForeground;
- (double)appStoreReviewTimeIntervalSinceLastFetch;
- (double)appStoreReviewTimeIntervalSinceLastPrompt;

@end
