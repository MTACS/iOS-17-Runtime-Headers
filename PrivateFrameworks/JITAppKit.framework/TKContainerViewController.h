
@interface TKContainerViewController : UIViewController {
    bool  _appearing;
    UINavigationItem * _childNavigationItem;
    UIViewController * _childViewController;
    TKKeyPathObserver * _observer;
}

@property (nonatomic, retain) UIViewController *childViewController;

- (void).cxx_destruct;
- (id)childViewController;
- (void)dealloc;
- (unsigned long long)edgesForExtendedLayout;
- (void)observeChild;
- (void)setChildViewController:(id)arg1;
- (void)updateInternals:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
