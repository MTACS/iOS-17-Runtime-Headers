
@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraStreamControlManagerProtocol, HMDStreamingManagerDelegate> {
    HMDCameraMediaConfigGenerator * _configGenerator;
    NSUUID * _profileUniqueIdentifier;
    HMDCameraResidentMessageHandler * _residentMessageHandler;
    HMDCameraRemoteStreamSession * _streamSession;
}

@property (readonly, copy) NSNumber *aspectRatio;
@property (readonly) unsigned long long audioStreamSetting;
@property (readonly) HMDCameraMediaConfigGenerator *configGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *profileUniqueIdentifier;
@property (nonatomic, readonly, copy) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (readonly, copy) NSNumber *slotIdentifier;
@property (readonly) HMDCameraStreamMetrics *streamMetrics;
@property (retain) HMDCameraRemoteStreamSession *streamSession;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cleanUpStreamSessionWithError:(id)arg1;
- (void)_dispatchReconfigureToResident:(id)arg1;
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;
- (void)_idsSessionCreatedAndConfigNegotiated;
- (void)_negotiateStream;
- (void)_reconfigureStream:(id)arg1;
- (void)_reconfigureStreams;
- (void)_relaySessionStarted:(id)arg1;
- (void)_sendStopMessageToResident;
- (void)_sendUpdatedConfiguration;
- (void)_setParametersSelected:(id)arg1;
- (void)_setUpRemoteConnectionWithDevice:(id)arg1;
- (void)_startStreamWithRemoteSettings:(id)arg1;
- (void)_stopCurrentStreamSessionWithError:(id)arg1;
- (void)_streamStarted;
- (id)aspectRatio;
- (unsigned long long)audioStreamSetting;
- (id)configGenerator;
- (void)dealloc;
- (void)deviceConnectionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;
- (void)deviceConnectionReceiver:(id)arg1 didSetUpWithError:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 profileUniqueIdentifier:(id)arg8 residentMessageHandler:(id)arg9 streamSession:(id)arg10;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11 residentMessageHandler:(id)arg12 remoteAccessDevice:(id)arg13 streamPreference:(id)arg14;
- (void)negotiateStream;
- (id)profileUniqueIdentifier;
- (void)reconfigureStream:(id)arg1;
- (id)residentMessageHandler;
- (void)sessionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;
- (void)sessionReceiver:(id)arg1 didSetUpWithError:(id)arg2;
- (void)setStreamSession:(id)arg1;
- (void)setUpRemoteConnectionWithDevice:(id)arg1;
- (id)slotIdentifier;
- (void)startStreamWithRemoteSettings:(id)arg1;
- (void)stopStreamWithError:(id)arg1;
- (id)streamSession;
- (void)streamingManager:(id)arg1 didStartStreamWithError:(id)arg2;
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;
- (void)streamingManagerDidNetworkImprove:(id)arg1;
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1;
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)updateAudioVolume:(id)arg1 callback:(id /* block */)arg2;

@end
