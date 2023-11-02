
@interface _SBHUDHostViewController : SBFTouchPassThroughViewController <SBViewControllerTransitionContextDelegate> {
    SBHUDController * _HUDController;
    NSMutableArray * _activeTransitionContexts;
    <_SBHUDHostViewControllerDelegate> * _delegate;
    NSMutableSet * _dismissingHUDsTransitionContexts;
    NSMutableSet * _executingDismissalHUDs;
    NSMutableSet * _presentedHUDs;
    NSMutableSet * _presentingHUDs;
    NSMutableSet * _presentingHUDsTransitionContexts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildTransitionContextToPresentHUD:(id)arg1 dismissHUD:(id)arg2 animated:(bool)arg3 delegate:(id)arg4 containerView:(id)arg5 completion:(id /* block */)arg6;
- (bool)_canShowWhileLocked;
- (void)_executeDismissHUD:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_executePresentNewHUD:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_executeViewControllerTransitionContext:(id)arg1;
- (id)_transitionContextMatchingHUD:(id)arg1 withinContainer:(id)arg2;
- (id)description;
- (unsigned long long)supportedInterfaceOrientations;
- (void)transitionDidFinish:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
