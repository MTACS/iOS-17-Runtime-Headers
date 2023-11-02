
@protocol CAMPerformanceTestHarnessDelegate <NSObject>

@required

- (void)didFailTestHarness:(CAMPerformanceTestHarness *)arg1 withReason:(NSString *)arg2;
- (void)didStartSubtest:(CAMPerformanceTestHarness *)arg1 withName:(NSString *)arg2 withMetrics:(NSArray *)arg3;
- (void)didStopSubtest:(CAMPerformanceTestHarness *)arg1 withName:(NSString *)arg2;
- (void)willEndTestHarness:(CAMPerformanceTestHarness *)arg1;
- (void)willStartTestHarness:(CAMPerformanceTestHarness *)arg1;

@end
