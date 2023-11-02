
@protocol HMDCameraStreamControlMessageHandlerDataSource <NSObject>

@required

- (HMDDynamicActivityAttributionPublisher *)createDynamicActivityAttributionPublisher;
- (HMDCameraLocalStreamControlManager *)createLocalStreamControlManagerWithSessionID:(HMDCameraStreamSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg3 reachabilityPath:(unsigned long long)arg4 device:(HMDDevice *)arg5 delegate:(id <HMDCameraStreamControlManagerDelegate>)arg6 delegateQueue:(NSObject<OS_dispatch_queue> *)arg7 accessory:(HMDAccessory *)arg8 streamManagementService:(HMDService *)arg9 localNetworkConfig:(HMDCameraNetworkConfig *)arg10 remoteCapabilities:(NSDictionary *)arg11 supportedConfigCache:(HMDCameraSupportedConfigurationCache *)arg12 streamPreference:(HMCameraStreamPreferences *)arg13;
- (HMDCameraRemoteStreamControlManager *)createRemoteStreamControlManagerWithSessionID:(HMDCameraStreamSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg3 reachabilityPath:(unsigned long long)arg4 device:(HMDDevice *)arg5 delegate:(id <HMDCameraStreamControlManagerDelegate>)arg6 delegateQueue:(NSObject<OS_dispatch_queue> *)arg7 accessory:(HMDAccessory *)arg8 streamManagementService:(HMDService *)arg9 remoteCapabilities:(NSDictionary *)arg10 profileUniqueIdentifier:(NSUUID *)arg11 residentMessageHandler:(HMDCameraResidentMessageHandler *)arg12 remoteAccessDevice:(HMDDevice *)arg13 streamPreference:(HMCameraStreamPreferences *)arg14;
- (HMDCameraStreamManagerSession *)createStreamManagerSessionWithSessionID:(HMDCameraStreamSessionID *)arg1 destinationID:(NSString *)arg2 streamClientConnection:(HMDXPCClientConnection *)arg3 streamControlManager:(id <HMDCameraStreamControlManagerProtocol>)arg4 setupWaitPeriod:(double)arg5;
- (bool)isResidentCapable;
- (HMDCameraNetworkConfig *)localNetworkConfig;
- (bool)supportsBidirectionalAudioForCameraStreaming;
- (bool)supportsChangingVolume;
- (bool)supportsReceivingRemoteCameraStream;

@end
