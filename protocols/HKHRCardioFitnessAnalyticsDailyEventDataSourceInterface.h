
@protocol HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface

@required

- (NSNumber *)determineDaysSinceLastLowNotificationWithCurrentDate:(NSDate *)arg1 isImproveHealthAndActivityAllowed:(bool)arg2 error:(id*)arg3;
- (NSNumber *)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(NSDate *)arg1 isImproveHealthAndActivityAllowed:(bool)arg2 error:(id*)arg3;
- (NSNumber *)determineIsBlockersEnabledWithIsImproveHealthAndActivityAllowed:(bool)arg1 error:(id*)arg2;
- (NSNumber *)determineIsHeartRateEnabledWithIsImproveHealthAndActivityAllowed:(bool)arg1;
- (bool)determineIsNotificationsEnabled;
- (NSNumber *)determineIsWristDetectionEnabledWithIsImproveHealthAndActivityAllowed:(bool)arg1;
- (NSNumber *)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(NSDate *)arg1 isImproveHealthAndActivityAllowed:(bool)arg2 error:(id*)arg3;
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(NSDate *)arg1 error:(id*)arg2;
- (NSString *)latestClassificationWithIsOnboarded:(bool)arg1 isImproveHealthAndActivityAllowed:(bool)arg2 error:(id*)arg3;

@end
