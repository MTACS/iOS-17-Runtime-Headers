
@interface CACContainerViewController : UIViewController {
    UIView * _viewAboveContainedViews;
    NSMutableArray * _viewControllers;
}

@property (nonatomic, readonly) UIView *viewAboveContainedViews;
@property (nonatomic, retain) NSMutableArray *viewControllers;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)installViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)loadView;
- (void)setViewControllers:(id)arg1;
- (void)uninstallViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)viewAboveContainedViews;
- (id)viewControllers;

@end
