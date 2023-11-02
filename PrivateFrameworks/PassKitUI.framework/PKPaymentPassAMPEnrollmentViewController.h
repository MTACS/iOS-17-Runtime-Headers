
@interface PKPaymentPassAMPEnrollmentViewController : PKExplanationViewController <PKLoadingUIProviding, RemoteUIControllerDelegate, UITextViewDelegate> {
    <PKPaymentPassAMPEnrollmentViewControllerFlowDelegate> * _flowItemDelegate;
    PKSecureElementPass * _pass;
    PKPaymentProvisioningController * _provisioningController;
    RemoteUIController * _termsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentPassAMPEnrollmentViewControllerFlowDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)shouldOfferAMPEnrollmentForPass:(id)arg1 provisioningController:(id)arg2 withCompletion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_createBodyImage:(id)arg1;
- (void)_displayTermsWithCompletion:(id /* block */)arg1;
- (void)_done;
- (void)_performAMPEnrollmentWithPass:(id)arg1 asDefault:(bool)arg2 completion:(id /* block */)arg3;
- (void)_performTerms;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (void)_updateBodyImage;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)flowItemDelegate;
- (id)initWithProvisioningController:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3;
- (void)loadView;
- (void)proceedToNextScreen;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)setFlowItemDelegate:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
