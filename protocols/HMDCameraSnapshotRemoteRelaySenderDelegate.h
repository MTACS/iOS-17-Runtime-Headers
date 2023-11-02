
@protocol HMDCameraSnapshotRemoteRelaySenderDelegate <NSObject>

@required

- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;

@end
