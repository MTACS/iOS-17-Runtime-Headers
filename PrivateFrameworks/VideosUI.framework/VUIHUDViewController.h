
@interface VUIHUDViewController : UIViewController {
    UIViewController * _hudContentViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _playerViewSize;
    int  _tabIndex;
    NSObject * _tabObserver;
}

@property (nonatomic, retain) UIViewController *hudContentViewController;
@property (nonatomic) struct CGSize { double x1; double x2; } playerViewSize;
@property (nonatomic) int tabIndex;
@property (nonatomic, retain) NSObject *tabObserver;

- (void).cxx_destruct;
- (void)_addViewControllerToHud;
- (struct CGSize { double x1; double x2; })_computePreferredContentSize;
- (void)dealloc;
- (id)hudContentViewController;
- (id)init;
- (struct CGSize { double x1; double x2; })playerViewSize;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setHudContentViewController:(id)arg1;
- (void)setPlayerViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTabIndex:(int)arg1;
- (void)setTabObserver:(id)arg1;
- (int)tabIndex;
- (id)tabObserver;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
