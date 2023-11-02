
@protocol ASActivityDataManagerObserver <NSObject>

@required

- (void)activityDataManager:(ASActivityDataManager *)arg1 didUpdateTodaySummary:(HKActivitySummary *)arg2 yesterdaySummary:(HKActivitySummary *)arg3;

@end
