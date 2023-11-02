
@protocol COAlarmManagerConnectionProvider <NSObject>

@required

- (NSXPCConnection *)alarmManagerServiceConnection;

@end
