
@interface IMExtensionNotificationManager : NSObject {
    NSMutableArray * _notificationsContext;
}

@property (nonatomic, retain) NSMutableArray *notificationsContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)canPopulateUserInfoForMessageBalloonBundleID:(id)arg1;
- (id)init;
- (id)notificationCategories;
- (id)notificationsContext;
- (void)populateUserInfoForNotificationContent:(id)arg1 messageBalloonBundleID:(id)arg2 payloadData:(id)arg3 chatIdentifier:(id)arg4 isUrgentMessageTrigger:(bool*)arg5 shouldSuppressNotification:(bool*)arg6;
- (void)setNotificationsContext:(id)arg1;
- (bool)shouldRetractedMessageForBalloonBundleID:(id)arg1;

@end
