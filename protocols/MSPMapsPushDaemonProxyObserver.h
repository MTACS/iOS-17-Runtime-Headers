
@protocol MSPMapsPushDaemonProxyObserver

@required

- (void)pushDaemonProxyReceivedNotificationData:(NSData *)arg1 forType:(NSString *)arg2 recordIdentifier:(NSString *)arg3;

@end
