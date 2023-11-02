
@protocol AXPhoenixDisplayStatusMonitorObserver <AXPhoenixEventMonitorObserver>

@required

- (void)phoenixDisplayStatusMonitor:(AXPhoenixDisplayStatusMonitor *)arg1 didReceiveDisplayStateChanged:(bool)arg2 timestamp:(double)arg3;

@end
