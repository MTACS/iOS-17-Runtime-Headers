
@interface HMDCameraStreamControlMessageHandlerDataSource : HMFObject <HMDCameraStreamControlMessageHandlerDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (getter=isResidentCapable, readonly) bool residentCapable;
@property (readonly) Class superclass;
@property (readonly) bool supportsBidirectionalAudioForCameraStreaming;
@property (readonly) bool supportsChangingVolume;
@property (readonly) bool supportsReceivingRemoteCameraStream;

- (id)createDynamicActivityAttributionPublisher;
- (id)createLocalStreamControlManagerWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 localNetworkConfig:(id)arg10 remoteCapabilities:(id)arg11 supportedConfigCache:(id)arg12 streamPreference:(id)arg13;
- (id)createRemoteStreamControlManagerWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11 residentMessageHandler:(id)arg12 remoteAccessDevice:(id)arg13 streamPreference:(id)arg14;
- (id)createStreamManagerSessionWithSessionID:(id)arg1 destinationID:(id)arg2 streamClientConnection:(id)arg3 streamControlManager:(id)arg4 setupWaitPeriod:(double)arg5;
- (bool)isResidentCapable;
- (id)localNetworkConfig;
- (bool)supportsBidirectionalAudioForCameraStreaming;
- (bool)supportsChangingVolume;
- (bool)supportsReceivingRemoteCameraStream;

@end
