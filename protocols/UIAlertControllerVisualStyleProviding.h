
@protocol UIAlertControllerVisualStyleProviding <NSObject>

@required

- (_UIAlertControllerView *)platformStyleViewForAlertController:(UIAlertController *)arg1 inIdiom:(long long)arg2;
- (UIAlertControllerVisualStyle *)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(UITraitCollection *)arg2 descriptor:(UIAlertControllerDescriptor *)arg3;

@optional

- (UIPresentationController *)platformStylePresentationControllerForPresentedController:(UIViewController *)arg1 presentingController:(UIViewController *)arg2 sourceController:(UIViewController *)arg3 style:(long long)arg4;
- (<UIViewControllerTransitioningDelegate> *)preferredTransitioningDelegate;

@end
