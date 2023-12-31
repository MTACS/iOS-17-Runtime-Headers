
@protocol FBSynchronizedTransaction <NSObject>

@required

- (bool)isReadyForSynchronizedCommit;
- (void)performSynchronizedCommit;
- (void)setSynchronizationDelegate:(id <FBSynchronizedTransactionDelegate>)arg1;
- (<FBSynchronizedTransactionDelegate> *)synchronizationDelegate;

@end
