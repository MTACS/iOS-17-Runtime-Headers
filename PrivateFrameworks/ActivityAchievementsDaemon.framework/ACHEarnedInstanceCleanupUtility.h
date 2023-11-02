
@interface ACHEarnedInstanceCleanupUtility : NSObject {
    ACHEarnedInstanceStore * _earnedInstanceStore;
    HKHealthStore * _healthStore;
    ACHAwardsKeyValueClient * _keyValueClient;
    HDProfile * _profile;
}

@property (nonatomic, retain) ACHEarnedInstanceStore *earnedInstanceStore;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) ACHAwardsKeyValueClient *keyValueClient;
@property (nonatomic, retain) HDProfile *profile;

- (void).cxx_destruct;
- (long long)_client_historicalEvaluationAdjustment;
- (long long)_daemon_historicalEvaluationAdjustment;
- (id)_fastestRunAchievementsToRemoveFromEarnedInstances:(id)arg1;
- (id)_firstWorkoutAchievementsToRemoveFromEarnedInstances:(id)arg1;
- (long long)_historicalEvaluationAdjustment;
- (id)_largestValueActivityAndWorkoutAchievementsToRemoveFromEarnedInstances:(id)arg1;
- (id)_lifetimeMoveGoalAchievementsToRemoveFromEarnedInstances:(id)arg1;
- (id)earnedInstanceStore;
- (id)healthStore;
- (id)initWithEarnedInstanceStore:(id)arg1 profile:(id)arg2;
- (id)initWithHealthStore:(id)arg1 keyValueClient:(id)arg2 earnedInstanceStore:(id)arg3;
- (id)keyValueClient;
- (void)performCleanup;
- (id)profile;
- (void)setEarnedInstanceStore:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setKeyValueClient:(id)arg1;
- (void)setProfile:(id)arg1;

@end
