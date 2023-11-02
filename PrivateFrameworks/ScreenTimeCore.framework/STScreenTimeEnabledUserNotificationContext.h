
@interface STScreenTimeEnabledUserNotificationContext : STUserNotificationContext

+ (bool)supportsSecureCoding;

- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)notificationBundleIdentifier;

@end
