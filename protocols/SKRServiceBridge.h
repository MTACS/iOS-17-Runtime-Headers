
@protocol SKRServiceBridge

@required

- (void)closeServerRequestForExecutionRequestId:(NSString *)arg1;
- (void)closeWithExecutionOutput:(SKRExecutionOutput *)arg1;
- (void)closeWithExecutionOutput:(SKRExecutionOutput *)arg1 errorString:(NSString *)arg2;
- (void)closeWithExecutionOutput:(SKRExecutionOutput *)arg1 needsUserInput:(bool)arg2;
- (void)fallbackToInfoDomainResultsForResultCandidateId:(NSString *)arg1;
- (void)fallbackToServerForResultCandidateId:(NSString *)arg1;
- (void)fetchContextsFor:(void *)arg1 includesNearByDevices:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSSet *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchRecentDialogsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchSpeechInfoWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFSpeechInfo *, void*
- (void)flowPluginWillExecuteWithFlowPluginInfo:(_TtC14SiriKitRuntime14FlowPluginInfo *)arg1;
- (void)prepareForAudioHandoffFailedWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareForAudioHandoffWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)retriggerOriginalRequestWithExecutionRequestId:(void *)arg1 forUserId:(void *)arg2 givenCurrentExecutionRequestId:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)submitWithExecutionOutput:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SKRExecutionOutput *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SABaseCommand *, NSError *, void*

@end
