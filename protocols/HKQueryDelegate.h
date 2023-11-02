
@protocol HKQueryDelegate <NSObject>

@required

- (void)closeTransactionForTypes:(NSSet *)arg1 anchor:(NSNumber *)arg2 ackTime:(NSNumber *)arg3 query:(HKQuery *)arg4;
- (void)queryDidFinishExecuting:(HKQuery *)arg1;

@end
