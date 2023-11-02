
@interface CoreIDVUI.IDScanCameraReader : CRCameraReader <CRCameraReaderDelegate> {
    void detectIDCardCorners;
    void didCaptureImage;
    void fallBackTimeInSeconds;
    void onError;
    void shouldReturnImage;
    void timer;
}

- (void).cxx_destruct;
- (id)cameraReader:(id)arg1 auxiliaryIDCornerDetection:(struct __CVBuffer { }*)arg2;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (bool)cameraReader:(id)arg1 shouldReturnIDImage:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (void)timerAction;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
