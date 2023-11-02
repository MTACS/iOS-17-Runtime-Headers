
@interface HDMHMentalHealthDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDProfile * _profile;
    HKMHSettingsManager * _settingsManager;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)_IHAGatedDemographicsFieldsWithDataSource:(id)arg1;
- (long long)_bucketedWeeksSinceDate:(id)arg1 dataSource:(id)arg2;
- (id)_determineDaysSinceLastSampleWithSampleType:(id)arg1 dataSource:(id)arg2;
- (id)_enumeratorForPastNDays:(long long)arg1 withDataSource:(id)arg2 forSampleType:(id)arg3 withExtraPredicate:(id)arg4;
- (id)_featureStatusForFeatureIdentifier:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (id)_fetchDeviceContextAnalytics;
- (id)_hasLaunchedHealthAppInInterval:(long long)arg1 withDataSource:(id)arg2;
- (id)_hasLoggedStateOfMindInPastNDays:(long long)arg1 withDataSource:(id)arg2;
- (id)_healthAppLastOpenedDate;
- (id)_isFeatureEnabledForFeatureIdentifier:(id)arg1 dataSource:(id)arg2 featureAvailabilityContext:(id)arg3;
- (id)_isFeatureOnboardedForFeatureIdentifier:(id)arg1 dataSource:(id)arg2;
- (id)_numAssessmentsCompletedWithDataSource:(id)arg1;
- (id)_numAssessmentsInPastNDays:(long long)arg1 withDataSource:(id)arg2;
- (id)_numDailyStateOfMindLogsInPastNDays:(long long)arg1 withDataSource:(id)arg2;
- (id)_numDaysStateOfMindLoggedInPast30DaysWithDataSource:(id)arg1;
- (id)_numDaysStateOfMindLoggedInPastDayWithDataSource:(id)arg1;
- (id)_stateOfMindDaySummaryEnumeratorForPastNDays:(long long)arg1 withDataSource:(id)arg2;
- (id)_weeksSinceLastHealthAppLaunchWithDataSource:(id)arg1;
- (id)_weeksSinceOnboardingWithDataSource:(id)arg1;
- (id)eventName;
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2 userDefaults:(id)arg3;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (long long)numberOfDaysBetweenStartDate:(id)arg1 endDate:(id)arg2 withCalendar:(id)arg3;

@end
