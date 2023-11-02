
@interface GTMTLDiagnosticsServiceXPCDispatcher : GTXPCDispatcher <GTMTLDiagnosticsServiceXPCDispatcher> {
    <GTMTLDiagnosticsService> * _service;
}

- (void).cxx_destruct;
- (void)broadcastDisconnect:(id)arg1 replyConnection:(id)arg2;
- (void)deregisterObserver_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2;
- (void)raiseRuntimeIssue_:(id)arg1 replyConnection:(id)arg2;
- (void)registerObserver_:(id)arg1 replyConnection:(id)arg2;

@end
