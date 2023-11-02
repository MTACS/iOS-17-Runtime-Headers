
@protocol ACHAchievementStoreObserving <NSObject>

@required

- (void)achievementStore:(id <ACHAchievementStoring>)arg1 didAddAchievements:(NSSet *)arg2;
- (void)achievementStore:(id <ACHAchievementStoring>)arg1 didRemoveAchievements:(NSSet *)arg2;
- (void)achievementStore:(id <ACHAchievementStoring>)arg1 didUpdateAchievements:(NSSet *)arg2;

@optional

- (void)achievementStoreDidFinishInitialFetch:(id <ACHAchievementStoring>)arg1;

@end
