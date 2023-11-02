
@protocol CAMStillImageCaptureRequestDelegate <NSObject>

@optional

- (void)stillImageRequestDidBeginCaptureBeforeResolvingSettings:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestDidCompleteCapture:(CAMStillImageCaptureRequest *)arg1 error:(NSError *)arg2;
- (void)stillImageRequestDidCompleteStillImageCapture:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMStillImageCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteStillImageRemotePersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteVideoCapture:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMVideoCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteVideoLocalPersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteVideoRemotePersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidStartCapturing:(CAMStillImageCaptureRequest *)arg1 resolvedSettings:(CAMStillImageCaptureResolvedSettings *)arg2;
- (void)stillImageRequestDidStopCapturingStillImage:(CAMStillImageCaptureRequest *)arg1;

@end
