
@protocol CNKFaceTimePiPSourceProviding

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRestoreAnimation;
- (struct CGSize { double x1; double x2; })preferredPiPContentAspectRatio;
- (bool)restoreViewControllerHierarchyWhenExitingPiP;
- (UIViewController *)viewControllerForPiP;

@end
