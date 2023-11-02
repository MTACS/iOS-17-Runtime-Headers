
@protocol PKUserNotificationServerRemoteNotificationXPCClient <NSObject>

@required

- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;

@end
