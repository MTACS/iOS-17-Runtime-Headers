
@protocol _LTActivityLoggerDelegate <NSObject>

@required

- (NSDate *)activityLogger:(_LTActivityLogger *)arg1 lastLoggedDateForTask:(long long)arg2;
- (void)activityLogger:(_LTActivityLogger *)arg1 logAggregateUsageForInterval:(unsigned long long)arg2 date:(NSDate *)arg3;
- (void)activityLogger:(_LTActivityLogger *)arg1 logUsageForTask:(long long)arg2 interval:(unsigned long long)arg3 date:(NSDate *)arg4;
- (void)activityLogger:(_LTActivityLogger *)arg1 updateLastAggregateLogDate:(NSDate *)arg2;
- (void)activityLogger:(_LTActivityLogger *)arg1 updateLastLoggedDate:(NSDate *)arg2 forTask:(long long)arg3;
- (NSDate *)lastAggregateLogDateForActivityLogger:(_LTActivityLogger *)arg1;

@end
