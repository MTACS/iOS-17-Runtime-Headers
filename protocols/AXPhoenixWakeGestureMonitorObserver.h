
@protocol AXPhoenixWakeGestureMonitorObserver <AXPhoenixEventMonitorObserver>

@required

- (void)gestureMonitorDidReceiveSleepGesture:(AXPhoenixWakeGestureMonitor *)arg1 timestamp:(double)arg2;
- (void)gestureMonitorDidReceiveWakeGesture:(AXPhoenixWakeGestureMonitor *)arg1 timestamp:(double)arg2;

@end
