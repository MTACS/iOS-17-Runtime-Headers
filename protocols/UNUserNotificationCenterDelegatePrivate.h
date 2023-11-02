
@protocol UNUserNotificationCenterDelegatePrivate <UNUserNotificationCenterDelegate>

@optional

- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didChangeSettings:(UNNotificationSettings *)arg2;
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didOpenApplicationForResponse:(UNNotificationResponse *)arg2;

@end
