
@interface ASCompetitionBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {
    <ASBulletinPostingManager> * _bulletinPostingManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activitySharingManagerReady:(id)arg1;
- (void)showCompetitionAcceptedNotificationForFriend:(id)arg1 competition:(id)arg2 withPostingStyle:(long long)arg3;
- (void)showCompetitionEndedNotificationForFriend:(id)arg1 competition:(id)arg2 withPostingStyle:(long long)arg3;
- (void)showCompetitionRequestNotificationForFriend:(id)arg1 competition:(id)arg2 withPostingStyle:(long long)arg3;
- (void)showCompetitionScoreCapCelebrationForFriends:(id)arg1 withPostingStyle:(long long)arg2;
- (void)showGizmoVersionTooLowForCompetitionRequestFrom:(id)arg1;
- (void)withdrawCompetitionRequestNotificationForFriendWithUUID:(id)arg1;

@end
