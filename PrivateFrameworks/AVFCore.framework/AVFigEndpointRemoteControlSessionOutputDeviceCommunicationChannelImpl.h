
@interface AVFigEndpointRemoteControlSessionOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl> {
    AVOutputDeviceCommunicationChannel * _parentChannel;
    struct OpaqueFigEndpointRemoteControlSession { } * _remoteControlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property AVOutputDeviceCommunicationChannel *parentChannel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didCloseCommunicationChannel;
- (void)_didReceiveData:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithRemoteControlSession:(struct OpaqueFigEndpointRemoteControlSession { }*)arg1;
- (id)parentChannel;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setParentChannel:(id)arg1;

@end
