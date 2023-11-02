
@interface HMDCameraIDSDeviceConnectionSender : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamSenderProtocol> {
    AVCPacketRelay * _audioPacketRelay;
    <HMDCameraIDSDeviceConnectionSenderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDDevice * _device;
    HMFOSTransaction * _packetRelayTransaction;
    AVCPacketRelay * _videoPacketRelay;
}

@property (retain) AVCPacketRelay *audioPacketRelay;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraIDSDeviceConnectionSenderDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *mtu;
@property (retain) HMFOSTransaction *packetRelayTransaction;
@property (readonly) Class superclass;
@property (retain) AVCPacketRelay *videoPacketRelay;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callSessionEndedWithError:(id)arg1;
- (void)_socketOpenedWithError:(id)arg1;
- (void)_startAudioPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3;
- (void)_startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;
- (void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)_startVideoPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3;
- (id)audioPacketRelay;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)device;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 idsProxyStreamService:(id)arg6;
- (id)logIdentifier;
- (id)mtu;
- (void)openRelaySession;
- (id)packetRelayTransaction;
- (void)setAudioPacketRelay:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPacketRelayTransaction:(id)arg1;
- (void)setVideoPacketRelay:(id)arg1;
- (void)startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (id)videoPacketRelay;

@end
