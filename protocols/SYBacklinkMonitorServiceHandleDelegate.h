
@protocol SYBacklinkMonitorServiceHandleDelegate

@required

- (void)handleDidDisconnect:(SYBacklinkMonitorServiceHandle *)arg1;
- (void)scheduleOperationForHandle:(SYBacklinkMonitorServiceHandle *)arg1 withUserActivity:(SYUserActivityIdentifierInfo *)arg2 context:(SYActivityObserverContext *)arg3;

@end
