
@interface SBModalViewControllerStack : NSObject {
    _SBModalViewControllerStackTransition * _currentTransition;
    <SBModalViewControllerStackDelegate> * _delegate;
    NSMutableArray * _pendingTransitions;
    UIViewController * _presentingViewController;
    NSMutableArray * _viewControllerStack;
}

@property (nonatomic) <SBModalViewControllerStackDelegate> *delegate;
@property (nonatomic, readonly) UIViewController *topViewController;
@property (nonatomic, readonly) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)_addPendingTransition:(id)arg1;
- (void)_addViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_noteDidDismissViewController:(id)arg1;
- (void)_noteDidPresentViewController:(id)arg1;
- (void)_noteWillDismissViewController:(id)arg1 animated:(bool)arg2;
- (void)_noteWillPresentViewController:(id)arg1;
- (void)_performPendingTransitionIfNecessary;
- (id)_popNextPendingTransition;
- (void)_queuePendingTransition:(id)arg1;
- (void)_removePendingTransition:(id)arg1 forSuccess:(bool)arg2;
- (void)_removeViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_setCurrentTransition:(id)arg1;
- (void)addViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (id)initWithPresentingViewController:(id)arg1;
- (void)removeViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)removeViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (id)topViewController;
- (id)viewControllers;

@end
