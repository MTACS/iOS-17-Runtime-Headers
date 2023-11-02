
@interface GTMTLReplayErrorReplyStream : GTXPCDispatcher <GTMTLReplayServiceObserverXPCDispatcher> {
    <GTMTLReplayServiceObserver> * _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;
- (void)notifyError_:(id)arg1 replyConnection:(id)arg2;

@end
