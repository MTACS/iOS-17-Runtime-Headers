
@protocol BRNotificationReceiverDelegate <NSObject>

@required

- (void)notificationReceiverDidReceiveNotifications:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidFinishGathering:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidInvalidate:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(BRNotificationReceiver *)arg1;

@end
