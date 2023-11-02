
@interface GTRemoteDeviceBrowserReplyStream : GTXPCDispatcher <GTRemoteDeviceBrowserObserverXPCDispatcher> {
    <GTRemoteDeviceBrowserObserver> * _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;
- (void)notifyDeviceListChanged_:(id)arg1 replyConnection:(id)arg2;

@end
