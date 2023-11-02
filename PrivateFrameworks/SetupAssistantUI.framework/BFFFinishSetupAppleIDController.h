
@interface BFFFinishSetupAppleIDController : NSObject <AAUISignInControllerDelegate, BFFFinishSetupFlowControlling> {
    id /* block */  _completion;
    BYFlowSkipController * _flowSkipController;
    BYPaneFeatureAnalyticsManager * _paneFeatureAnalyticsManager;
    BFFFinishSetupAppleIDController * _selfReference;
    AAUISignInController * _signInController;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BYFlowSkipController *flowSkipController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;
@property (readonly) Class superclass;

+ (id)finishSetupAppleIDController;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)flowSkipController;
- (id)paneFeatureAnalyticsManager;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFlowSkipController:(id)arg1;
- (void)setPaneFeatureAnalyticsManager:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithOperationsResults:(id)arg2;
- (void)signInControllerDidCancel:(id)arg1;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end
