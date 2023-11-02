
@protocol MGRemoteQueryServerTransactionDelegate <NSObject>

@required

- (void)transaction:(MGRemoteQueryServerTransaction *)arg1 receivedTimeoutInterval:(unsigned long long)arg2;
- (void)transactionActivityOccurred:(MGRemoteQueryServerTransaction *)arg1;
- (void)transactionInvalidated:(MGRemoteQueryServerTransaction *)arg1;

@end
