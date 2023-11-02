
@interface GTMTLDiagnosticsServiceReplyStream : GTXPCDispatcher <GTMTLDiagnosticsServiceObserverXPCDispatcher> {
    <GTMTLDiagnosticsServiceObserver> * _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;
- (void)notifyCommandBufferIssue_:(id)arg1 replyConnection:(id)arg2;
- (void)notifyDiagnosticsIssue_:(id)arg1 replyConnection:(id)arg2;

@end
