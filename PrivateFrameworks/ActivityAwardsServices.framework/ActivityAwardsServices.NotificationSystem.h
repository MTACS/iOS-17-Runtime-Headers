
@interface ActivityAwardsServices.NotificationSystem : NSObject <ACHAchievementStoreObserving> {
    void achievementStore;
    void bridgeSettings;
    void earnedKeyValueStore;
    void fitnessAppsStateObserver;
    void healthStore;
    void lock;
    void notificationPostingProvider;
    void notificationSuppresionProvider;
    void pendingAchievementsToNotify;
    void platform;
    void unearnedKeyValueStore;
}

- (void).cxx_destruct;
- (void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
- (void)achievementStoreDidFinishInitialFetch:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)notificationSuppressionChanged;

@end
