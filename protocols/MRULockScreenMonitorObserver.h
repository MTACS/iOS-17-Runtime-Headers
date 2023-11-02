
@protocol MRULockScreenMonitorObserver <NSObject>

@required

- (void)lockscreenMonitor:(MRULockScreenMonitor *)arg1 didUpdateDeviceLocked:(bool)arg2;

@end
