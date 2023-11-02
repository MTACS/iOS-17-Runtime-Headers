
@interface ASActivitySharingClient : NSObject <ASActivitySharingClientProtocol> {
    _ASActivitySharingClient * _activitySharingClient;
}

@property (nonatomic, readonly) _ASActivitySharingClient *activitySharingClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptCompetitionInviteFromFriendUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)acceptFriendInviteFromFriendUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)activateWithCompletionHandler:(id /* block */)arg1;
- (id)activitySharingClient;
- (void)allFriendsWithCompletion:(id /* block */)arg1;
- (void)appBadgeCountWithCompletion:(id /* block */)arg1;
- (void)areMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 completion:(id /* block */)arg2;
- (void)completeCompetitionWithFriendUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)expireChangeTokenWithCompletion:(id /* block */)arg1;
- (void)fetchActivityDataIfGreaterThanLastFetchElapsedMinimum:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)friendWithRemoteRelationshipUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)handleNotificationResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)ignoreCompetitionInviteFromFriendUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)ignoreFriendInviteFromFriendUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)immediateFetchActivityDataWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidateWithCompletionHandler:(id /* block */)arg1;
- (void)isCloudKitAccountActiveWithCompletion:(id /* block */)arg1;
- (void)pushActivityDataWithCompletion:(id /* block */)arg1;
- (void)pushFakeActivityDataWithCompletion:(id /* block */)arg1;
- (void)removeAllFriendsWithCompletion:(id /* block */)arg1;
- (void)removeFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendCompetitionInviteToFriendUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendFriendInviteToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)setActivityDataVisible:(bool)arg1 friendUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setMuteEnabled:(bool)arg1 friendUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)withdrawFriendInviteToFriendUUID:(id)arg1 completion:(id /* block */)arg2;

@end
