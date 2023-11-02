
@interface _VUITVAppNavigationController : UINavigationController <UINavigationControllerDelegate, VUITVAppRootViewController> {
    unsigned long long  _maxNavControllerStackDepth;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxNavControllerStackDepth;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleMaxStackDepth;
- (void)_notifyObserversOfViewControllerChange:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)currentNavigationController;
- (id)currentViewController;
- (void)dismissAllModals:(id /* block */)arg1;
- (id)initWithRootViewController:(id)arg1;
- (void)loadView;
- (unsigned long long)maxNavControllerStackDepth;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)observers;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMaxNavControllerStackDepth:(unsigned long long)arg1;
- (void)setObservers:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)vui_addControllerObserver:(id)arg1;
- (id)vui_popToRootViewControllerAnimated:(bool)arg1;
- (id)vui_popViewControllerAnimated:(bool)arg1;
- (void)vui_pushViewController:(id)arg1 animated:(bool)arg2;
- (id)vui_rootViewController;
- (void)vui_setViewControllers:(id)arg1 animated:(bool)arg2;
- (id)vui_topViewController;
- (id)vui_viewControllers;
- (id)vui_visibleViewController;

@end
