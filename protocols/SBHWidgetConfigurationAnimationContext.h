
@protocol SBHWidgetConfigurationAnimationContext

@required

- (UIView *)backgroundTintView;
- (MTMaterialView *)backgroundView;
- (UIView *)containerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundingRect;
- (UIView *)homeScreenContentView;
- (SBIconView *)referenceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentFrame;
- (SBIconView *)sourceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetContentFrame;
- (UIView *)targetView;

@end
