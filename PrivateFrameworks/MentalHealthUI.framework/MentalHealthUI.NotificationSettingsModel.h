
@interface MentalHealthUI.NotificationSettingsModel : NSObject <HKMHSettingsManagerObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _areNotificationsDisabled;
    void notificationCancellable;
    void settingsManager;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;
- (void)updateNotificationAuthorizationStatus;

@end
