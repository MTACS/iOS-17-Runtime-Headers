
@protocol _HMCameraSnapshotControlDelegate <NSObject>

@required

- (void)cameraSnapshotControl:(_HMCameraSnapshotControl *)arg1 didTakeSnapshot:(HMCameraSnapshot *)arg2 error:(NSError *)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(_HMCameraSnapshotControl *)arg1;

@end
