
@protocol BSTransactionObserver <NSObject>

@optional

- (void)transactionDidBegin:(BSTransaction *)arg1;
- (void)transactionDidComplete:(BSTransaction *)arg1;
- (void)transactionDidFinishWork:(BSTransaction *)arg1;
- (void)transactionWillBegin:(BSTransaction *)arg1;

@end
