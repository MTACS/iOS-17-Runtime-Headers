
@interface HKMCNotificationSentAnalytics : NSObject

+ (bool)_isAllowed;
+ (bool)_isMetricEnabled;
+ (bool)shouldSubmit;
+ (void)submitMetricForCategory:(id)arg1 areHealthNotificationsAuthorized:(bool)arg2 internalLiveOnCycleFactorOverrideEnabled:(bool)arg3;
+ (void)submitMetricForCategory:(id)arg1 areHealthNotificationsAuthorized:(bool)arg2 numberOfDaysShiftedForFertileWindow:(id)arg3 numberOfDaysOffsetFromFertileWindowEnd:(id)arg4 numberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification:(id)arg5 internalLiveOnCycleFactorOverrideEnabled:(bool)arg6;

@end
