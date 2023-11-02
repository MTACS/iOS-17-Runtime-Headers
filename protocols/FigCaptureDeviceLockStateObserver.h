
@protocol FigCaptureDeviceLockStateObserver <NSObject>

@required

- (void)deviceLockStateMonitor:(FigCaptureDeviceLockStateMonitor *)arg1 didUpdateDeviceLockState:(bool)arg2;

@end
