
@interface CRKConcreteOSTransactionPrimitives : NSObject <CRKOSTransactionPrimitives>

@property (nonatomic, readonly) long long transactionCount;

- (void)decrementCount;
- (void)incrementCount;
- (long long)transactionCount;
- (id)transactionWithReverseDNSReason:(id)arg1;

@end
