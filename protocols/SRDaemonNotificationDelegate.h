
@protocol SRDaemonNotificationDelegate <NSObject>

@required

- (void)daemonNotificationDaemonDidStart:(SRDaemonNotification *)arg1;

@optional

- (void)daemonNotificationDaemonDidChangeTimeSignificantly:(SRDaemonNotification *)arg1;
- (void)daemonNotificationDaemonDidResetDatastore:(SRDaemonNotification *)arg1;

@end
