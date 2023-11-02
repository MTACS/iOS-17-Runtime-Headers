
@interface ASFakingManager : NSObject <ASActivitySharingManagerReadyObserver> {
    ACHAchievementStore * _achievementStore;
    ASActivityDataManager * _activityDataManager;
    ASCloudKitManager * _cloudKitManager;
    ASCompetitionManager * _competitionManager;
    ASContactsManager * _contactsManager;
    ASDatabaseClient * _databaseClient;
}

@property (nonatomic) ASActivityDataManager *activityDataManager;
@property (nonatomic) ASCloudKitManager *cloudKitManager;
@property (nonatomic) ASCompetitionManager *competitionManager;
@property (nonatomic) ASContactsManager *contactsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ACHAchievement *fakeAchievement;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *fakeCompleteSnapshot;
@property (nonatomic, readonly) ASFriend *fakeFriend;
@property (nonatomic, readonly) _HKFitnessFriendAchievement *fakeFriendAchievement;
@property (nonatomic, readonly) _HKFitnessFriendWorkout *fakeGuidedRunWorkout;
@property (nonatomic, readonly) _HKFitnessFriendWorkout *fakeGuidedWalkWorkout;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *fakeSnapshot;
@property (nonatomic, readonly) _HKFitnessFriendWorkout *fakeVideoWorkout;
@property (nonatomic, readonly) _HKFitnessFriendWorkout *fakeWorkout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactWithFakeCompetitionStatus:(long long)arg1;
- (id)_fakeCompetitionHistory;
- (id)_fakeCompetitionWithStartDate:(id)arg1 opponentScores:(id)arg2 scores:(id)arg3;
- (id)_fakeSnapshotWithCompleteRings:(bool)arg1;
- (id)activityDataManager;
- (void)activitySharingManagerReady:(id)arg1;
- (id)cloudKitManager;
- (id)competitionManager;
- (id)contactsManager;
- (id)fakeAchievement;
- (id)fakeCompetitionWithStartDate:(id)arg1 winningParticipant:(long long)arg2;
- (id)fakeCompleteSnapshot;
- (id)fakeFriend;
- (id)fakeFriendAchievement;
- (id)fakeFriendWithCompetitionStatus:(long long)arg1 competition:(id)arg2;
- (id)fakeGuidedRunWorkout;
- (id)fakeGuidedWalkWorkout;
- (id)fakeSnapshot;
- (id)fakeTiedCompetitionWithStartDate:(id)arg1;
- (id)fakeVideoWorkout;
- (id)fakeWorkout;
- (id)fakeWorkoutWithSeymourCatalogWorkoutIdentifier:(id)arg1 seymourMediaType:(id)arg2;
- (id)initWithDatabaseClient:(id)arg1;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(id /* block */)arg1;
- (void)setActivityDataManager:(id)arg1;
- (void)setCloudKitManager:(id)arg1;
- (void)setCompetitionManager:(id)arg1;
- (void)setContactsManager:(id)arg1;

@end
