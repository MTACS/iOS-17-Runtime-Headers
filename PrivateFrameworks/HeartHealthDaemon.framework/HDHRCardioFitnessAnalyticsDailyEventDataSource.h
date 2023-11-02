
@interface HDHRCardioFitnessAnalyticsDailyEventDataSource : NSObject <HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface> {
    HDProfile * _profile;
}

+ (id)localGregorianCalendar;

- (void).cxx_destruct;
- (long long)_determineDaysSinceLastSampleWithSampleType:(id)arg1 currentDate:(id)arg2 error:(id*)arg3;
- (id)determineDaysSinceLastLowNotificationWithCurrentDate:(id)arg1 isImproveHealthAndActivityAllowed:(bool)arg2 error:(id*)arg3;
- (id)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(id)arg1 isImproveHealthAndActivityAllowed:(bool)arg2 error:(id*)arg3;
- (id)determineIsBlockersEnabledWithIsImproveHealthAndActivityAllowed:(bool)arg1 error:(id*)arg2;
- (id)determineIsHeartRateEnabledWithIsImproveHealthAndActivityAllowed:(bool)arg1;
- (bool)determineIsNotificationsEnabled;
- (id)determineIsWristDetectionEnabledWithIsImproveHealthAndActivityAllowed:(bool)arg1;
- (id)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(id)arg1 isImproveHealthAndActivityAllowed:(bool)arg2 error:(id*)arg3;
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(id)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (id)latestClassificationWithIsOnboarded:(bool)arg1 isImproveHealthAndActivityAllowed:(bool)arg2 error:(id*)arg3;
- (long long)numberOfDaysBetweenStartDate:(id)arg1 endDate:(id)arg2;

@end
