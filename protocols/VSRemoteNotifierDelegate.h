
@protocol VSRemoteNotifierDelegate <NSObject>

@optional

- (void)remoteNotifier:(VSRemoteNotifier *)arg1 didReceiveRemoteNotificationWithUserInfo:(NSDictionary *)arg2;

@end
