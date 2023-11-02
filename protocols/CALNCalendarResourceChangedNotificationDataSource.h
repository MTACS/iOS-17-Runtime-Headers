
@protocol CALNCalendarResourceChangedNotificationDataSource <NSObject>

@required

- (void)clearCalendarResourceChangedNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchCalendarResourceChangedNotificationSourceClientIdentifiers:(NSSet *)arg1;
- (CALNCalendarResourceChangedNotificationInfo *)fetchCalendarResourceChangedNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchCalendarResourceChangedNotifications;

@end
