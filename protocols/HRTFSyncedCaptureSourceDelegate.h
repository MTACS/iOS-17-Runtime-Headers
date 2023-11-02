
@protocol HRTFSyncedCaptureSourceDelegate <NSObject>

@required

- (void)didReceiveVideoData:(AVCaptureVideoPreviewLayer *)arg1 colorData:(AVCaptureSynchronizedSampleBufferData *)arg2 depthData:(AVCaptureSynchronizedDepthData *)arg3 faceObject:(AVMetadataFaceObject *)arg4;
- (void)didStartCaptureSessionWithError:(NSError *)arg1;

@end
