
@interface ASCompanionBulletinPostingManager : NSObject <ASActivitySharingManagerReadyObserver, ASBulletinPostingManager, UNUserNotificationCenterDelegate> {
    <ASBulletinPostingManagerDelegate> * _delegate;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASBulletinPostingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_achievementForAchievementData:(id)arg1;
- (id)_activityDataNotificationCategories;
- (id)_activitySharingAchievementForAchievementData:(id)arg1;
- (id)_activitySharingWorkoutForWorkoutData:(id)arg1;
- (id)_activitySnapshotForSnapshotData:(id)arg1;
- (void)_handleActivityDataNotificationResponse:(id)arg1;
- (bool)_isPostingAllowed;
- (id)_notificationRequestForCodableBulletin:(id)arg1;
- (id)_subtitleBodyPairForAchievementCodableBulletin:(id)arg1;
- (id)_subtitleBodyPairForCodableBulletin:(id)arg1;
- (id)_subtitleBodyPairForWorkoutCodableBulletin:(id)arg1;
- (void)_withdrawNotificationRequestsWithIdentifiers:(id)arg1;
- (void)activitySharingManagerReady:(id)arg1;
- (id)delegate;
- (void)enqueueBulletins:(id)arg1 withPostingSyle:(long long)arg2;
- (void)handleNotificationResponse:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)postFakeBulletins:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (void)registerNotificationCategories:(id)arg1;
- (void)removeCompetitionNotificationsForFriendUUID:(id)arg1;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldUseSpecializedStringForWorkout:(id)arg1;
- (id)topicIdentifiers;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
