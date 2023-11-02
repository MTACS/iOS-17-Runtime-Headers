
@interface GTServiceProviderReplyStream : GTXPCDispatcher <GTServiceProviderObserverXPCDispatcher> {
    <GTServiceProviderObserver> * _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;
- (void)notifyServiceListChanged_:(id)arg1 replyConnection:(id)arg2;

@end
