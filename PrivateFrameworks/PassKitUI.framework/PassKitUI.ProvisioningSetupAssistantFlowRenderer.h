
@interface PassKitUI.ProvisioningSetupAssistantFlowRenderer : _TtCs12_SwiftObject <PKUIFlowManagerRenderer> {
    void currentViewControllers;
    void existingViewControllers;
    void flowDelegate;
    void initialViewController;
    void navController;
    void onFirstViewControllerShown;
}

@property (nonatomic) <PKUIFlowManagerRendererDelegate> *flowDelegate;

- (id)createChildRenderer;
- (void)dismissWithViewController:(id)arg1 animated:(bool)arg2;
- (id)flowDelegate;
- (id)navViewControllers;
- (void)presentWithViewController:(id)arg1 animated:(bool)arg2;
- (void)pushWithViewController:(id)arg1 animated:(bool)arg2;
- (id)rootViewController;
- (void)setFlowDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;

@end
