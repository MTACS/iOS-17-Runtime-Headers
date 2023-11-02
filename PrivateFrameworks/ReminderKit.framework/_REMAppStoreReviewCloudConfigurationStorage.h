
@interface _REMAppStoreReviewCloudConfigurationStorage : NSObject <REMAppStoreReviewCloudConfiguration> {
    unsigned long long  _appStoreReviewCreatedOrCompletedRemindersCountThreshold;
    unsigned long long  _appStoreReviewNumberOfForegroundsThreshold;
    double  _appStoreReviewTimeIntervalOfInterest;
    double  _appStoreReviewTimeIntervalSinceInitialForeground;
    double  _appStoreReviewTimeIntervalSinceLastFetch;
    double  _appStoreReviewTimeIntervalSinceLastPrompt;
}

@property (nonatomic, readonly) unsigned long long appStoreReviewCreatedOrCompletedRemindersCountThreshold;
@property (nonatomic, readonly) unsigned long long appStoreReviewNumberOfForegroundsThreshold;
@property (nonatomic, readonly) double appStoreReviewTimeIntervalOfInterest;
@property (nonatomic, readonly) double appStoreReviewTimeIntervalSinceInitialForeground;
@property (nonatomic, readonly) double appStoreReviewTimeIntervalSinceLastFetch;
@property (nonatomic, readonly) double appStoreReviewTimeIntervalSinceLastPrompt;

- (unsigned long long)appStoreReviewCreatedOrCompletedRemindersCountThreshold;
- (unsigned long long)appStoreReviewNumberOfForegroundsThreshold;
- (double)appStoreReviewTimeIntervalOfInterest;
- (double)appStoreReviewTimeIntervalSinceInitialForeground;
- (double)appStoreReviewTimeIntervalSinceLastFetch;
- (double)appStoreReviewTimeIntervalSinceLastPrompt;
- (id)initWithCreatedOrCompletedRemindersCountThreshold:(unsigned long long)arg1 numberOfForegroundsThreshold:(unsigned long long)arg2 timeIntervalOfInterest:(double)arg3 timeIntervalSinceInitialForeground:(double)arg4 timeIntervalSinceLastFetch:(double)arg5 timeIntervalSinceLastPrompt:(double)arg6;

@end
