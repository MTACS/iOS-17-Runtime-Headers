
@interface TRClientConnection : TRConnection {
    SFSession * _session;
}

@property (retain) SFSession *session;

- (void).cxx_destruct;
- (void)connectToNearbyDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (id /* block */)eventMessageHandler;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)requestMessageHandler;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendResponse:(id)arg1;
- (id)session;
- (void)setEventMessageHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRequestMessageHandler:(id /* block */)arg1;
- (void)setSession:(id)arg1;

@end
