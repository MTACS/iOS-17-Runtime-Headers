
@protocol BLSHInactiveBudgetPolicing <NSObject>

@required

- (void)resetBudgetForProcess:(RBSProcessIdentity *)arg1 reason:(NSString *)arg2;

@end
