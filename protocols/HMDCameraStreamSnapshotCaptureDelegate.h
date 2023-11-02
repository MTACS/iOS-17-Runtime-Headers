
@protocol HMDCameraStreamSnapshotCaptureDelegate <NSObject>

@required

- (void)streamSnapshotCapture:(HMDCameraStreamSnapshotCapture *)arg1 didGetLastSnapshot:(HMDCameraSnapshotData *)arg2;
- (void)streamSnapshotCapture:(HMDCameraStreamSnapshotCapture *)arg1 didGetNewSnapshot:(HMDCameraSnapshotData *)arg2;

@end
