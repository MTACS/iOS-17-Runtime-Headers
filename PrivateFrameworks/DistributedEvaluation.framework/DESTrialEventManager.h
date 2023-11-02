
@interface DESTrialEventManager : DESEventManager

+ (void)_sendTrialMetrics:(id)arg1 dimensions:(id)arg2 factorsState:(id)arg3;
+ (void)initialize;
+ (void)sendEventTaskCompletedForBundleID:(id)arg1 factorsState:(id)arg2 duration:(float)arg3 error:(id)arg4;
+ (void)sendEventTaskFetchedForBundleID:(id)arg1 factorsState:(id)arg2;
+ (void)sendEventTaskScheduledStatusForBundleID:(id)arg1 factorsState:(id)arg2 success:(bool)arg3;

@end
