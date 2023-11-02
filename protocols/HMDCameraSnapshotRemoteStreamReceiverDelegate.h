
@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate <NSObject>

@required

- (void)snapshotStreamReceiver:(HMDCameraSnapshotRemoteStreamReceiver *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSnapshotSessionID *)arg4;
- (void)snapshotStreamReceiver:(HMDCameraSnapshotRemoteStreamReceiver *)arg1 didStartGettingImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;

@end
