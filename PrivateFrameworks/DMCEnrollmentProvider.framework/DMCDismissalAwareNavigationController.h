
@interface DMCDismissalAwareNavigationController : UINavigationController {
    bool  _isPresentingAlert;
    bool  _isPushBlocked;
    bool  _pendingPushAnimated;
    NSArray * _pendingViewControllers;
    id /* block */  _transitionCompletionBlock;
}

@property (nonatomic) bool isPresentingAlert;
@property (nonatomic) bool isPushBlocked;
@property (nonatomic) bool pendingPushAnimated;
@property (nonatomic, retain) NSArray *pendingViewControllers;
@property (nonatomic, copy) id /* block */ transitionCompletionBlock;

- (void).cxx_destruct;
- (void)blockNavigationPush;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (bool)isPresentingAlert;
- (bool)isPushBlocked;
- (bool)pendingPushAnimated;
- (id)pendingViewControllers;
- (void)presentAlert:(id)arg1 animated:(bool)arg2;
- (id)rootViewController;
- (void)setIsPresentingAlert:(bool)arg1;
- (void)setIsPushBlocked:(bool)arg1;
- (void)setPendingPushAnimated:(bool)arg1;
- (void)setPendingViewControllers:(id)arg1;
- (void)setTransitionCompletionBlock:(id /* block */)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (id /* block */)transitionCompletionBlock;
- (void)unblockNavigationPush;
- (void)viewDidDisappear:(bool)arg1;

@end
