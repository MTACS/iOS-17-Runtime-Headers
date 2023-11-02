
@interface CARSetupPromptPresenter : NSObject <CARSetupPromptPresenting, PRXFlowDelegate> {
    UINavigationController * _navigationController;
    UIViewController * _presentingViewController;
    CARSetupPromptDirector * _promptDirector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) CARSetupPromptDirector *promptDirector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentPromptViewController:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1;
- (id)navigationController;
- (id)presentingViewController;
- (id)promptDirector;
- (void)promptDirector:(id)arg1 wantsToPresentAllowWhileLockedPromptForVehicleName:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)promptDirector:(id)arg1 wantsToPresentConnectPromptWithResponseHandler:(id /* block */)arg2;
- (void)promptDirector:(id)arg1 wantsToPresentEnhancedIntegrationPromptForVehicleName:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)promptDirector:(id)arg1 wantsToPresentUseWirelessPromptWithResponseHandler:(id /* block */)arg2;
- (void)proxCardFlowDidDismiss;
- (void)proxCardFlowWillPresent;
- (void)setNavigationController:(id)arg1;

@end
