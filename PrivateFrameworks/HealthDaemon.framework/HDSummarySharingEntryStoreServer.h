
@interface HDSummarySharingEntryStoreServer : HDStandardTaskServer <HDProfileReadyObserver, HDSummarySharingEntryIDSManagerReachabilityObserver, HDSummarySharingEntryObserver, HKSummarySharingEntryStoreServerInterface> {
    HDSharingAuthorizationManager * _sharingAuthorizationManager;
    HDSummarySharingEntryManager * _sharingEntryManager;
    HDSummarySharingEntryIDSManager * _summarySharingEntryIDSManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)profileDidBecomeReady:(id)arg1;
- (id)remoteInterface;
- (void)remote_acceptInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_beginObservingReachabilityStatusForIdentifiers:(id)arg1 isInitialQuery:(bool)arg2;
- (void)remote_declineInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchSharingEntriesWithCompletionHandler:(id /* block */)arg1;
- (void)remote_inviteSharingDataWithIdentifier:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 sharingAuthorizations:(id)arg4 userWheelchairMode:(long long)arg5 completion:(id /* block */)arg6;
- (void)remote_leaveInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_revokeInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_unpauseInvitationWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_updateAuthorizationIdentifiersForInvitationUUID:(id)arg1 sharingAuthorizationsToAdd:(id)arg2 sharingAuthorizationsToDelete:(id)arg3 deleteOnCommit:(bool)arg4 completion:(id /* block */)arg5;
- (void)remote_updateNotificationStatusWithUUID:(id)arg1 notificationStatus:(long long)arg2 completion:(id /* block */)arg3;
- (void)sharingEntriesDidUpdate:(id)arg1;
- (void)summarySharingEntryIDSManager:(id)arg1 didUpdateReachabilityStatus:(id)arg2 error:(id)arg3;

@end
