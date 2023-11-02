
@protocol CSUserSessionActiveMonitorDelegate <NSObject>

@optional

- (void)userSessionActivateMonitor:(CSUserSessionActiveMonitor *)arg1 didReceivedUserSessionActiveHasChanged:(bool)arg2;

@end
