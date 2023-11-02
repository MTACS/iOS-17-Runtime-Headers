
@protocol CALNUserNotificationCenter <CalActivatable>

@required

- (bool)addNotificationRequest:(CALNNotificationRequest *)arg1 error:(id*)arg2;
- (void)collectSettingsStats:(NSMutableDictionary *)arg1;
- (<CALNUserNotificationCenterDelegate> *)delegate;
- (NSArray *)deliveredNotifications;
- (NSSet *)notificationCategories;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(NSArray *)arg1;
- (bool)replaceNotificationRequest:(CALNNotificationRequest *)arg1 error:(id*)arg2;
- (void)setDelegate:(id <CALNUserNotificationCenterDelegate>)arg1;
- (void)setNotificationCategories:(NSSet *)arg1;

@end
