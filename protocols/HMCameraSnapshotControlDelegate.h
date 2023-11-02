
@protocol HMCameraSnapshotControlDelegate <NSObject>

@optional

- (void)cameraSnapshotControl:(HMCameraSnapshotControl *)arg1 didTakeSnapshot:(HMCameraSnapshot *)arg2 error:(NSError *)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(HMCameraSnapshotControl *)arg1;

@end
