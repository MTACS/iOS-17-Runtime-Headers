
@interface ACHAchievementProgressEngine : NSObject {
    <ACHAchievementStoring> * _achievementStore;
    NSNumber * _overrideDelay;
    NSMapTable * _providerDelayedOperations;
    NSObject<OS_dispatch_queue> * _providerQueue;
    NSHashTable * _providers;
}

@property (nonatomic) <ACHAchievementStoring> *achievementStore;
@property (nonatomic, retain) NSNumber *overrideDelay;
@property (nonatomic, retain) NSMapTable *providerDelayedOperations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *providerQueue;
@property (nonatomic, retain) NSHashTable *providers;

- (void).cxx_destruct;
- (id)_queue_providerForTemplate:(id)arg1;
- (id)achievementStore;
- (void)deregisterProgressProvider:(id)arg1;
- (id)init;
- (id)overrideDelay;
- (void)populateProgressAndGoalForAchievements:(id)arg1;
- (void)processAchievementProgressUpdates:(id)arg1;
- (unsigned long long)providerCount;
- (id)providerDelayedOperations;
- (id)providerQueue;
- (id)providerWithIdentifier:(id)arg1;
- (id)providers;
- (void)registerProgressProvider:(id)arg1;
- (void)requestProgressUpdateForProgressProvider:(id)arg1;
- (void)setAchievementStore:(id)arg1;
- (void)setOverrideDelay:(id)arg1;
- (void)setProviderDelayedOperations:(id)arg1;
- (void)setProviderQueue:(id)arg1;
- (void)setProviders:(id)arg1;
- (bool)shouldPopulateProgressForAchievement:(id)arg1;

@end
