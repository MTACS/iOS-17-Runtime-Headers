
@protocol COTimerManagerConnectionProvider <NSObject>

@required

- (NSXPCConnection *)timerManagerServiceConnection;

@end
