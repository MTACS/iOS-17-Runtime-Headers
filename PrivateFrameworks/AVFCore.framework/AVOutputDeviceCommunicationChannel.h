
@interface AVOutputDeviceCommunicationChannel : NSObject {
    <AVOutputDeviceCommunicationChannelDelegate> * _delegate;
    <AVOutputDeviceCommunicationChannelImpl> * _impl;
}

@property <AVOutputDeviceCommunicationChannelDelegate> *delegate;

- (void).cxx_destruct;
- (void)close;
- (void)communicationChannelImpl:(id)arg1 didReceiveData:(id)arg2;
- (void)communicationChannelImplDidClose:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithOutputDeviceCommunicationChannelImpl:(id)arg1;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
