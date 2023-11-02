
@interface CopresenceCore.ActivitySessionHostConnection : _TtGC14CopresenceCore17XPCHostConnectionOS_24ActivitySessionInterface_ <CPActivitySessionXPCHost> {
    void __isAppProcess;
    void delegate;
}

- (void).cxx_destruct;
- (void)associateSceneWithSceneID:(id)arg1;
- (void)disassociateScene;
- (void)end;
- (void)joinWithAudioSessionID:(id)arg1 completion:(id /* block */)arg2;
- (void)leaveWithCompletion:(id /* block */)arg1;
- (void)logAttachmentEventWithReport:(id)arg1 reportEvent:(id)arg2;
- (void)postEventWithEvent:(id)arg1;
- (void)presentSessionDismissalAlertWithAllowingCancellation:(bool)arg1 completion:(id /* block */)arg2;
- (void)requestEncryptionKeysFor:(id)arg1;
- (void)requestEndpointWith:(id)arg1 completion:(id /* block */)arg2;
- (void)requestForegroundPresentation;
- (void)requestParticipantsFor:(id)arg1 completion:(id /* block */)arg2;
- (void)sendResourceAtURL:(id)arg1 to:(id)arg2 metadata:(id)arg3 completion:(id /* block */)arg4;
- (void)updateActivityWithActivity:(id)arg1;
- (void)updateCapabilitiesWithCapabilities:(long long)arg1;

@end
