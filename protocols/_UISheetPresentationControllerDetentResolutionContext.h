
@protocol _UISheetPresentationControllerDetentResolutionContext <UISheetPresentationControllerDetentResolutionContext>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_containerBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_containerSafeAreaInsets;
- (UITraitCollection *)_containerTraitCollection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveKeyboardFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fullHeightPresentedViewFrame;
- (bool)_isEdgeAttached;
- (bool)_isInverted;
- (double)_maximumDetentValue;

@end
