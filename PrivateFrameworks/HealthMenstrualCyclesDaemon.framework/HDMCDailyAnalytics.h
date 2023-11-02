
@interface HDMCDailyAnalytics : NSObject {
    HKMCAnalysis * _analysis;
    HDKeyValueDomain * _appProtectedKeyValueDomain;
    HDKeyValueDomain * _deviationDetectionAnalyticsKeyValueDomain;
    HKFeatureStatusManager * _deviationDetectionFeatureStatusManager;
    HDKeyValueDomain * _fertileWindowNotificationKeyValueDomain;
    HKFeatureStatusManager * _heartRateFeatureStatusManager;
    HDKeyValueDomain * _keyValueDomain;
    HDProfile * _profile;
    HKSPSleepStore * _sleepStore;
    HKFeatureStatusManager * _wristTemperatureInputFeatureStatusManager;
}

+ (id)_countDeviationSamplesInPastYearOfType:(long long)arg1 profile:(id)arg2 calendar:(id)arg3 error:(id*)arg4;
+ (id)_getDeviationDetectedCountForDeviationType:(long long)arg1 gregorianCalendar:(id)arg2 domain:(id)arg3 error:(id*)arg4;
+ (id)_hasConfirmedDeviationInPastMonthOfType:(long long)arg1 profile:(id)arg2 calendar:(id)arg3 error:(id*)arg4;
+ (id)_setCycleFactorReminderFieldsInMetric:(id)arg1 appProtectedKeyValueDomain:(id)arg2 error:(id*)arg3;
+ (id)_setDetectedDeviationFieldsInMetric:(id)arg1 gregorianCalendar:(id)arg2 deviationDetectionAnalyticsKeyValueDomain:(id)arg3 todayDayIndex:(long long)arg4 error:(id*)arg5;
+ (id)_setDeviationSampleFieldsInMetric:(id)arg1 profile:(id)arg2 userCalendar:(id)arg3 error:(id*)arg4;
+ (bool)shouldSubmit;

- (void).cxx_destruct;
- (bool)_collectDiagnosticFieldsForMetric:(id)arg1 settingsManager:(id)arg2 heartRateInputFeatureStatus:(id)arg3 deviationDetectionFeatureStatus:(id)arg4 wristTemperatureInputFeatureStatus:(id)arg5 gregorianCalendar:(id)arg6 error:(id*)arg7;
- (bool)_collectSensitiveFieldsForMetric:(id)arg1 settingsManager:(id)arg2 menstrualCyclesSettings:(id)arg3 heartRateInputFeatureStatus:(id)arg4 deviationDetectionSettings:(id)arg5 wristTemperatureInputFeatureStatus:(id)arg6 gregorianCalendar:(id)arg7 error:(id*)arg8;
- (long long)_daysWithSleepSamples:(id)arg1 calendar:(id)arg2;
- (id)_daysWithWristTemperatureSamplesInDayIndexRange:(struct { long long x1; long long x2; })arg1 calendarCache:(id)arg2 error:(id*)arg3;
- (id)_eligibleCyclesStartPastDayIndex:(long long)arg1;
- (id)_predicateForFirstPartySleepDataFromPast48HoursWithCalendar:(id)arg1;
- (id)_predicateForSleepDataFromPast45DaysWithCalendar:(id)arg1;
- (id)_predicateForSleepDataFromPast48HoursWithCalendar:(id)arg1;
- (id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
- (id)_yearsBetweenStartDateComponents:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
- (id)initWithProfile:(id)arg1 analysis:(id)arg2 heartRateFeatureAvailabilityManager:(id)arg3 deviationDetectionFeatureAvailabilityManager:(id)arg4 wristTemperatureInputFeatureAvailabilityManager:(id)arg5;
- (bool)submitMetricWithError:(id*)arg1;

@end
