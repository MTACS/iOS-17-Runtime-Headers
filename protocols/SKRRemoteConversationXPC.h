
@protocol SKRRemoteConversationXPC

@required

- (void)acceptInitialInputWithInputIdentifier:(void *)arg1 speechData:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, _TtC14SiriKitRuntime28RemoteConversationSpeechData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKRFlowExtensionUserInputResultXPC *, void*
- (void)acceptWithInputData:(void *)arg1 speechData:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSData *, _TtC14SiriKitRuntime28RemoteConversationSpeechData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKRFlowExtensionUserInputResultXPC *, void*
- (void)canHandleWithInputData:(void *)arg1 rcId:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC14SiriKitRuntime27ConversationCanHandleResult *, void*
- (void)cancelWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)commitWithBridge:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: <SKRServiceBridge> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKRConversationCommitResult *, void*
- (void)drainAsyncWorkWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)ensureReadyWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)flexibleExecutionSupportOptionsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKRConversationFlexibleExecutionSupport *, void*
- (void)isCorrectableWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isEmptyWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)paraphraseWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC14SiriKitRuntime31ConversationParaphraseResultXPC *, void*
- (void)prepareWithBridge:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: <SKRServiceBridge> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startTurnFromCacheWithExecutionRequestId:(void *)arg1 bridge:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, <SKRServiceBridge> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)startTurnWithTurnData:(void *)arg1 bridge:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: SKRConversationTurnDataXPC *, <SKRServiceBridge> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)warmupWithRefId:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
