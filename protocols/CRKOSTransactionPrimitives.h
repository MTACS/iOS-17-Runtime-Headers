
@protocol CRKOSTransactionPrimitives

@required

- (long long)transactionCount;
- (<CRKCancelable> *)transactionWithReverseDNSReason:(NSString *)arg1;

@end
