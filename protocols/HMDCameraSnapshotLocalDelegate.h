
@protocol HMDCameraSnapshotLocalDelegate <NSObject>

@required

- (void)snapshotLocal:(HMDCameraSnapshotLocal *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSnapshotSessionID *)arg4;

@end
