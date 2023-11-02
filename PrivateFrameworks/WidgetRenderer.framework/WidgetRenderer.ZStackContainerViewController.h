
@interface WidgetRenderer.ZStackContainerViewController : UIViewController

@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (nonatomic, readonly) bool shouldAutomaticallyForwardAppearanceMethods;

- (bool)_canShowWhileLocked;
- (id)_childViewControllersForAlwaysOnTimelines;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (bool)prefersStatusBarHidden;
- (bool)shouldAutomaticallyForwardAppearanceMethods;

@end
