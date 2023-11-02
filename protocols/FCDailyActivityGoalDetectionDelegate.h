
@protocol FCDailyActivityGoalDetectionDelegate <NSObject>

@required

- (void)concludeGoalDetectionRun;
- (bool)runDailyGoalCompletionDetectionForGoalType:(void *)arg1 activitySummaryIndex:(void *)arg2 previousValue:(void *)arg3 currentValue:(void *)arg4 goalValue:(void *)arg5 shouldAlert:(void *)arg6 goalMetHandler:(void *)arg7; // needs 7 arg types, found 13: long long, long long, double, double, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, double, double, void*

@end
