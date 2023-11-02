
@interface ASFriendInviteBulletinManager : NSObject <ASActivitySharingManagerReadyObserver, ASBulletinPostingManagerDelegate> {
    <ASBulletinPostingManager> * _bulletinPostingManager;
    <ASFriendInviteBulletinManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _postedFriendInviteIdentifiersForContactUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASFriendInviteBulletinManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_inviteNotificationCategories;
- (bool)_isSharingSetup;
- (id)_newPrepolulatedUserInfoForInvitationFromContactUUID:(id)arg1 categoryIdentifier:(id)arg2 notificationContent:(id)arg3 title:(id)arg4 message:(id)arg5;
- (void)_newPrepopulatedNotificationContentForNotificationContent:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)_notificationRequestForInvitationFromContact:(id)arg1 categoryIdentifier:(id)arg2 requestIdentifier:(id)arg3 title:(id)arg4 formatString:(id)arg5;
- (id)_notificationRequestForInvitationFromContact:(id)arg1 requestIdentifier:(id)arg2;
- (id)_notificationRequestForInvitationFromContactUUID:(id)arg1 categoryIdentifier:(id)arg2 requestIdentifier:(id)arg3 title:(id)arg4 message:(id)arg5;
- (void)_showIncompatibleVersionForContact:(id)arg1 title:(id)arg2 formatString:(id)arg3;
- (void)_submitNotificationRequest:(id)arg1 forContact:(id)arg2;
- (id)_userInfoForInvitationResponseFromContact:(id)arg1 notificationContent:(id)arg2 message:(id)arg3;
- (void)activitySharingManagerReady:(id)arg1;
- (void)bulletinPostingManager:(id)arg1 didReceiveNotificationResponse:(id)arg2;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)showErrorAcceptingInviteFrom:(id)arg1;
- (void)showInviteAcceptResponseFrom:(id)arg1;
- (void)showInviteAttemptNeedToSignInFrom:(id)arg1;
- (void)showInviteAttemptNeedToUpgradeFrom:(id)arg1;
- (void)showInviteAttemptNeedsSetupFromContact:(id)arg1;
- (void)showInviteRequestFromContact:(id)arg1 withPostingStyle:(long long)arg2;
- (void)showMaxNumberOfFriendsError;
- (void)showVersionTooHighForOutgoingInviteTo:(id)arg1;
- (void)showVersionTooLowForIncomingInviteFrom:(id)arg1;
- (void)showVersionTooLowForOutgoingInviteTo:(id)arg1;
- (void)withdrawInviteNotificationsForContact:(id)arg1;

@end
