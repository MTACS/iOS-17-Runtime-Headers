
@interface STCommunicationSafetyOnboardingController : NSObject <STRestrictionsPINControllerDelegate> {
    id /* block */  _completionBlock;
    NSObject<STRootViewModelCoordinator> * _coordinator;
    bool  _isAnalyticsEnabled;
    bool  _isFeatureEnabled;
    UINavigationController * _navigationController;
    bool  _skipFeatureEnablement;
}

@property (copy) id /* block */ completionBlock;
@property (readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isAnalyticsEnabled;
@property bool isFeatureEnabled;
@property (retain) UINavigationController *navigationController;
@property bool skipFeatureEnablement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAccessoryButtonToHeaderViewForWelcomeController:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)_addTrayButtonToWelcomeController:(id)arg1 localizationKey:(id)arg2 action:(SEL)arg3 isBold:(bool)arg4;
- (void)_continueSelected;
- (id)_createCommunicationSafetyAnalyticsEDUController;
- (id)_createCommunicationSafetyEDUController;
- (id)_createInitialViewController;
- (id)_createPINController;
- (void)_dontShareAnalyticsSelected;
- (void)_notNowSelected;
- (void)_openAboutAnalytics;
- (void)_openLearnMore;
- (void)_shareAnalyticsSelected;
- (id /* block */)completionBlock;
- (id)coordinator;
- (void)didAcceptEnteredPIN;
- (void)didCancelEnteringPIN;
- (id)initWithCoordinator:(id)arg1;
- (bool)isAnalyticsEnabled;
- (bool)isFeatureEnabled;
- (id)navigationController;
- (void)presentOverViewController:(id)arg1 skipFeatureEnablement:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setIsAnalyticsEnabled:(bool)arg1;
- (void)setIsFeatureEnabled:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setSkipFeatureEnablement:(bool)arg1;
- (bool)skipFeatureEnablement;
- (bool)validatePIN:(id)arg1 forPINController:(id)arg2;

@end
