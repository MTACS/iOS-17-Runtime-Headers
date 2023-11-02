
@protocol _UIPopoverPresentationControllerSourceItem_Internal <UIPopoverPresentationControllerSourceItem>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInCoordinateSpace:(id <UICoordinateSpace>)arg1 window:(UIWindow *)arg2;
- (UIViewController *)_nearestViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectForPresentationInWindow:(UIWindow *)arg1;
- (UIView *)_sourceViewForPresentationInWindow:(UIWindow *)arg1;

@end
