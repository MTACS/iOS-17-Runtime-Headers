
@protocol FBSynchronizedTransactionDelegate <NSObject>

@required

- (void)synchronizedTransaction:(BSTransaction<FBSynchronizedTransaction> *)arg1 didCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransaction:(BSTransaction<FBSynchronizedTransaction> *)arg1 willCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransactionReadyToCommit:(BSTransaction<FBSynchronizedTransaction> *)arg1;

@end
