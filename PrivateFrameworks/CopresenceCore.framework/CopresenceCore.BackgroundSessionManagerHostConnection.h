
@interface CopresenceCore.BackgroundSessionManagerHostConnection : _TtGC14CopresenceCore17XPCHostConnectionOS_33BackgroundSessionManagerInterface_ <CPBackgroundSessionManagerXPCClient> {
    void abcReporter;
    void dataSource;
}

- (void).cxx_destruct;
- (void)beginWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)createPresenceSessionWith:(id)arg1 completion:(id /* block */)arg2;
- (void)leaveWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateMembersWithIdentifier:(id)arg1 members:(id)arg2 completion:(id /* block */)arg3;
- (void)updateShare:(id)arg1 activityID:(id)arg2 completion:(id /* block */)arg3;

@end
