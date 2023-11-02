
@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <AVCPacketRelayDelegate, HMDCameraRemoteStreamSenderProtocol, IDSSessionDelegate> {
    <HMDCameraIDSSessionInitiatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDDevice * _device;
    HMDCameraNetworkConfig * _localNetworkConfig;
    AVCPacketRelay * _packetRelay;
    HMFOSTransaction * _packetRelayTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraIDSSessionInitiatorDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (nonatomic, readonly) NSNumber *mtu;
@property (retain) AVCPacketRelay *packetRelay;
@property (retain) HMFOSTransaction *packetRelayTransaction;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callSessionEndedWithError:(id)arg1;
- (void)_callSessionStarted;
- (void)_sendInvitation;
- (void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)device;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 localNetworkConfig:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)localNetworkConfig;
- (id)logIdentifier;
- (id)mtu;
- (void)openRelaySession;
- (id)packetRelay;
- (void)packetRelay:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)packetRelay:(id)arg1 didStop:(bool)arg2 error:(id)arg3;
- (id)packetRelayTransaction;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPacketRelay:(id)arg1;
- (void)setPacketRelayTransaction:(id)arg1;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;

@end
