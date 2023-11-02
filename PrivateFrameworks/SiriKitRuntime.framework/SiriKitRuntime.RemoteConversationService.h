
@interface SiriKitRuntime.RemoteConversationService : _TtCs12_SwiftObject <SKRRemoteConversationXPC> {
    void asyncUpdateQueue;
    void flowPlugin;
    void flowPluginBundle;
    void pluginId;
    void referenceResolutionClient;
    void siriKitRuntime;
    void snippetManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
    void turnDataProvider;
}

- (void)acceptInitialInputWithInputIdentifier:(id)arg1 speechData:(id)arg2 reply:(id /* block */)arg3;
- (void)acceptWithInputData:(id)arg1 speechData:(id)arg2 reply:(id /* block */)arg3;
- (void)canHandleWithInputData:(id)arg1 rcId:(id)arg2 reply:(id /* block */)arg3;
- (void)cancelWithReply:(id /* block */)arg1;
- (void)commitWithBridge:(id)arg1 reply:(id /* block */)arg2;
- (void)drainAsyncWorkWithReply:(id /* block */)arg1;
- (void)ensureReadyWithReply:(id /* block */)arg1;
- (void)flexibleExecutionSupportOptionsWithReply:(id /* block */)arg1;
- (void)isCorrectableWithReply:(id /* block */)arg1;
- (void)isEmptyWithReply:(id /* block */)arg1;
- (void)paraphraseWithReply:(id /* block */)arg1;
- (void)prepareWithBridge:(id)arg1 reply:(id /* block */)arg2;
- (void)resetWithReply:(id /* block */)arg1;
- (void)startTurnFromCacheWithExecutionRequestId:(id)arg1 bridge:(id)arg2 reply:(id /* block */)arg3;
- (void)startTurnWithTurnData:(id)arg1 bridge:(id)arg2 reply:(id /* block */)arg3;
- (void)warmupWithRefId:(id)arg1 reply:(id /* block */)arg2;

@end
