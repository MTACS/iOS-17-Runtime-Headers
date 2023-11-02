
@interface HMDCameraSnapshotManagerDataSource : HMFObject <HMDCameraSnapshotManagerDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) bool supportsCameraSnapshotRequestViaRelay;
@property (getter=isWatchDevice, readonly) bool watchDevice;

- (id)createLocalSnapshotSessionWithID:(id)arg1 accessory:(id)arg2 snapshotGetter:(id)arg3 message:(id)arg4 waitPeriod:(double)arg5 reachabilityPath:(unsigned long long)arg6 cameraLocallyReachable:(bool)arg7 snapshotForNotification:(bool)arg8;
- (id)createSnapshotLocalWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 snapshotRequestHandler:(id)arg6;
- (id)createSnapshotRemoteRelayReceiverWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8 remoteDevice:(id)arg9;
- (bool)isWatchDevice;
- (bool)supportsCameraSnapshotRequestViaRelay;

@end
