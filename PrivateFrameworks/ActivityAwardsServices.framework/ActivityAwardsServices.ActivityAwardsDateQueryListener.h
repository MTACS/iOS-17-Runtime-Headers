
@interface ActivityAwardsServices.ActivityAwardsDateQueryListener : NSObject <ACHAchievementStoreObserving> {
    void achievementStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateComponents;
    void endpoint;
    void lastAchievementsForDate;
}

- (void).cxx_destruct;
- (void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
- (void)achievementStoreDidFinishInitialFetch:(id)arg1;
- (id)init;

@end
