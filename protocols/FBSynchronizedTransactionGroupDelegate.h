
@protocol FBSynchronizedTransactionGroupDelegate <FBSynchronizedTransactionDelegate>

@optional

- (bool)synchronizedTransactionGroup:(FBSynchronizedTransactionGroup *)arg1 shouldFailForSynchronizedTransaction:(BSTransaction<FBSynchronizedTransaction> *)arg2;

@end
