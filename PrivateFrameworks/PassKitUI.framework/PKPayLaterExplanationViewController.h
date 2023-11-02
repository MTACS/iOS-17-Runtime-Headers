
@interface PKPayLaterExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKViewControllerPreflightable> {
    PKApplyController * _applyController;
    bool  _didBeginAnalyticsReporter;
    PKPayLaterDynamicContentPage * _dynamicContentPage;
    PKPayLaterDynamicContentPage * _languageDisclosureDynamicContentPage;
    PKPayLaterSetupFlowController * _setupController;
    PKAccountTermsAndConditionsController * _termsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)analyticsDictionaryWithAdditionalDictionary:(id)arg1 pageTag:(id)arg2 setupController:(id)arg3;

- (void).cxx_destruct;
- (id)_analyticsDictionaryWithAdditionalDictionary:(id)arg1;
- (id)_genericError;
- (void)_reportAnalyticsBackPressed;
- (void)_setDynamicContentPage;
- (void)_showLanguageDisclosureIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_showSpinner:(bool)arg1;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithSetupFlowController:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
