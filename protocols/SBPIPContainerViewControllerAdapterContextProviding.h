
@protocol SBPIPContainerViewControllerAdapterContextProviding <NSObject>

@required

- (unsigned long long)currentCanonicalPosition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveEdgeInsetsForWindowScene:(SBWindowScene *)arg1;
- (NSNumber *)overrideResourcesUsageReductionTimeout;
- (void)rotationAnimationDidBeginToRotation:(long long)arg1 contentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)rotationAnimationDidCompleteToRotation:(long long)arg1 contentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)rotationAnimationWillBeginToRotation:(long long)arg1 contentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)rotationAnimationWillCompleteToRotation:(long long)arg1 contentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)shouldSuppressAssociatedElementsInSystemAperture;
- (void)startAnimationDidBeginWithInitialInterfaceOrientation:(long long)arg1;
- (void)startAnimationDidCompleteWithInitialInterfaceOrientation:(long long)arg1;
- (void)startAnimationWillBeginWithInitialInterfaceOrientation:(long long)arg1 initialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stashedPadding;
- (void)stopAnimationDidBeginWithFinalInterfaceOrientation:(long long)arg1 finalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)stopAnimationDidCompleteWithFinalInterfaceOrientation:(long long)arg1;
- (void)stopAnimationWillBeginWithFinalInterfaceOrientation:(long long)arg1 finalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)toggleUserPreferredScale;
- (void)updatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)windowInterfaceOrientation;

@end
