
@protocol HMDCameraSnapshotRemoteRelayStreamDelegate <NSObject>

@required

- (void)snapshotRelayStream:(HMDCameraSnapshotRemoteRelayStream *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
- (void)snapshotRelayStream:(HMDCameraSnapshotRemoteRelayStream *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;

@end
