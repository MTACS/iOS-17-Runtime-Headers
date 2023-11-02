
@protocol HDApplicationStateMonitorProvider <NSObject>

@required

- (BKSApplicationStateMonitor *)createApplicationStateMonitor;
- (BKSApplicationStateMonitor *)createApplicationStateMonitorWithBundleIDs:(NSArray *)arg1 states:(unsigned int)arg2 elevatedPriority:(bool)arg3;
- (HDRBSProcessStateProvider *)createRBSProcessStateProvider;

@end
