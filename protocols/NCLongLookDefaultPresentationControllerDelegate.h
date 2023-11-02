
@protocol NCLongLookDefaultPresentationControllerDelegate <PLExpandedPlatterPresentationControllerDelegate>

@required

- (UIView *)customBackgroundContainerViewForExpandedPlatterPresentationController:(PLExpandedPlatterPresentationController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedPlatterPresentationController:(PLExpandedPlatterPresentationController *)arg1 frameForTransitionViewInPresentationSuperview:(UIView *)arg2;
- (bool)expandedPlatterPresentationControllerShouldProvideBackground:(PLExpandedPlatterPresentationController *)arg1;

@end
