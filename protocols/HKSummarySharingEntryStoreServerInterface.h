
@protocol HKSummarySharingEntryStoreServerInterface <NSObject>

@required

- (void)remote_acceptInvitationWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_beginObservingReachabilityStatusForIdentifiers:(NSArray *)arg1 isInitialQuery:(bool)arg2;
- (void)remote_declineInvitationWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_fetchSharingEntriesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_inviteSharingDataWithIdentifier:(void *)arg1 firstName:(void *)arg2 lastName:(void *)arg3 sharingAuthorizations:(void *)arg4 userWheelchairMode:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, NSString *, NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_leaveInvitationWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_revokeInvitationWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_unpauseInvitationWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_updateAuthorizationIdentifiersForInvitationUUID:(void *)arg1 sharingAuthorizationsToAdd:(void *)arg2 sharingAuthorizationsToDelete:(void *)arg3 deleteOnCommit:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSUUID *, NSArray *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_updateNotificationStatusWithUUID:(void *)arg1 notificationStatus:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
