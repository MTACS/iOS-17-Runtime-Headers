
@protocol UNSNotificationSettingsServiceObserver <NSObject>

@optional

- (void)settingsService:(UNSNotificationSettingsService *)arg1 didUpdateNotificationSourcesForBundleIdentifiers:(NSSet *)arg2;
- (void)settingsService:(UNSNotificationSettingsService *)arg1 didUpdateNotificationSystemSettings:(UNNotificationSystemSettings *)arg2;

@end
