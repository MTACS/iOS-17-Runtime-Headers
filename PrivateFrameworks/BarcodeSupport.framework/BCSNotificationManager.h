
@interface BCSNotificationManager : NSObject <UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter * _nfcUserNotificationCenter;
    NSMutableSet * _notifications;
    UNUserNotificationCenter * _qrCodeUserNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addRequestForNotification:(id)arg1 codeType:(long long)arg2;
- (void)_configureUserNotificationCenter;
- (id)_notificationWithIdentifier:(id)arg1;
- (id)_userNotificationCenterForCodeType:(long long)arg1;
- (void)didReceiveNotificationResponse:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)scheduleNotification:(id)arg1 codeType:(long long)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)withdrawNotificationsWithProcessID:(int)arg1 codeType:(long long)arg2;

@end
