
@interface APKCommunicationChannel : NSObject <APKOutputDeviceCommunicationChannel, AVOutputDeviceCommunicationChannelDelegate> {
    AVOutputDeviceCommunicationChannel * _channel;
    id /* block */  _onClose;
    id /* block */  _onData;
}

@property (nonatomic, readonly) AVOutputDeviceCommunicationChannel *channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ onClose;
@property (nonatomic, copy) id /* block */ onData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)channel;
- (void)close;
- (void)communicationChannel:(id)arg1 didReceiveData:(id)arg2;
- (void)communicationChannelDidClose:(id)arg1;
- (id)initWithCommunicationChannel:(id)arg1;
- (id /* block */)onClose;
- (id /* block */)onData;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setOnClose:(id /* block */)arg1;
- (void)setOnData:(id /* block */)arg1;

@end
