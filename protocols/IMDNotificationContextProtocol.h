
@protocol IMDNotificationContextProtocol <NSObject>

@required

- (bool)canPopulateUserInfoForMessageBalloonBundleID:(NSString *)arg1;
- (NSArray *)notificationCategories;

@optional

- (void)populateUserInfoForNotificationContent:(UNMutableNotificationContent *)arg1 messageBalloonBundleID:(NSString *)arg2 payloadData:(NSData *)arg3;
- (void)populateUserInfoForNotificationContent:(UNMutableNotificationContent *)arg1 messageBalloonBundleID:(NSString *)arg2 payloadData:(NSData *)arg3 chatIdentifier:(NSString *)arg4 isUrgentMessageTrigger:(bool*)arg5 shouldSuppressNotification:(bool*)arg6;

@end
