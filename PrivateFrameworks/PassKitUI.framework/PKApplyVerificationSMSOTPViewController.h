
@interface PKApplyVerificationSMSOTPViewController : PKApplyExplanationViewController <PKOneTimeCodeViewDelegate> {
    UIBarButtonItem * _activityButton;
    bool  _isBodyButtonSkipToDocUpload;
    UIBarButtonItem * _nextButton;
    PKOneTimeCodeView * _otpView;
    bool  _showingSpinner;
    PKApplyVerificationPage * _verificationPage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelApplication;
- (void)_nextButtonPressed;
- (void)_requestNewCode;
- (bool)_shouldDisplayErrorForEntryError:(unsigned long long)arg1;
- (unsigned long long)_smsOTPViewEntryErrorFromError:(id)arg1;
- (void)_submitCode:(id)arg1 skippedVerification:(bool)arg2;
- (void)_terminateFlow;
- (void)_updateViewWithEntryError:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)_withdrawApplication;
- (id)analyticsPageTag;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 verificationPage:(id)arg4;
- (void)oneTimeCodeView:(id)arg1 didEnterCode:(id)arg2;
- (void)showNavigationBarSpinner:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
