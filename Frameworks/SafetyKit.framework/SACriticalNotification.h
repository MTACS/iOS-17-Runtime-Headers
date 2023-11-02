
@interface SACriticalNotification : NSObject <UNUserNotificationCenterDelegate> {
    SABundleManager * _bundleManager;
    UNUserNotificationCenter * _center;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createNotification;
- (id)initWithBundleManager:(id)arg1;
- (void)sendNotificationWithCompletionHandler:(id /* block */)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
