
@interface BFFFinishSetupPaymentController : NSObject <BFFFinishSetupFlowControlling, PKPaymentSetupViewControllerDelegate> {
    id /* block */  _completion;
    BYFlowSkipController * _flowSkipController;
    NSObject<BFFFinishSetupFlowHosting> * _host;
    BYPaneFeatureAnalyticsManager * _paneFeatureAnalyticsManager;
    PKPaymentSetupAssistantController * _paymentController;
    UIViewController * _registrationViewController;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BYFlowSkipController *flowSkipController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;
@property (readonly) Class superclass;

+ (id)finishSetupPaymentControllerWithHost:(id)arg1;
+ (bool)hasPrimaryiCloudAccount;
+ (unsigned long long)registrationViewControllerOutstandingRequirements;

- (void).cxx_destruct;
- (void)_completeWithResult:(unsigned long long)arg1 didSetUp:(bool)arg2;
- (void)_userDidTapCancelButton:(id)arg1;
- (bool)canCompleteExtendedInitializationQuickly;
- (id /* block */)completion;
- (bool)controllerNeedsToRun;
- (id)flowSkipController;
- (id)initWithHost:(id)arg1;
- (id)paneFeatureAnalyticsManager;
- (void)performExtendedInitializationWithCompletion:(id /* block */)arg1;
- (id)prerequisiteFlowIdentifier;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFlowSkipController:(id)arg1;
- (void)setPaneFeatureAnalyticsManager:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end
