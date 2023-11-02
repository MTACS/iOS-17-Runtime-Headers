
@interface TPSUserNotificationController : TPSLocalNotificationController {
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isNotificationSettingValid;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)sendNotificationWithIdentifier:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 content:(id)arg4;
- (void)sendNotificationWithIdentifier:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 title:(id)arg4 text:(id)arg5 attachmentURL:(id)arg6 extensionPayload:(id)arg7;
- (void)setUserNotificationCenter:(id)arg1;
- (id)userNotificationCenter;

@end
