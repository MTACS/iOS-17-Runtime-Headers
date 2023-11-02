
@protocol HMDCameraSnapshotManagerDataSource <NSObject>

@required

- (HMDSnapshotLocalSession *)createLocalSnapshotSessionWithID:(HMDCameraSnapshotSessionID *)arg1 accessory:(HMDAccessory *)arg2 snapshotGetter:(id <HMDCameraGetSnapshotProtocol>)arg3 message:(HMFMessage *)arg4 waitPeriod:(double)arg5 reachabilityPath:(unsigned long long)arg6 cameraLocallyReachable:(bool)arg7 snapshotForNotification:(bool)arg8;
- (HMDCameraSnapshotLocal *)createSnapshotLocalWithSessionID:(HMDCameraSnapshotSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 accessory:(HMDAccessory *)arg3 delegate:(id <HMDCameraSnapshotLocalDelegate>)arg4 delegateQueue:(NSObject<OS_dispatch_queue> *)arg5 snapshotRequestHandler:(id <HMDSnapshotRequestHandlerProtocol>)arg6;
- (HMDCameraSnapshotRemoteRelayReceiver *)createSnapshotRemoteRelayReceiverWithSessionID:(HMDCameraSnapshotSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 accessory:(HMDAccessory *)arg3 delegate:(id <HMDCameraSnapshotRemoteRelayReceiverDelegate>)arg4 delegateQueue:(NSObject<OS_dispatch_queue> *)arg5 uniqueIdentifier:(NSUUID *)arg6 snapshotRequestHandler:(HMDSnapshotRequestHandler *)arg7 residentMessageHandler:(HMDCameraResidentMessageHandler *)arg8 remoteDevice:(HMDDevice *)arg9;
- (bool)isWatchDevice;
- (bool)supportsCameraSnapshotRequestViaRelay;

@end
