
@interface HDAudioAnalyticsUtilities : NSObject

+ (id)_quantityTypeForExposureType:(long long)arg1;
+ (id)audioAverageAndDurationForExposureType:(long long)arg1 profile:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5;
+ (id)audioExposureEventsForExposureType:(long long)arg1 profile:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5;
+ (id)boundedIntegerForDose:(double)arg1;
+ (id)boundedIntegerForEventDuration:(double)arg1;
+ (id)boundedIntegerForExposureDuration:(double)arg1;
+ (id)boundedIntegerForLEQ:(double)arg1;
+ (id)boundedIntegerForLockedDuration:(double)arg1;
+ (id)boundedIntegerForSoundReductionLEQ:(double)arg1;
+ (id)boundedIntegerForSyncDelayDuration:(double)arg1;
+ (id)boundedIntegerForTimeSinceLastNotification:(double)arg1;
+ (id)boundedIntegerForValue:(double)arg1 orderedBuckets:(id)arg2 sentinel:(id)arg3 transformer:(id /* block */)arg4;
+ (double)doseFromStatistics:(id)arg1 days:(long long)arg2;
+ (double)durationFromStatistics:(id)arg1;
+ (long long)exposureAlertCount:(id)arg1;
+ (id)fullDays:(long long)arg1 beforeDate:(id)arg2;
+ (id)latestAudioExposureEventForExposureType:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (double)leqFromStatistics:(id)arg1;
+ (id)localGregorianCalendar;
+ (id)rollingDays:(long long)arg1 beforeDate:(id)arg2;

@end
