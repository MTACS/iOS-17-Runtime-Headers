
@protocol CSAlarmMonitorDelegate <NSObject>

@required

- (void)CSAlarmMonitor:(CSAlarmMonitor *)arg1 didReceiveAlarmChanged:(long long)arg2;

@end
