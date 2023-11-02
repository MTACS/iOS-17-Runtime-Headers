
@protocol PFApplicationStateMonitorDelegate

@required

- (void)applicationStateMonitorEnteredBackground:(PFApplicationStateMonitor *)arg1;
- (void)applicationStateMonitorEnteredForeground:(PFApplicationStateMonitor *)arg1;
- (void)applicationStateMonitorExpiredBackgroundActivityTimeout:(PFApplicationStateMonitor *)arg1;

@end
