
@protocol CAMExternalStorageMonitorDelegate <NSObject>

@required

- (void)externalStorageMonitor:(CAMExternalStorageMonitor *)arg1 didChangeConnectedStorageDevices:(NSArray *)arg2;

@end
