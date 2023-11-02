
@interface SidebarViewController : UIViewController {
    UIViewController * _contentViewController;
    UIView * _verticalSeparator;
}

@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic, readonly) double separatorWidth;

- (void).cxx_destruct;
- (id)contentViewController;
- (double)separatorWidth;
- (void)setContentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
