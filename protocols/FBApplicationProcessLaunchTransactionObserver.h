
@protocol FBApplicationProcessLaunchTransactionObserver <BSTransactionObserver>

@optional

- (void)transaction:(FBApplicationProcessLaunchTransaction *)arg1 didLaunchProcess:(FBApplicationProcess *)arg2;
- (void)transaction:(FBApplicationProcessLaunchTransaction *)arg1 willLaunchProcess:(FBApplicationProcess *)arg2;

@end
