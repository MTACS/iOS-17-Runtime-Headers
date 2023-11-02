
@interface DBWidgetStackViewController : UIViewController {
    NSArray * _currentConstraints;
    NSArray * _widgetViewControllers;
}

@property (nonatomic, retain) NSArray *currentConstraints;
@property (nonatomic, readonly) unsigned long long visibleCount;
@property (nonatomic, retain) NSArray *widgetViewControllers;

- (void).cxx_destruct;
- (void)_reloadConstraints;
- (void)_setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 forView:(id)arg2;
- (void)animateUpdateForWidgetViewController:(id)arg1 updateBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)animateWithUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)currentConstraints;
- (id)linearFocusItems;
- (void)setCurrentConstraints:(id)arg1;
- (void)setWidgetViewControllers:(id)arg1;
- (void)viewDidLoad;
- (unsigned long long)visibleCount;
- (id)widgetViewControllers;

@end
