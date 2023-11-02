
@interface CopresenceCore.PresenceSessionHostConnection : _TtGC14CopresenceCore17XPCHostConnectionOS_24PresenceSessionInterface_ <CPPresenceSessionXPCHost> {
    void abcReporter;
    void delegate;
}

- (void).cxx_destruct;
- (void)joinWithCompletion:(id /* block */)arg1;
- (void)leaveWithCompletion:(id /* block */)arg1;
- (void)updateMembers:(id)arg1 completion:(id /* block */)arg2;

@end
