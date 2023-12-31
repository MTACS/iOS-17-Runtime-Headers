
@protocol PKSpendingSummaryFetcherObserver <NSObject>

@optional

- (void)invalidatedSpendingSummariesOfType:(unsigned long long)arg1;
- (void)invalidatedSpendingSummaryOfType:(unsigned long long)arg1 startingWithDate:(NSDate *)arg2;
- (void)invalidatedSummariesAvailable;

@end
