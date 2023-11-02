
@interface WFRemoteExecutionOutgoingAlertSession : WFRemoteExecutionSession {
    id /* block */  _completion;
}

@property (nonatomic, readonly, copy) id /* block */ completion;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)handleIncomingProtobuf:(id)arg1;
- (void)handleTimeout;
- (id)initWithService:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (double)timeoutLimitInSeconds;

@end
