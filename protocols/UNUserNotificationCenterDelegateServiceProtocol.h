
@protocol UNUserNotificationCenterDelegateServiceProtocol <NSObject>

@required

- (void)didChangeSettings:(UNNotificationSettings *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didOpenApplicationForResponse:(UNNotificationResponse *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didReceiveNotificationResponse:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: UNNotificationResponse *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
