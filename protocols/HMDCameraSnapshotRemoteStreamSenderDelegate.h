
@protocol HMDCameraSnapshotRemoteStreamSenderDelegate <NSObject>

@required

- (void)snapshotStreamSender:(HMDCameraSnapshotRemoteStreamSender *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
- (void)snapshotStreamSender:(HMDCameraSnapshotRemoteStreamSender *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;

@end
