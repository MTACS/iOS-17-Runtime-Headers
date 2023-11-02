
@interface MTUserNotificationAppDelegate : NSObject <UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter * _notificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)notificationCenter;
- (void)setNotificationCenter:(id)arg1;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
