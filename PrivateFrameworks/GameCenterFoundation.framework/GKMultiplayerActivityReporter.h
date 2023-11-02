
@interface GKMultiplayerActivityReporter : NSObject {
    void apiReporter;
    void localPlayerID;
    void mutableState;
    void stateQueue;
    void transportSupport;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithLocalPlayerID:(id)arg1 transportSupport:(id)arg2 apiReporter:(id)arg3;
- (id /* block */)instrumentBestHostElectedHandler:(id /* block */)arg1 transportContext:(id)arg2;
- (id)instrumentClientDelegate:(id)arg1 transportContext:(id)arg2;
- (id /* block */)instrumentErrorHandler:(id /* block */)arg1 transportContext:(id)arg2;
- (void)onDisconnectWithTransportContext:(id)arg1;
- (void)onGameplayEndedWithReason:(long long)arg1 error:(id)arg2 transportContext:(id)arg3;
- (void)onGameplayStartedWithTransportContext:(id)arg1;
- (void)onInviteSentWithApproach:(unsigned long long)arg1 isHosted:(bool)arg2 recipients:(id)arg3 transportContext:(id)arg4;
- (void)onTransportError:(id)arg1 transportContext:(id)arg2;

@end
