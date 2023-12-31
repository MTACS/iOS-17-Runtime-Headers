
@protocol AVTPushNotificationsSupport

@required

- (<AVTPushNotificationsSupportDelegate> *)delegate;
- (void)setDelegate:(id <AVTPushNotificationsSupportDelegate>)arg1;
- (void)startListeningToPushNotifications;
- (void)stopListeningToPushNotifications;

@end
