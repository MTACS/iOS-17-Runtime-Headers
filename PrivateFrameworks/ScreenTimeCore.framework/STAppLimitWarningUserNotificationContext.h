
@interface STAppLimitWarningUserNotificationContext : STUserNotificationContext

+ (bool)supportsSecureCoding;

- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setLimitDisplayName:(id)arg1 timeLeft:(double)arg2;

@end
