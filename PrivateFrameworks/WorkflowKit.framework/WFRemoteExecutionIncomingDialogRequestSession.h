
@interface WFRemoteExecutionIncomingDialogRequestSession : WFRemoteExecutionSession {
    WFRemoteExecutionDialogRequestResponse * _response;
}

@property (nonatomic, retain) WFRemoteExecutionDialogRequestResponse *response;

- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)handleIncomingProtobuf:(id)arg1 currentlyActiveSessions:(id)arg2 destinations:(id)arg3 options:(id)arg4;
- (void)handleTimeout;
- (id)response;
- (void)sendResponseWithOriginatingRequestIdentifier:(id)arg1 dialogResponse:(id)arg2 error:(id)arg3 destinations:(id)arg4 options:(id)arg5;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (void)setResponse:(id)arg1;
- (double)timeoutLimitInSeconds;

@end
