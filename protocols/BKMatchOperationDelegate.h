
@protocol BKMatchOperationDelegate <BKOperationDelegate>

@optional

- (void)matchOperation:(BKMatchOperation *)arg1 failedWithReason:(long long)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 matchedWithResult:(BKMatchResultInfo *)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 presenceDetectedInLockout:(long long)arg2;

@end
