
@interface IMDSafetyMonitorNotificationContext : NSObject <IMDNotificationContextProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canPopulateUserInfoForMessageBalloonBundleID:(id)arg1;
- (id)notificationCategories;
- (void)populateUserInfoForNotificationContent:(id)arg1 messageBalloonBundleID:(id)arg2 payloadData:(id)arg3 chatIdentifier:(id)arg4 isUrgentMessageTrigger:(bool*)arg5 shouldSuppressNotification:(bool*)arg6;

@end
