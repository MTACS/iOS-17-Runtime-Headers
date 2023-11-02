
@protocol UNNotificationSettingsCenterDelegate <NSObject>

@optional

- (void)userNotificationSettingsCenter:(UNNotificationSettingsCenter *)arg1 didUpdateNotificationSourceIdentifiers:(NSSet *)arg2;
- (void)userNotificationSettingsCenter:(UNNotificationSettingsCenter *)arg1 didUpdateNotificationSystemSettings:(UNNotificationSystemSettings *)arg2;

@end
