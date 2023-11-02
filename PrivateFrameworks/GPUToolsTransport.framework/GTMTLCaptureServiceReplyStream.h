
@interface GTMTLCaptureServiceReplyStream : GTXPCDispatcher <GTMTLCaptureServiceObserverXPCDispatcher> {
    <GTMTLCaptureServiceObserver> * _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;
- (void)notifyCaptureObjectsChanged_:(id)arg1 replyConnection:(id)arg2;
- (void)notifyCaptureProgress_:(id)arg1 replyConnection:(id)arg2;
- (void)notifyCaptureRequest_:(id)arg1 replyConnection:(id)arg2;
- (void)notifyUnsupportedFenum_:(id)arg1 replyConnection:(id)arg2;

@end
