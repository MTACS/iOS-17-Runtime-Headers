
@protocol CRKStudentDaemonProxyObserver <NSObject>

@optional

- (void)daemonProxy:(CRKStudentDaemonProxy *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)daemonProxyDidConnect:(CRKStudentDaemonProxy *)arg1;
- (void)daemonProxyDidDisconnect:(CRKStudentDaemonProxy *)arg1;

@end
