
@protocol CSPhoneCallStateMonitorDelegate <NSObject>

@required

- (void)CSPhoneCallStateMonitor:(CSPhoneCallStateMonitor *)arg1 didRecievePhoneCallStateChange:(unsigned long long)arg2;

@end
