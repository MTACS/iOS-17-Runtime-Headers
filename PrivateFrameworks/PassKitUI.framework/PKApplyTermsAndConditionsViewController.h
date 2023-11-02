
@interface PKApplyTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController <PKViewControllerPreflightable> {
    PKApplyController * _applyController;
    CLInUseAssertion * _inUseAssertion;
    bool  _preflightPDFTerms;
    NSString * _termsIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preflightPDFTerms;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_terminateSetupFlow;
- (void)dealloc;
- (id)displayTitle;
- (void)htmlTermsDataWithCompletion:(id /* block */)arg1;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4;
- (void)initalTermsDataWithCompletion:(id /* block */)arg1;
- (void)pdfTermsDataWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)preflightPDFTerms;
- (void)presentErrorAlert;
- (void)reportAnalyticsForTermsLink:(id)arg1;
- (void)setPreflightPDFTerms:(bool)arg1;
- (void)termsAccepted:(bool)arg1 completion:(id /* block */)arg2;
- (void)termsShown;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
