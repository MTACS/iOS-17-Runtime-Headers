
@interface HFUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate> {
    NAFuture * _notificationSettingsFuture;
    NSHashTable * _observers;
    <HFUserNotificationPresentationHandling> * _presentationHandler;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *notificationSettingsFuture;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) <HFUserNotificationPresentationHandling> *presentationHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)notificationSettings;
- (id)notificationSettingsFuture;
- (id)observers;
- (id)presentationHandler;
- (void)removeObserver:(id)arg1;
- (void)setNotificationSettingsFuture:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPresentationHandler:(id)arg1;
- (void)setUserNotificationCenter:(id)arg1;
- (id)userNotificationCenter;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
