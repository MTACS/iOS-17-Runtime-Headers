
@protocol ACHCurrentActivitySummaryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverTodaySummary:(HKActivitySummary *)arg1 changedTodayFields:(unsigned long long)arg2 yesterdaySummary:(HKActivitySummary *)arg3 changedYesterdayFields:(unsigned long long)arg4 queryUUID:(NSUUID *)arg5;

@end
