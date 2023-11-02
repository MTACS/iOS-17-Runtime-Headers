
@interface HDMobilityWalkingSteadinessAnalyticsDailyEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider> {
    NSUserDefaults * _mobilitySettingsDefaults;
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_categoryValuePredicateWithValues:(id)arg1;
- (id)_countOfCategorySamplesInPastYearWithType:(id)arg1 values:(id)arg2 error:(id*)arg3;
- (id)_countOfSamplesInPastYearWithType:(id)arg1 valuePredicate:(id)arg2 error:(id*)arg3;
- (id)_countOfSamplesWithType:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
- (id)_hasLaunchedHealthAppInLastMonthWithError:(id*)arg1;
- (id)_hasLaunchedHealthAppInLastTimeInterval:(double)arg1 error:(id*)arg2;
- (id)_hasLaunchedHealthAppInLastWeekWithError:(id*)arg1;
- (id)_hasSampleWithType:(id)arg1 error:(id*)arg2;
- (id)_healthAppLastOpenedDateWithError:(id*)arg1;
- (id)_numberOfDaysSinceLastCategorySampleWithSampleType:(id)arg1 values:(id)arg2 error:(id*)arg3;
- (id)_numberOfDaysSinceLastSampleWithSampleType:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
- (id)_samplePredicateForPastYearFromDate:(id)arg1;
- (id)activePairedWatchTypeWithError:(id*)arg1;
- (id)ageWithError:(id*)arg1;
- (id)areHealthNotificationsAuthorizedWithError:(id*)arg1;
- (id)biologicalSexWithError:(id*)arg1;
- (id)currentWalkingSteadinessClassificationWithError:(id*)arg1;
- (id)daysSinceLastInitialNotificationWithError:(id*)arg1;
- (id)daysSinceLastRepeatNotificationWithError:(id*)arg1;
- (id)hasHeightWithError:(id*)arg1;
- (id)hasLaunchedHealthAppInLastMonth:(id*)arg1;
- (id)hasLaunchedHealthAppInLastWeek:(id*)arg1;
- (id)hasWalkingSteadinessMeasurementsWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1;
- (id)numberOfDaysSinceLastWalkingSteadinessMeasurementWithError:(id*)arg1;
- (id)numberOfInitialNotificationsInPastYearWithError:(id*)arg1;
- (id)numberOfLowNotificationsInPastYearWithError:(id*)arg1;
- (id)numberOfRepeatLowNotificationsInPastYearWithError:(id*)arg1;
- (id)numberOfRepeatVeryLowNotificationsInPastYearWithError:(id*)arg1;
- (id)numberOfVeryLowNotificationsInPastYearWithError:(id*)arg1;
- (id)previousWalkingSteadinessClassificationWithError:(id*)arg1;
- (id)walkingSteadinessNotificationsEnabledWithError:(id*)arg1;

@end
