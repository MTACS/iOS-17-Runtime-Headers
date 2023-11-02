
@interface ASServer : NSObject <ASServerInterface, HDTaskServer, _HKXPCExportable> {
    ASActivitySharingManager * _activitySharingManager;
    HDHealthStoreClient * _client;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSUUID * _taskUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 client:(id)arg2 activitySharingManager:(id)arg3;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_clearFriendListWithCompletion:(id /* block */)arg1;
- (void)remote_cloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (void)remote_completeCompetitionWithFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_expireChangeTokenWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAllDataWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAllFriendsWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_friendWithRemoteUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_handleNotificationResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_pushActivityDataWithCompletion:(id /* block */)arg1;
- (void)remote_pushFakeActivityDataWithCompletion:(id /* block */)arg1;
- (void)remote_queryAppBadgeCountWithCompletion:(id /* block */)arg1;
- (void)remote_removeFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setActivityDataVisible:(bool)arg1 toFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setMuteEnabled:(bool)arg1 forFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (id)taskUUID;

@end
