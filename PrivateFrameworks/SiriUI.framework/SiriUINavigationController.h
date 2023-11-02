
@interface SiriUINavigationController : UINavigationController <UIGestureRecognizerDelegate> {
    _SiriUINavigationControllerDelegateAdapter * _delegateAdapter;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=_delegateAdapter, setter=_setDelegateAdapter:, nonatomic, retain) _SiriUINavigationControllerDelegateAdapter *delegateAdapter;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SiriUINavigationTransitioning> *transitionController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_delegateAdapter;
- (void)_handleGestureFromRecognizer:(id)arg1;
- (void)_setDelegateAdapter:(id)arg1;
- (void)_sharedInit;
- (id)delegate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTransitionController:(id)arg1;
- (id)transitionController;
- (void)viewDidLoad;

@end
