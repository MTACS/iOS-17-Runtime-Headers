
@protocol SKUISearchControllerDelegate <NSObject, UISearchControllerDelegate>

@required

- (SKUIClientContext *)searchControllerClientContext:(SKUISearchController *)arg1;
- (void)searchControllerWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;

@end
