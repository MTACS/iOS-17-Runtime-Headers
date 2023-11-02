
@interface UIDebuggingInformationOverlayViewController : UIViewController <UISplitViewControllerDelegate> {
    bool  _isFullscreen;
    UINavigationController * _navController;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    UIDebuggingInformationRootTableViewController * _rootTableViewController;
    UIDebuggingInformationContainerView * _shadowContainer;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) bool isFullscreen;
@property struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, retain) UIDebuggingInformationRootTableViewController *rootTableViewController;

- (void).cxx_destruct;
- (id)containerView;
- (void)didReceiveGesture:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isFullscreen;
- (struct CGPoint { double x1; double x2; })offset;
- (id)rootTableViewController;
- (void)setIsFullscreen:(bool)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRootTableViewController:(id)arg1;
- (void)toggleFullscreen;
- (void)viewDidLayoutSubviews;

@end
