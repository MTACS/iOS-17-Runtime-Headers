
@interface HDHRAFibBurdenDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    <HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider> * _notificationsAuthorizedProvider;
    HDProfile * _profile;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (long long)_bucketedBurdenValueForSample:(id)arg1;
- (long long)_bucketedWeeksSinceDate:(id)arg1 dataSource:(id)arg2;
- (long long)_daysSinceDate:(id)arg1 dataSource:(id)arg2;
- (long long)_daysSinceDate:(id)arg1 maximum:(id)arg2 dataSource:(id)arg3;
- (id)_determineIfSamplesOverlappingSample:(id)arg1 dataSource:(id)arg2;
- (void)_extractAFibBurdenFeatureStatusPropertiesFromDataSource:(id)arg1 payload:(id)arg2;
- (void)_extractBucketedDaysSinceLastSampleOfType:(id)arg1 intoProperty:(id)arg2 inPayload:(id)arg3 dataSource:(id)arg4;
- (void)_extractBurdenSamplePropertiesIntoPayload:(id)arg1 dataSource:(id)arg2;
- (void)_extractDaysSinceDateInKeyValueDomain:(id)arg1 withKey:(id)arg2 intoProperty:(id)arg3 inPayload:(id)arg4 dataSource:(id)arg5;
- (void)_extractFeatureStatusPropertiesForFeatureIdentifier:(id)arg1 payload:(id)arg2 dataSource:(id)arg3 ifOnboardedBlock:(id /* block */)arg4 ifUsageRequirementsEvaluationPresentBlock:(id /* block */)arg5 ifErrorRetrievingFeatureStatusBlock:(id /* block */)arg6;
- (void)_extractIRNFeatureStatusPropertiesFromDataSource:(id)arg1 payload:(id)arg2;
- (void)_extractWatchWearPropertiesIntoPayload:(id)arg1 dataSource:(id)arg2;
- (id)_numberOfSamplesOfType:(id)arg1 dateInterval:(id)arg2 additionalPredicate:(id)arg3 bucketer:(id /* block */)arg4;
- (id)_sedentaryAndBackgroundHeartRateContextPredicate;
- (id)eventName;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 notificationsAuthorizedProvider:(id)arg2;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
