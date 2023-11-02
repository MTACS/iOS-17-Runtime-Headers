
@protocol SWSystemSleepMonitorProviding <BSInvalidatable>

@required

- (void)allowPowerChange:(long long)arg1;
- (void)cancelPowerChange:(long long)arg1;
- (void)registerForSystemPowerOnQueue:(NSObject<OS_dispatch_queue> *)arg1 withDelegate:(id <SWSystemSleepMonitorProvidingDelegate>)arg2;

@end
