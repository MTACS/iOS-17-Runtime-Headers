
@interface _SFCreditCardCaptureViewController : UINavigationController <CRCameraReaderDelegate> {
    CRCameraReader * _reader;
    WBSCreditCardData * _receivedCardData;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFCreditCardCaptureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canCapture;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (id)init;
- (void)viewDidAppear:(bool)arg1;

@end
