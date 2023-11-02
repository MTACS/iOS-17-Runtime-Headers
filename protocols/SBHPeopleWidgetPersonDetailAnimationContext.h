
@protocol SBHPeopleWidgetPersonDetailAnimationContext

@required

- (UIView *)backgroundTintView;
- (MTMaterialView *)backgroundView;
- (UIView *)containerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })homeScreenContentFrame;
- (UIView *)homeScreenContentView;
- (UIView *)platterView;
- (SBIconView *)referenceView;
- (double)sourceContentCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentFrame;
- (SBIconView *)sourceView;
- (double)targetContentCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetContentFrame;
- (UIView *)targetView;

@end
