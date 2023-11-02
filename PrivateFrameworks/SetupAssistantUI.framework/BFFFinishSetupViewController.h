
@interface BFFFinishSetupViewController : UIViewController <BFFFinishSetupFlowHosting> {
    BYAnalyticsManager * _analyticsManager;
    <BYCapabilities> * _capabilities;
    NSMutableSet * _completedFlowIdentifiers;
    id /* block */  _completion;
    NSMutableArray * _flowIdentifiers;
    BYFlowSkipController * _flowSkipController;
    FLFollowUpAction * _followUpAction;
    BFFFinishSetupModalNavigationController * _navigationController;
    UIViewController * _newRootViewController;
    id /* block */  _overrideFlowControllerGenerator;
    BYPaneFeatureAnalyticsManager * _paneFeatureAnalyticsManager;
    bool  _setupInProgress;
    NSMutableSet * _skippedFlowIdentifiers;
}

@property (nonatomic, retain) BYAnalyticsManager *analyticsManager;
@property (nonatomic, retain) <BYCapabilities> *capabilities;
@property (nonatomic, retain) BYFlowSkipController *flowSkipController;
@property (nonatomic, retain) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;

+ (id)_keyValueDictionaryForURL:(id)arg1;
+ (id)_orderedFlowIdentifiersFromFlowIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (void)_complete;
- (void)_didSatisfyInitializationForFlowController:(id)arg1;
- (void)_didSatisfyPreconditionsForFlowController:(id)arg1;
- (void)_ensureNavigationControllerWithViewController:(id)arg1 pushCompletion:(id /* block */)arg2;
- (id)_flowControllerForFlowIdentifier:(id)arg1;
- (id)_flowControllerForNextFlowIdentifier;
- (void)_flowDidFinishForIdentifiers:(id)arg1 result:(unsigned long long)arg2;
- (void)_performExtendedInitializationForFlowController:(id)arg1;
- (bool)_presentPreconditionViewControllerIfNecessaryForFlowController:(id)arg1;
- (void)_pushViewControllerOntoNavigationController:(id)arg1 completion:(id /* block */)arg2;
- (void)_startNextFlowIdentifier;
- (id)analyticsManager;
- (id)capabilities;
- (bool)didCompleteFlowInFinishSetup:(id)arg1;
- (bool)didSkipFlowInFinishSetup:(id)arg1;
- (id)flowSkipController;
- (id)init;
- (void)loadView;
- (id)paneFeatureAnalyticsManager;
- (long long)preferredStatusBarStyle;
- (void)processURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setAnalyticsManager:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setFlowSkipController:(id)arg1;
- (void)setOverrideFlowControllerGenerator:(id /* block */)arg1;
- (void)setPaneFeatureAnalyticsManager:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
