
@protocol CALNUNUserNotificationCenterProtocol <NSObject>

@required

- (bool)addNotificationRequest:(UNNotificationRequest *)arg1 error:(id*)arg2;
- (<UNUserNotificationCenterDelegate> *)delegate;
- (NSArray *)deliveredNotifications;
- (NSSet *)notificationCategories;
- (UNNotificationSettings *)notificationSettings;
- (NSDictionary *)notificationSettingsForTopics;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(NSArray *)arg1;
- (bool)replaceContentForRequestWithIdentifier:(NSString *)arg1 replacementContent:(UNNotificationContent *)arg2 error:(id*)arg3;
- (void)setDelegate:(id <UNUserNotificationCenterDelegate>)arg1;
- (void)setNotificationCategories:(NSSet *)arg1;
- (void)setWantsNotificationResponsesDelivered;

@end
