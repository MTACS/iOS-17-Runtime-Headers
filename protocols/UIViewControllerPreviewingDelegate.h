
@protocol UIViewControllerPreviewingDelegate <NSObject>

@required

- (void)previewingContext:(id <UIViewControllerPreviewing>)arg1 commitViewController:(UIViewController *)arg2;
- (UIViewController *)previewingContext:(id <UIViewControllerPreviewing>)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
