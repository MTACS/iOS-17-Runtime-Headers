
@interface PKPassShareRedemptionViewController : PKPaymentSetupOptionsViewController <PKPassShareRedemptionActivationCodeSectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate> {
    PKPassShareRedemptionActivationCodeSectionController * _activationCodeSectionController;
    bool  _analyticsEnabled;
    PKShareRedemptionAnalyticsReporter * _analyticsReporter;
    NSString * _continueButtonText;
    NSString * _continueLaterText;
    NSArray * _displayableSharedEntitlements;
    PKPassEntitlementsComposer * _entitlementComposer;
    OBPrivacyLinkController * _privacyLinkController;
    NSString * _referralSource;
    PKSharePreviewOverviewSectionController * _sharePreviewSectionController;
}

@property (nonatomic, retain) PKPassShareActivationOptions *activationOptions;
@property (nonatomic) bool analyticsEnabled;
@property (nonatomic, readonly) PKShareRedemptionAnalyticsReporter *analyticsReporter;
@property (nonatomic, readonly) PKHeroCardExplainationHeaderView *cardHeaderView;
@property (nonatomic, retain) NSString *continueButtonText;
@property (nonatomic, retain) NSString *continueLaterText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayableSharedEntitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *referralSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureHeaderSize;
- (void)_reloadSections;
- (void)_setDisplayableSharedEntitlements:(id)arg1;
- (void)_updateContinueButtonState;
- (void)activationCodeDidChange;
- (void)activationCodeDidChangeToCode:(id)arg1;
- (id)activationOptions;
- (bool)analyticsEnabled;
- (id)analyticsReporter;
- (void)cancelButtonPressed;
- (id)cardHeaderView;
- (void)continueButtonPressed;
- (id)continueButtonText;
- (void)continueLaterButtonPressed;
- (id)continueLaterText;
- (id)displayableSharedEntitlements;
- (id)init;
- (void)loadView;
- (id)referralSource;
- (void)setActivationOptions:(id)arg1;
- (void)setAnalyticsEnabled:(bool)arg1;
- (void)setContinueButtonText:(id)arg1;
- (void)setContinueLaterText:(id)arg1;
- (void)setDisplayableSharedEntitlements:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setIsEnteringActivationCode:(bool)arg1;
- (void)setReferralSource:(id)arg1;
- (void)sharePreviewSectionControllerDidSelectEntitlements:(id)arg1;
- (void)sharePreviewSectionControllerDidUpdateEntitlements:(id)arg1;
- (void)showFailureUI;
- (void)showLoadingUI;
- (void)showStartingUI;
- (void)showSuccessUI;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
