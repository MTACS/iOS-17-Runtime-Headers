
@protocol UNUserNotificationServiceConnectionObserver <NSObject>

@optional

- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;

@end
