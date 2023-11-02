
@protocol UNUserNotificationSettingsClientProtocol <NSObject>

@optional

- (void)updateNotificationSourcesWithBundleIdentifiers:(NSSet *)arg1;
- (void)updateNotificationSystemSettings:(UNNotificationSystemSettings *)arg1;

@end
