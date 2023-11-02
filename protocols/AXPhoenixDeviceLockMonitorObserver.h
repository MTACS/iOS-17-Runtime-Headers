
@protocol AXPhoenixDeviceLockMonitorObserver <AXPhoenixEventMonitorObserver>

@required

- (void)phoenixDeviceLockMonitor:(AXPhoenixDeviceLockMonitor *)arg1 didReceiveDeviceLockStateChanged:(bool)arg2 timestamp:(double)arg3;

@end
