
@interface SKRFlowExtensionContext : NSExtensionContext <SKRRemoteConversationXPC> {
    void $__lazy_storage_$_remoteConversationService;
    void overrideExtensionId;
    void overrideFlowExtension;
    void overrideIntentTopics;
    void overrideSiriKitRuntime;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)acceptInitialInputWithInputIdentifier:(id)arg1 speechData:(id)arg2 reply:(id /* block */)arg3;
- (void)acceptWithInputData:(id)arg1 speechData:(id)arg2 reply:(id /* block */)arg3;
- (void)canHandleWithInputData:(id)arg1 rcId:(id)arg2 reply:(id /* block */)arg3;
- (void)cancelWithReply:(id /* block */)arg1;
- (void)commitWithBridge:(id)arg1 reply:(id /* block */)arg2;
- (void)drainAsyncWorkWithReply:(id /* block */)arg1;
- (void)ensureReadyWithReply:(id /* block */)arg1;
- (void)flexibleExecutionSupportOptionsWithReply:(id /* block */)arg1;
- (id)init;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)isCorrectableWithReply:(id /* block */)arg1;
- (void)isEmptyWithReply:(id /* block */)arg1;
- (void)paraphraseWithReply:(id /* block */)arg1;
- (void)prepareWithBridge:(id)arg1 reply:(id /* block */)arg2;
- (void)resetWithReply:(id /* block */)arg1;
- (void)startTurnFromCacheWithExecutionRequestId:(id)arg1 bridge:(id)arg2 reply:(id /* block */)arg3;
- (void)startTurnWithTurnData:(id)arg1 bridge:(id)arg2 reply:(id /* block */)arg3;
- (void)warmupWithRefId:(id)arg1 reply:(id /* block */)arg2;

@end
