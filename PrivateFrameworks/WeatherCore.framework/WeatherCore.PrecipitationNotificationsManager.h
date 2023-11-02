
@interface WeatherCore.PrecipitationNotificationsManager : NSObject {
    void lazyNotificationAccuracyTracker;
    void lazyNotificationsEnablementTracker;
    void locationManager;
    void notificationAuthorizationStatusProvider;
    void notificationConfigurationProvider;
    void notificationContentFactory;
    void notificationDeliveryScheduler;
    void notificationFetchScheduler;
    void notificationSubscriptionManager;
    void observingCurrentLocation;
    void operationQueue;
    void policyHandler;
    void scheduleDeduper;
    void weatherDataService;
}

- (void).cxx_destruct;
- (id)init;

@end
