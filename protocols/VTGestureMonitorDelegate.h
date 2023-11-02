
@protocol VTGestureMonitorDelegate <NSObject>

@required

- (void)gestureMonitorDidReceiveSleepGesture:(VTGestureMonitor *)arg1;
- (void)gestureMonitorDidReceiveWakeGesture:(VTGestureMonitor *)arg1;

@end
