
@interface CKNavigationController : UINavigationController

- (id)childViewControllerForStatusBarStyle;
- (id)preferredFocusEnvironments;
- (bool)prefersStatusBarHidden;
- (bool)shouldAutorotate;
- (void)viewDidLayoutSubviews;

@end
