
@protocol CAMCameraConfigurationDelegate <NSObject>

@optional

- (void)cameraViewControllerDidCompleteConfigurationForCaptureMode:(long long)arg1 captureDevice:(long long)arg2;
- (void)cameraViewControllerWillBeginConfigurationForCaptureMode:(long long)arg1 captureDevice:(long long)arg2;

@end
