
@interface HKMedicationLoggingAnalytics : NSObject

+ (bool)_isAllowed;
+ (bool)_isMetricEnabled;
+ (bool)shouldSubmit;
+ (void)submitLogMetricWith:(long long)arg1 provenance:(long long)arg2 context:(long long)arg3 loggingMultipleMeds:(bool)arg4 hoursAgoLoggedForMax:(id)arg5 hoursAgoLoggedForMin:(id)arg6 hoursFromScheduledTimeLoggedMax:(id)arg7 hoursFromScheduledTimeLoggedMin:(id)arg8 hoursFromScheduledToTakenOrSkippedMax:(id)arg9 hoursFromScheduledToTakenOrSkippedMin:(id)arg10 isPartiallyLoggingScheduledMeds:(id)arg11 dataSource:(id)arg12;

@end
