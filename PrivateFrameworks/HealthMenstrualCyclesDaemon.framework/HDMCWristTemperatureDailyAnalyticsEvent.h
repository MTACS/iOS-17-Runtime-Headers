
@interface HDMCWristTemperatureDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDMCAnalysisManager * _analysisManager;
    NSUserDefaults * _privacyDefaults;
    HDProfile * _profile;
    HKMCSettingsManager * _settingsManager;
    HKSPSleepStore * _sleepStore;
    HKWristDetectionSettingManager * _wristDetectionSettingManager;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)_IHAGatedDemographicsFieldsWithDataSource:(id)arg1;
- (id)_IHAGatedLastSleepDayWristTemperatureFieldsWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_IHAGatedSleepingWristTemperatureStatisticsFieldsWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_allNoiseFieldsWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_areBloodOxygenMeasurementsEnabledWithDataSource:(id)arg1;
- (id)_areRespiratoryRateMeasurementsEnabledWithDataSource:(id)arg1;
- (long long)_bucketedWeeksSinceDate:(id)arg1 dataSource:(id)arg2;
- (id)_celsiusValueFromQuantity:(id)arg1 scale:(short)arg2;
- (id)_changeInCelsiusStringFromQuantity:(id)arg1 scale:(short)arg2;
- (id)_countOfLast30DaysWithSleepSamplesWithCurrentDate:(id)arg1 calendarCache:(id)arg2;
- (id)_countOfLast30DaysWithSleepingWristTemperatureSamplesWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (long long)_countOfUniqueSerialNumbersFromSamples:(id)arg1;
- (long long)_countOfUniqueSourcesFromSamples:(id)arg1;
- (id)_countOfUniqueSourcesOfWristTemperatureSamplesFieldsWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_daysWithStandHoursInLast30DaysWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_discreteRelativeSleepingWristTemperatureStatisticsLast30DaysWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 dominantWatchSourceEntityPredicate:(id)arg3;
- (id)_discreteSleepingWristTemperatureStatisticsLast30DaysWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 dominantWatchSourceEntityPredicate:(id)arg3;
- (id)_dominantSleepingWristTemperatureSourceEntityPredicateOverLastNDays:(long long)arg1 currentDate:(id)arg2 gregorianCalendar:(id)arg3;
- (id)_dominantSleepingWristTemperatureSourceOverLastNDays:(long long)arg1 currentDate:(id)arg2 gregorianCalendar:(id)arg3;
- (id)_dominantWatchLast30DaysFieldsWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_featureStatusForFeatureIdentifier:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (id)_firstPartySleepSamplesFromLastNSleepDays:(long long)arg1 currentDate:(id)arg2 gregorianCalendar:(id)arg3;
- (id)_hasCycleFactorsActive;
- (id)_hoursAsleepDuringLastSleepDayWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_isAFibHistoryEnabledWithDataSource:(id)arg1;
- (id)_isCycleTrackingWristTemperatureInputEnabledWithDataSource:(id)arg1;
- (bool)_isDeviceWristTemperatureCompatible:(id)arg1;
- (id)_isHeartRateEnabledInPrivacy;
- (id)_isIRNEnabledWithDataSource:(id)arg1;
- (id)_isWristDetectionEnabled;
- (id)_isWristTemperatureEnabledWithDataSource:(id)arg1;
- (id)_lastSleepDayHasSleepDataFromCompatibleProductTypeWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_lastSleepDayHasSleepDataWithCurrentDate:(id)arg1 calendarCache:(id)arg2;
- (id)_lastSleepDayHasWristTemperatureDataWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_lastSleepDayRelativeSleepingWristTemperatureWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_medianSleepingWristTemperatureLast30DaysWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 dominantWatchSourceEntityPredicate:(id)arg3;
- (id)_noiseMetricsFromSleepingWristTemperatureSamples:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_pairedWristTemperatureCompatibleDevice;
- (id)_predicateForAppleWatchSamplesInLast30SleepDaysRelativeToCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 sampleType:(id)arg3;
- (id)_predicateForAppleWatchSamplesInLastNSleepDays:(long long)arg1 currentDate:(id)arg2 gregorianCalendar:(id)arg3 sampleType:(id)arg4;
- (id)_predicateForAppleWatchSamplesInLastNSleepDays:(long long)arg1 currentDate:(id)arg2 gregorianCalendar:(id)arg3 sampleType:(id)arg4 sourceEntityPredicate:(id)arg5;
- (id)_preferredSleepingWristTemperatureUnit;
- (id)_roundDouble:(double)arg1 scale:(short)arg2;
- (id)_sampleStandardDeviationOfValues:(id)arg1;
- (id)_samplesByMorningIndex:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_sleepFields;
- (id)_sleepingWristTemperatureDominantWatchSampleCountOverLast30DaysWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)_sleepingWristTemperatureSampleCountBySourceOverLastNDays:(long long)arg1 currentDate:(id)arg2 gregorianCalendar:(id)arg3;
- (id)_sleepingWristTemperatureSamplesFromLastNSleepDays:(long long)arg1 currentDate:(id)arg2 gregorianCalendar:(id)arg3 sourceEntityPredicate:(id)arg4;
- (id)_weeksSinceDeliveryWithDataSource:(id)arg1;
- (id)_wristTemperatureCompatibleDeviceFields;
- (id)eventName;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3 sleepStore:(id)arg4 wristDetectionSettingManager:(id)arg5 privacyDefaults:(id)arg6;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 sleepStore:(id)arg3;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
