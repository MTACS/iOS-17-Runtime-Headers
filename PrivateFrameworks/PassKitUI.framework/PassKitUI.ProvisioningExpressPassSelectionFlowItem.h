
@interface PassKitUI.ProvisioningExpressPassSelectionFlowItem : NSObject <PKPaymentSetupViewControllerDelegate> {
    void _isCardsOnFileProvisioning;
    void context;
    void delegate;
    void groupedPassesWithPrimaryPass;
    void groupsController;
    void identifier;
    void provisionedPasses;
}

- (void).cxx_destruct;
- (id)init;
- (void)viewController:(id)arg1 didFinishWithPasses:(id)arg2 error:(id)arg3;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end
