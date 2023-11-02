
@interface ActivityAwardsServices.ActivityAwardsQueryListener : NSObject <ACHAchievementStoreObserving> {
    void achievementStore;
    void endpoint;
}

- (void).cxx_destruct;
- (void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
- (void)achievementStoreDidFinishInitialFetch:(id)arg1;
- (id)init;

@end
