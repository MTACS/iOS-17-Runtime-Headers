
@protocol CALNNotificationSource <CALNNotificationResponseDelegate>

@required

- (NSArray *)categories;
- (CALNNotificationContent *)contentForNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (void)refreshNotifications:(NSSet *)arg1;
- (NSString *)sourceIdentifier;

@optional

- (void)willPostNotification:(CALNNotificationRecord *)arg1;

@end
