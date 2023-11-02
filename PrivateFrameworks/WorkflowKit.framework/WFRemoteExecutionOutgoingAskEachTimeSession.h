
@interface WFRemoteExecutionOutgoingAskEachTimeSession : WFRemoteExecutionSession {
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) WFRemoteExecutionAskEachTimeRequest *request;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)finishWithoutCallingCompletion;
- (void)handleIncomingProtobuf:(id)arg1;
- (void)handleTimeout;
- (id)initWithService:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (double)timeoutLimitInSeconds;

@end
