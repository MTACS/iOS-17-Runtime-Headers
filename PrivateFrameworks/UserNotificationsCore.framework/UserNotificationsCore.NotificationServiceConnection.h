
@interface UserNotificationsCore.NotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol> {
    void clientAuditToken;
    void clientBundleIdentifier;
    void clientConnection;
    void delegate;
    void queue;
    void queue_serverConnection;
}

- (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getClearedInfoForDataProviderMigrationWithBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setBadgeCount:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setObservingUserNotifications:(bool)arg1 forBundleIdentifier:(id)arg2;

@end
