
@protocol SBAmbientMotionDetectionWakeAttributeMonitorObserver <NSObject>

@required

- (void)motionDetectionWakeAttributeMonitor:(SBAmbientMotionDetectionWakeAttributeMonitor *)arg1 didUpdateShouldEnableMotionDetectionWake:(bool)arg2;

@end
