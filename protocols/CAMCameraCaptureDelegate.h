
@protocol CAMCameraCaptureDelegate <NSObject>

@optional

- (void)cameraViewController:(CAMCameraViewController *)arg1 didCaptureAVAsset:(AVAsset *)arg2 andAudioMix:(AVAudioMix *)arg3 withProperties:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)cameraViewController:(CAMCameraViewController *)arg1 didCaptureLivePhoto:(PHLivePhoto *)arg2 withProperties:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)cameraViewController:(CAMCameraViewController *)arg1 didCapturePhoto:(UIImage *)arg2 withProperties:(NSDictionary *)arg3 error:(NSError *)arg4;

@end
