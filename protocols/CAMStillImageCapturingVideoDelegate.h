
@protocol CAMStillImageCapturingVideoDelegate <NSObject>

@optional

- (void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(bool)arg1;
- (void)stillImageRequestsDidCompleteCapturingLivePhotoVideo;
- (void)stillImageRequestsDidStopCapturingCTMVideo;
- (void)stillImageRequestsWillRequestCTMVideoCaptureEnd;
- (void)stillImageRequestsWillRequestCTMVideoCaptureStart;
- (void)stillImageRequestsWillStartCapturingLivePhotoVideo;

@end
