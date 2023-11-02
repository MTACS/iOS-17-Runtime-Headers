
@protocol UNSNotificationRepositorySettingsProvider

@required

- (UNNotificationSettings *)notificationSettingsForBundleIdentifier:(NSString *)arg1;
- (NSDictionary *)notificationSettingsForTopicsWithBundleIdentifier:(NSString *)arg1;

@end
