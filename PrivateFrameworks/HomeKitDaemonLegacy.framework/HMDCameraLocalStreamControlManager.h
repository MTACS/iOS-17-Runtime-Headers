
@interface HMDCameraLocalStreamControlManager : HMDCameraStreamControlManager <HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraStreamControlManagerProtocol, HMDStreamingManagerDelegate> {
    HMDCameraMediaConfigGenerator * _configGenerator;
    HMDCameraLocalStreamSession * _streamSession;
    HMDCameraSupportedConfigurationCache * _supportedConfigCache;
}

@property (readonly, copy) NSNumber *aspectRatio;
@property (readonly) unsigned long long audioStreamSetting;
@property (readonly) HMDCameraMediaConfigGenerator *configGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSendingStream, readonly) bool sendingStream;
@property (readonly, copy) NSNumber *slotIdentifier;
@property (readonly) HMDCameraStreamMetrics *streamMetrics;
@property (retain) HMDCameraLocalStreamSession *streamSession;
@property (readonly) Class superclass;
@property (readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addServerStreamSession;
- (id)_calculateMTU;
- (void)_cleanUpStreamSessionWithError:(id)arg1;
- (void)_getSupportedConfigurations;
- (void)_handleSetupEndPointRead:(id)arg1;
- (void)_handleSupportedParameters:(id)arg1;
- (void)_negotiateStream;
- (void)_reconfigureStream:(id)arg1;
- (void)_reconfigureStreams;
- (void)_removeServerStreamSession;
- (void)_sendSetupEndPointRead;
- (void)_sendUpdatedConfiguration;
- (void)_startStreamWithRemoteSettings:(id)arg1;
- (void)_startStreamingManager;
- (void)_stopCurrentStreamSessionWithError:(id)arg1;
- (void)_streamStarted;
- (bool)_validateSetupEndPointReadWithWrite;
- (void)_writeReselectConfig;
- (void)_writeSelectConfig:(id)arg1 reconfigure:(bool)arg2;
- (void)_writeSetupEndPoint;
- (void)_writeStartConfig;
- (void)_writeStopConfig:(id)arg1;
- (id)aspectRatio;
- (unsigned long long)audioStreamSetting;
- (id)configGenerator;
- (void)dealloc;
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 supportedConfigCache:(id)arg8 streamSession:(id)arg9;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 localNetworkConfig:(id)arg10 remoteCapabilities:(id)arg11 supportedConfigCache:(id)arg12 streamPreference:(id)arg13;
- (bool)isSendingStream;
- (void)negotiateStream;
- (void)reconfigureStream:(id)arg1;
- (void)sessionInitiator:(id)arg1 didEndSessionWithError:(id)arg2;
- (void)sessionInitiator:(id)arg1 didSetUpWithError:(id)arg2;
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
- (void)streamingManagerDidStartRelay:(id)arg1;
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;
- (id)supportedConfigCache;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)updateAudioVolume:(id)arg1 callback:(id /* block */)arg2;

@end
