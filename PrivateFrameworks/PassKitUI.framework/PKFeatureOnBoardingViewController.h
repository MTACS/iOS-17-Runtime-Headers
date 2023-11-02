
@interface PKFeatureOnBoardingViewController : PKOnBoardingViewController {
    PKAppleCardWelcomeExperiment * _appleCardWelcomeExperiment;
    PKApplyController * _applyController;
    PKAccount * _defaultFeatureAccount;
    NSMutableArray * _defaultFeatureAccountCompletions;
    bool  _didBeginOnboardingSubject;
    unsigned long long  _featureIdentifier;
    bool  _featureSupportsAnalytics;
    bool  _fetchedDefaultFeatureAccount;
    PKPaymentInstallmentConfiguration * _installmentConfiguration;
    bool  _isMainFeatureOnboardingPage;
    unsigned long long  _layout;
    long long  _onboardingContext;
    bool  _useCompactLayout;
}

@property (nonatomic, retain) PKApplyController *applyController;
@property (nonatomic, retain) PKPaymentInstallmentConfiguration *installmentConfiguration;

- (void).cxx_destruct;
- (id)_analyticsPartialEventDictionaryForButtonTapWithButtonTagKey:(id)arg1;
- (id)_appleCardWelcomeExperiment;
- (void)_beginReportingIfNecessary;
- (void)_checkSecurityCapabilities:(unsigned long long)arg1 nextStep:(id /* block */)arg2;
- (void)_defaultFeatureAccountAnalyticsWithCompletion:(id /* block */)arg1;
- (void)_defaultFeatureAccountWithCompletion:(id /* block */)arg1;
- (void)_endReportingIfNecessary;
- (void)_handleAccountCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleApplyFlowWithCompletion:(id /* block */)arg1;
- (void)_openSecondaryActionItem;
- (void)_openTermsAndConditions;
- (void)_reportAnalyticsSubject:(id)arg1 withPartialEventDictionary:(id)arg2;
- (void)_reportAnalyticsViewDidAppear:(bool)arg1;
- (void)_reportCancelTapped;
- (void)_reportContinueTapped;
- (void)_reportRatesAndTermsTapped;
- (id)_subjectForFeature:(unsigned long long)arg1;
- (id)applyController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidUpdateLayout:(id)arg1;
- (void)handleProductAvailable;
- (void)handleSetupLater;
- (id)initWithParentFlowController:(id)arg1 setupDelegate:(id)arg2 setupContext:(long long)arg3 onboardingContext:(long long)arg4 featureIdentifier:(unsigned long long)arg5 provisioningController:(id)arg6 paymentSetupProduct:(id)arg7 currentPage:(id)arg8;
- (id)installmentConfiguration;
- (id)loadHeroImageFromWelcomeExperiment;
- (id)nextOnboardingViewControllerWithPage:(id)arg1 product:(id)arg2;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)setApplyController:(id)arg1;
- (void)setInstallmentConfiguration:(id)arg1;
- (void)updateForHeroImage;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
