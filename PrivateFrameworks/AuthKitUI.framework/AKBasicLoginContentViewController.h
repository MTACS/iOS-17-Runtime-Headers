
@interface AKBasicLoginContentViewController : UIViewController

@property (nonatomic, readonly) AKBasicLoginContentViewControllerContainerView *contentContainerView;

- (id)contentContainerView;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
