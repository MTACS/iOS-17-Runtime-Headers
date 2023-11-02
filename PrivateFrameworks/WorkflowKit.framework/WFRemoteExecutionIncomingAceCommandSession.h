
@interface WFRemoteExecutionIncomingAceCommandSession : WFRemoteExecutionSession {
    WFRemoteExecutionAceCommandRequestResponse * _response;
}

@property (nonatomic, retain) WFRemoteExecutionAceCommandRequestResponse *response;

- (void).cxx_destruct;
- (void)handleIncomingProtobuf:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (id)response;
- (void)sendResponseWithOriginatingRequestIdentifier:(id)arg1 aceCommandResponseDictionary:(id)arg2 error:(id)arg3 destinations:(id)arg4 options:(id)arg5;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (void)setResponse:(id)arg1;

@end
