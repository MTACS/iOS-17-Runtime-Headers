
@interface PKAccountAutomaticPaymentsHeroViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, UITextViewDelegate> {
    PKAccountAutomaticPaymentsController * _controller;
    unsigned long long  _featureIdentifier;
    PKAccountTermsAndConditionsController * _termsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithController:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
