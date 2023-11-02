
@interface PKBarcodePaymentOnboardingViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, UITextViewDelegate> {
    id /* block */  _continueHandler;
    PKEducationPhone * _educationPhone;
    NSString * _issuerName;
    id /* block */  _terminationHandler;
    PKWatchDeviceImageOverlayView * _watchView;
}

@property (nonatomic, copy) id /* block */ continueHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ terminationHandler;

- (void).cxx_destruct;
- (id)_imageForWatchView;
- (void)_terminateSetupFlow;
- (id /* block */)continueHandler;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewControllerDidSelectDone:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithIssuerName:(id)arg1 context:(long long)arg2;
- (void)setContinueHandler:(id /* block */)arg1;
- (void)setTerminationHandler:(id /* block */)arg1;
- (id /* block */)terminationHandler;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
