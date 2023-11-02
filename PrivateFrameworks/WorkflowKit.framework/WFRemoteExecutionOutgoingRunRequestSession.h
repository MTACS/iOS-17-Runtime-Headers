
@interface WFRemoteExecutionOutgoingRunRequestSession : WFRemoteExecutionSession {
    id /* block */  _completion;
    WFRemoteExecutionCoordinator * _coordinator;
    WFRemoteExecutionFileCoordinator * _fileCoordinator;
    <WFActionParameterInputProvider> * _parameterInputProvider;
    <WFUserInterfaceHost> * _userInterface;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) WFRemoteExecutionCoordinator *coordinator;
@property (nonatomic, retain) WFRemoteExecutionFileCoordinator *fileCoordinator;
@property (nonatomic, readonly) <WFActionParameterInputProvider> *parameterInputProvider;
@property (nonatomic, retain) WFRemoteExecutionRunRequest *request;
@property (nonatomic, readonly) <WFUserInterfaceHost> *userInterface;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)coordinator;
- (id)fileCoordinator;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2 metadata:(id)arg3;
- (void)handleIncomingProtobuf:(id)arg1;
- (void)handleTimeout;
- (id)initWithService:(id)arg1 request:(id)arg2 userInterface:(id)arg3 parameterInputProvider:(id)arg4 coordinator:(id)arg5 completion:(id /* block */)arg6;
- (id)parameterInputProvider;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFileCoordinator:(id)arg1;
- (double)timeoutLimitInSeconds;
- (id)userInterface;

@end
