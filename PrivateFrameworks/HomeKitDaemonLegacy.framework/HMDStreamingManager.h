
@interface HMDStreamingManager : HMFObject <AVCRemoteVideoClientDelegate, HMDAudioStreamInterfaceDelegate, HMDVideoStreamInterfaceDelegate, HMFLogging> {
    NSNumber * _aspectRatio;
    HMDAudioStreamInterface * _audioStreamInterface;
    AVCRemoteVideoClient * _avcRemoteVideo;
    <HMDStreamingManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDCameraStreamSessionID * _sessionID;
    NSNumber * _slotIdentifier;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    HMDVideoStreamInterface * _videoStreamInterface;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (copy) NSNumber *aspectRatio;
@property (readonly) HMDAudioStreamInterface *audioStreamInterface;
@property (readonly) unsigned long long audioStreamSetting;
@property (retain) AVCRemoteVideoClient *avcRemoteVideo;
@property (readonly, copy) NSString *debugDescription;
@property <HMDStreamingManagerDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDCameraStreamSessionID *sessionID;
@property (copy) NSNumber *slotIdentifier;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;
@property (readonly) HMDVideoStreamInterface *videoStreamInterface;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callConfigurationUpdated;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callReceivedFirstFrame;
- (void)_callRelayStarted;
- (void)_callStreamStarted:(id)arg1;
- (void)_callStreamStoppedWithError:(id)arg1;
- (void)_startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;
- (void)_stopStream;
- (id)aspectRatio;
- (void)audioStream:(id)arg1 didPause:(id)arg2;
- (void)audioStream:(id)arg1 didResume:(id)arg2;
- (void)audioStream:(id)arg1 didStart:(id)arg2;
- (void)audioStream:(id)arg1 didStop:(id)arg2;
- (id)audioStreamInterface;
- (unsigned long long)audioStreamSetting;
- (id)avcRemoteVideo;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 localVideoNetworkConfig:(id)arg6 localAudioNetworkConfig:(id)arg7 sessionHandler:(id)arg8;
- (id)logIdentifier;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;
- (void)remoteVideoClientDidReceiveLastFrame:(id)arg1;
- (void)remoteVideoServerDidDie:(id)arg1;
- (id)sessionID;
- (void)setAspectRatio:(id)arg1;
- (void)setAvcRemoteVideo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSlotIdentifier:(id)arg1;
- (id)slotIdentifier;
- (void)startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;
- (id)streamSnapshotHandler;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)updateAudioVolume:(id)arg1 callback:(id /* block */)arg2;
- (void)updateReconfigurationMode:(bool)arg1;
- (void)updateStreamConfiguration:(id)arg1;
- (void)videoStream:(id)arg1 didStart:(id)arg2;
- (void)videoStream:(id)arg1 didStop:(id)arg2;
- (void)videoStreamDidNetworkDeteriorate:(id)arg1;
- (void)videoStreamDidNetworkImprove:(id)arg1;
- (void)videoStreamDidUpdateConfiguration:(id)arg1;
- (id)videoStreamInterface;
- (id)workQueue;

@end
