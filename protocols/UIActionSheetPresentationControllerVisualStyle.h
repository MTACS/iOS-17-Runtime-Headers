
@protocol UIActionSheetPresentationControllerVisualStyle <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForContainerView:(UIView *)arg1;
- (double)cornerRadius;
- (UIColor *)dimmingViewColor;
- (UIView<UIActionSheetPresentationControllerDismissActionView> *)dismissActionView;
- (double)dismissToContentSpacing;

@end
