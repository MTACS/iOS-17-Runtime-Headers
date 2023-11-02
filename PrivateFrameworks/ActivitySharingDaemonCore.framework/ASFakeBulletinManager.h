
@interface ASFakeBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {
    ASActivityDataBulletinManager * _activityDataBulletinManager;
    <ASBulletinPostingManager> * _bulletinPostingManager;
    ASCompetitionBulletinManager * _competitionBulletinManager;
    ASFakingManager * _fakingManager;
    ASFriendInviteBulletinManager * _friendInviteBulletinManager;
    int  notifyAchievementToken;
    int  notifyBatchToken;
    int  notifyCompetitionAcceptToken;
    int  notifyCompetitionEndLoserToken;
    int  notifyCompetitionEndTieToken;
    int  notifyCompetitionEndWinnerToken;
    int  notifyCompetitionRequestToken;
    int  notifyCompetitionScoreCapCelebrationToken;
    int  notifyGoalCompletionDuringCompetitionToken;
    int  notifyGoalCompletionToken;
    int  notifyGuidedRunWorkoutToken;
    int  notifyGuidedWalkWorkoutToken;
    int  notifyInviteRequestToken;
    int  notifyInviteResponseToken;
    int  notifyOfFakeInviteNeedsSetupToken;
    int  notifyOfFakeSignInToken;
    int  notifyOfFakeUpgradeToken;
    int  notifyVideoWorkoutToken;
    int  notifyWorkoutToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fakeContact;
- (void)_showFakeAchievementNotification;
- (void)_showFakeBatchNotification;
- (void)_showFakeCompetitionAcceptedNotification;
- (void)_showFakeCompetitionEndedLoserNotification;
- (void)_showFakeCompetitionEndedTieNotification;
- (void)_showFakeCompetitionEndedWinnerNotification;
- (void)_showFakeCompetitionRequestNotification;
- (void)_showFakeCompetitionScoreCapCelebrationNotification;
- (void)_showFakeGoalCompletionDuringCompetitionNotification;
- (void)_showFakeGoalCompletionNotification;
- (void)_showFakeGuidedRunWorkoutNotification;
- (void)_showFakeGuidedWalkWorkoutNotification;
- (void)_showFakeInvitationRequest;
- (void)_showFakeInvitationResponse;
- (void)_showFakeInviteAttemptNeedsSetup;
- (void)_showFakeNeedToSignIn;
- (void)_showFakeNeedToUpgrade;
- (void)_showFakeVideoWorkoutNotification;
- (void)_showFakeWorkoutNotification;
- (void)_showFakeWorkoutNotificationWithWorkout:(id)arg1;
- (void)activitySharingManagerReady:(id)arg1;
- (void)dealloc;
- (void)deregisterBulletins;
- (void)registerBulletins;

@end
