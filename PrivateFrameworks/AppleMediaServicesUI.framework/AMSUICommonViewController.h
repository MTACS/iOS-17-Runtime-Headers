
@interface AMSUICommonViewController : UIViewController

@property (getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:, nonatomic) bool movingFromParentViewController;
@property (getter=isMovingToParentViewController, setter=setIsMovingToParentViewController:, nonatomic) bool movingToParentViewController;
@property (nonatomic, retain) AMSUICommonView *view;

- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)setChildViewController:(id)arg1;
- (void)setView:(id)arg1;
- (void)unsetChildViewController:(id)arg1;
- (id)view;

@end
