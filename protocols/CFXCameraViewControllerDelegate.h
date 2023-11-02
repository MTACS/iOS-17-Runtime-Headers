
@protocol CFXCameraViewControllerDelegate <NSObject>

@optional

- (void)cameraViewController:(CFXCameraViewController *)arg1 didCaptureMediaItem:(CFXMediaItem *)arg2;
- (void)cameraViewController:(CFXCameraViewController *)arg1 didChangeEffectsState:(long long)arg2;
- (void)cameraViewController:(CFXCameraViewController *)arg1 didDropFrame:(struct __CVBuffer { }*)arg2;
- (void)cameraViewController:(CFXCameraViewController *)arg1 didRenderFrame:(CFXFrame *)arg2;
- (void)cameraViewController:(CFXCameraViewController *)arg1 presentationRectWasPinchedWithState:(long long)arg2 scale:(double)arg3 velocity:(double)arg4;
- (void)cameraViewControllerDidStartCaptureSession:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerDidStopCaptureSession:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerDoneButtonWasTapped:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerEffectsButtonWasTapped:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerPresentationRectWasDoubleTapped:(CFXCameraViewController *)arg1;

@end
