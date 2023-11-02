
@interface BFFFinishSetupAssistantOptInController : NSObject <BFFFinishSetupFlowControlling, VTUIEnrollTrainingViewControllerDelegate> {
    id /* block */  _completion;
    VTUIEnrollTrainingViewController * _enrollmentController;
    BYFlowSkipController * _flowSkipController;
    BYPaneFeatureAnalyticsManager * _paneFeatureAnalyticsManager;
    BFFFinishSetupAssistantOptInController * _selfReference;
    bool  _willOfferVoiceTrigger;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BYFlowSkipController *flowSkipController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;
@property (readonly) Class superclass;

+ (id)finishSetupAssistantOptInController;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)continueSetup;
- (id)flowSkipController;
- (id)init;
- (id)paneFeatureAnalyticsManager;
- (void)performExtendedInitializationWithCompletion:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFlowSkipController:(id)arg1;
- (void)setPaneFeatureAnalyticsManager:(id)arg1;
- (void)showLearnMore;
- (void)skipSetup;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end
