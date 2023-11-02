
@interface WLKNotificationsImpl_iOS : NSObject <UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, WLKNotificationsImpl> {
    bool  _topicsAreInitialized;
    <WLKNotificationCenterDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WLKNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool topicsAreInitialized;

+ (id)_JSONDictForResponse:(id)arg1;
+ (unsigned long long)_interruptionLevelForNumber:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_authOptions;
- (id)_displayNameForSubsectionID:(id)arg1;
- (void)_fetchTopics:(id /* block */)arg1;
- (void)_initializeTopics;
- (void)_networkReachabilityDidChangeNotification:(id)arg1;
- (id)_notificationCenter;
- (void)_storeFrontChangedNotification:(id)arg1;
- (id)_topicIdentifierForCategory:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)getNotificationSettings:(id /* block */)arg1;
- (id)init;
- (bool)isCategoryBadgeSettingEnabledByUser:(long long)arg1;
- (bool)isCategoryEnabledByUser:(long long)arg1;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTopicsAreInitialized:(bool)arg1;
- (bool)topicsAreInitialized;
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didOpenApplicationForResponse:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
