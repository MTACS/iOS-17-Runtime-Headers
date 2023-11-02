
@protocol CAMStillImageCaptureDelegate <NSObject>

@optional

- (void)stillImageRequest:(CAMStillImageCaptureRequest *)arg1 didCompleteStillImageCaptureWithResult:(CAMStillImageCaptureResult *)arg2;
- (void)stillImageRequest:(CAMStillImageCaptureRequest *)arg1 didCompleteVideoCaptureWithResult:(CAMVideoCaptureResult *)arg2;
- (void)stillImageRequest:(CAMStillImageCaptureRequest *)arg1 didStopCapturingCTMVideoForCoordinationInfo:(CAMCaptureCoordinationInfo *)arg2;
- (void)stillImageRequest:(CAMStillImageCaptureRequest *)arg1 didStopCapturingLivePhotoVideoForCoordinationInfo:(CAMCaptureCoordinationInfo *)arg2;
- (void)stillImageRequestDidBeginCaptureBeforeResolvingSettings:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestDidCompleteCapture:(CAMStillImageCaptureRequest *)arg1 error:(NSError *)arg2;
- (void)stillImageRequestDidStartCapturing:(CAMStillImageCaptureRequest *)arg1 resolvedSettings:(CAMStillImageCaptureResolvedSettings *)arg2;
- (void)stillImageRequestDidStopCapturingStillImage:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestDidUnblockResponsiveCapture:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestWillStartCapturingVideo:(CAMStillImageCaptureRequest *)arg1;

@end
