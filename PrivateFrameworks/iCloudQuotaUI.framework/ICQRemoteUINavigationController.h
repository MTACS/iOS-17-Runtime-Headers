
@interface ICQRemoteUINavigationController : UINavigationController {
    bool  _didCompletePurchaseFlowWithSuccess;
    bool  _shouldSignalDelegateOnDismiss;
}

@property (nonatomic) bool didCompletePurchaseFlowWithSuccess;
@property (nonatomic) bool shouldSignalDelegateOnDismiss;

- (bool)didCompletePurchaseFlowWithSuccess;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)setDidCompletePurchaseFlowWithSuccess:(bool)arg1;
- (void)setShouldSignalDelegateOnDismiss:(bool)arg1;
- (bool)shouldSignalDelegateOnDismiss;
- (void)viewDidDisappear:(bool)arg1;

@end
