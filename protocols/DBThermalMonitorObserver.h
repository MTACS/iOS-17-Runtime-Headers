
@protocol DBThermalMonitorObserver <NSObject>

@required

- (void)thermalMonitorLevelDidChange:(DBThermalMonitor *)arg1;

@end
