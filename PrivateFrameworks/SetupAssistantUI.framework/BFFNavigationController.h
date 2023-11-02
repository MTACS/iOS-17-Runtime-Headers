
@interface BFFNavigationController : UINavigationController <UINavigationControllerDelegate> {
    bool  _animating;
    NSMutableDictionary * _appearanceHandlers;
    UIColor * _backgroundColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _forcedPreferredContentSize;
    bool  _ignoreDismissals;
    NSMutableArray * _observers;
    long long  _pendingShowOperation;
    bool  _pushWithoutDeferringTransitionsWhileInBackground;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } forcedPreferredContentSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreDismissals;
@property (nonatomic) bool pushWithoutDeferringTransitionsWhileInBackground;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowTextServices;
- (void)_reapObservers;
- (bool)_usesTransitionController;
- (void)addDelegateObserver:(id)arg1;
- (id)backgroundColor;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })forcedPreferredContentSize;
- (bool)ignoreDismissals;
- (id)init;
- (id)initIgnoringDismissals:(bool)arg1;
- (bool)isAnimating;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (void)popToViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)pushViewController:(id)arg1 completion:(id /* block */)arg2;
- (bool)pushWithoutDeferringTransitionsWhileInBackground;
- (void)removeDelegateObserver:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForcedPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIgnoreDismissals:(bool)arg1;
- (void)setPushWithoutDeferringTransitionsWhileInBackground:(bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;

@end
