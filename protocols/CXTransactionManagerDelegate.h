
@protocol CXTransactionManagerDelegate <NSObject>

@required

- (void)transactionManager:(CXTransactionManager *)arg1 actionTimedOut:(CXAction *)arg2 forCallSource:(CXCallSource *)arg3;
- (void)transactionManager:(CXTransactionManager *)arg1 transactionGroupCompleted:(CXTransactionGroup *)arg2;

@end
