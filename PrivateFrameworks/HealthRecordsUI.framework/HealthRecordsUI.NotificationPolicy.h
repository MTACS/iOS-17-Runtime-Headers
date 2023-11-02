
@interface HealthRecordsUI.NotificationPolicy : NSObject <UNUserNotificationCenterDelegate, WDNotificationPolicy> {
    void cancellables;
    void healthStore;
    void notificationSyncStore;
    void shouldDismissNotificationsUrgently;
}

- (void).cxx_destruct;
- (id)init;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
