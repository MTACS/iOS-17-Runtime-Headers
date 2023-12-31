
@protocol HDCurrentActivitySummaryHelperObserver <NSObject>

@required

- (void)currentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 didUpdateTodayActivitySummary:(HKActivitySummary *)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 didUpdateYesterdayActivitySummary:(HKActivitySummary *)arg2 changedFields:(unsigned long long)arg3;

@end
