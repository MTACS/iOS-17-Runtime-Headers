
@interface CopresenceCore.BackgroundSessionManagerClient : _TtGC14CopresenceCore9XPCClientOS_33BackgroundSessionManagerInterface_ <CPBackgroundSessionManagerXPCClient, CPBackgroundSessionManagerXPCHost> {
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
}

- (void).cxx_destruct;
- (void)beginWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)createPresenceSessionWith:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)leaveWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)sessionDidReceiveUpdatedUnknownParticipantListWithSessionID:(id)arg1 unknownParticipants:(id)arg2;
- (void)sessionDidRejectKeyRecoveryRequestWithSessionID:(id)arg1;
- (void)updateMembersWithIdentifier:(id)arg1 members:(id)arg2 completion:(id /* block */)arg3;
- (void)updateShare:(id)arg1 activityID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateWithActivitySessions:(id)arg1;

@end
