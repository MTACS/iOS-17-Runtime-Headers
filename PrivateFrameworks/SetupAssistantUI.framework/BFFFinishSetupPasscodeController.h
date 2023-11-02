
@interface BFFFinishSetupPasscodeController : NSObject <BFFFinishSetupFlowControlling, BFFPasscodeViewControllerDelegate> {
    id /* block */  _completion;
    BYFlowSkipController * _flowSkipController;
    BYPaneFeatureAnalyticsManager * _paneFeatureAnalyticsManager;
    BFFPasscodeViewController * _passcodeViewController;
    BFFFinishSetupPasscodeController * _selfReference;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) BYFlowSkipController *flowSkipController;
@property (nonatomic, retain) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;

+ (id)finishSetupPasscodeController;

- (void).cxx_destruct;
- (void)_completeWithPasscode:(id)arg1 result:(unsigned long long)arg2;
- (void)_userDidTapCancelButton:(id)arg1;
- (id /* block */)completion;
- (id)flowSkipController;
- (id)paneFeatureAnalyticsManager;
- (void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFlowSkipController:(id)arg1;
- (void)setPaneFeatureAnalyticsManager:(id)arg1;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end
