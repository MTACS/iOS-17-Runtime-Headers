
@interface HDSharedSummaryTransactionQueryServer : HDQueryServer <HDSharedSummaryManagerObserver>

+ (Class)queryClass;

- (void)_queue_didDeactivate;
- (void)_queue_start;
- (void)sharedSummaryManagerCommittedTransactionsDidChange:(id)arg1;

@end
