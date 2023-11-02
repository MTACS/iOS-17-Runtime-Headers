
@interface GTMTLTelemetryServiceXPCDispatcher : GTXPCDispatcher <GTMTLTelemetryServiceXPCDispatcher> {
    <GTMTLTelemetryService> * _implInstance;
}

- (void).cxx_destruct;
- (void)broadcastDisconnect:(id)arg1 replyConnection:(id)arg2;
- (void)deregisterObserver_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2 notifyConnection:(id)arg3;
- (void)query_:(id)arg1 replyConnection:(id)arg2;
- (void)registerObserver_:(id)arg1 replyConnection:(id)arg2;
- (void)update_:(id)arg1 replyConnection:(id)arg2;

@end
