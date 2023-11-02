
@interface AVSystemRemotePoolOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl> {
    struct __CFString { } * _commChannelUUID;
    NSString * _deviceID;
    AVOutputContext * _outputContext;
    AVOutputDeviceCommunicationChannel * _parentChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property AVOutputDeviceCommunicationChannel *parentChannel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithDeviceID:(id)arg1 channelUUID:(struct __CFString { }*)arg2 outputContext:(id)arg3;
- (id)parentChannel;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setParentChannel:(id)arg1;

@end
