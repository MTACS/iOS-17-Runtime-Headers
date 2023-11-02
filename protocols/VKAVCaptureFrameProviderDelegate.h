
@protocol VKAVCaptureFrameProviderDelegate <VKFrameProviderDelegate>

@optional

- (void)avCaptureFrameProvider:(VKAVCaptureFrameProvider *)arg1 cameraAccessGranted:(bool)arg2;
- (void)avCaptureFrameProvider:(VKAVCaptureFrameProvider *)arg1 didCapturePhoto:(UIImage *)arg2 error:(NSError *)arg3;
- (void)avCaptureFrameProvider:(VKAVCaptureFrameProvider *)arg1 didChangeIsRunning:(bool)arg2;
- (void)avCaptureFrameProviderDidFinishPreparation:(VKAVCaptureFrameProvider *)arg1;
- (void)avCaptureFrameProviderDidZoom:(VKAVCaptureFrameProvider *)arg1;

@end
