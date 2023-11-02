
@protocol PUImportOneUpTransitioning

@required

- (void)didTransitionFromViewController:(UIViewController *)arg1 toViewController:(UIViewController *)arg2 withTransitionItems:(NSArray *)arg3;
- (void)prepareTransitionItemViewForDestination:(PUImportOneUpTransitionItem *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrameForTransitionItem:(PUImportOneUpTransitionItem *)arg1;
- (NSArray *)transitionItemsForContext:(id <UIViewControllerContextTransitioning>)arg1;
- (void)willTransitionFromViewController:(UIViewController *)arg1 toViewController:(UIViewController *)arg2 withTransitionItems:(NSArray *)arg3;

@end
