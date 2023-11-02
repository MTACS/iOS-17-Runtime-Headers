
@interface SeymourServices.EngagementNotificationCoordinator : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _migrationEnabled;
    void accountDeviceObserver;
    void accountProvider;
    void appLauncher;
    void contentAvailabilityObserver;
    void engagementNotificationCenter;
    void eventHub;
    void notificationSettingsProvider;
    void platform;
    void privacyPreferenceDataSource;
    void state;
    void subscriptionToken;
}

- (void).cxx_destruct;
- (id)init;

@end
