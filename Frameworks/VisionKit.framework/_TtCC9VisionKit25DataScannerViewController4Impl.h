
@interface _TtCC9VisionKit25DataScannerViewController4Impl : NSObject <VKAVCaptureFrameProviderDelegate, VKDataScannerViewControllerBridgeDelegate> {
    void owner;
}

- (void).cxx_destruct;
- (void)avCaptureFrameProvider:(id)arg1 cameraAccessGranted:(bool)arg2;
- (void)avCaptureFrameProvider:(id)arg1 didCapturePhoto:(id)arg2 error:(id)arg3;
- (void)avCaptureFrameProvider:(id)arg1 didChangeIsRunning:(bool)arg2;
- (void)avCaptureFrameProviderDidFinishPreparation:(id)arg1;
- (void)avCaptureFrameProviderDidZoom:(id)arg1;
- (void)cameraRestrictedDidChange:(id)arg1;
- (void)frameProvider:(id)arg1 didChangeSceneLuminosity:(double)arg2;
- (void)frameProvider:(id)arg1 didChangeSceneStabilityState:(unsigned long long)arg2;
- (id)init;

@end
