
@protocol UNUserNotificationSettingsServiceConnectionObserver <NSObject>

@optional

- (void)settingsServiceConnection:(UNUserNotificationSettingsServiceConnection *)arg1 didUpdateNotificationSourcesWithIdentifiers:(NSSet *)arg2;
- (void)settingsServiceConnection:(UNUserNotificationSettingsServiceConnection *)arg1 didUpdateNotificationSystemSettings:(UNNotificationSystemSettings *)arg2;

@end
