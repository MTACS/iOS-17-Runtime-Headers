
@protocol RBProcessMonitorObserving <NSObject, RBStateCapturing>

@required

- (void)didObserveProcessExit:(RBProcess *)arg1;
- (void)didResolvePreventLaunchPredicates:(NSSet *)arg1;
- (void)processMonitor:(id <RBProcessMonitoring>)arg1 didChangeProcessStates:(NSArray *)arg2;

@end
