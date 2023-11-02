
@interface HealthMobilityUI.WalkingSteadinessOnboardingModel : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerObserver> {
    void cancellationToken;
    void changedDetailItems;
    void detailsProvider;
    void featureStatusManager;
    void notificationPermissionManager;
    void notificationsEnabled;
    void onboardingFlowManager;
    void queue;
    void queue_mostRecentNotificationStatus;
    void shouldFavoriteByDefault;
}

- (void).cxx_destruct;
- (void)featureStatusManager:(id)arg1 didUpdateNotificationStatus:(id)arg2;
- (id)init;

@end
