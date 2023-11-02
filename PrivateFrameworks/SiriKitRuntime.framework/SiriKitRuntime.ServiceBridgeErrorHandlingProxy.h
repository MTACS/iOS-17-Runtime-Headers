
@interface SiriKitRuntime.ServiceBridgeErrorHandlingProxy : _TtCs12_SwiftObject <SKRServiceBridge> {
    void wrappedProxy;
}

- (void)closeServerRequestForExecutionRequestId:(id)arg1;
- (void)closeWithExecutionOutput:(id)arg1;
- (void)closeWithExecutionOutput:(id)arg1 errorString:(id)arg2;
- (void)closeWithExecutionOutput:(id)arg1 needsUserInput:(bool)arg2;
- (void)fallbackToInfoDomainResultsForResultCandidateId:(id)arg1;
- (void)fallbackToServerForResultCandidateId:(id)arg1;
- (void)fetchContextsFor:(id)arg1 includesNearByDevices:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchRecentDialogsWithReply:(id /* block */)arg1;
- (void)fetchSpeechInfoWithReply:(id /* block */)arg1;
- (void)flowPluginWillExecuteWithFlowPluginInfo:(id)arg1;
- (void)prepareForAudioHandoffFailedWithCompletion:(id /* block */)arg1;
- (void)prepareForAudioHandoffWithCompletion:(id /* block */)arg1;
- (void)retriggerOriginalRequestWithExecutionRequestId:(id)arg1 forUserId:(id)arg2 givenCurrentExecutionRequestId:(id)arg3 reply:(id /* block */)arg4;
- (void)submitWithExecutionOutput:(id)arg1 completion:(id /* block */)arg2;

@end
