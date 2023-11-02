
@interface TPSLocalNotificationController : NSObject

@property (getter=isNotificationSettingValid, nonatomic, readonly) bool notificationSettingValid;

- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isNotificationSettingValid;
- (void)notificationCompletedForIdentifier:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 error:(id)arg4;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)sendNotificationWithIdentifier:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 title:(id)arg4 text:(id)arg5 attachmentURL:(id)arg6 extensionPayload:(id)arg7;
- (void)showNotificationForNotificationCache:(id)arg1 attachmentURL:(id)arg2;

@end
