
@protocol TVRemoteAlertVisualStyleProviding <NSObject>

@required

- (bool)allowsSwipeToDismiss;
- (bool)allowsTapToDismiss;
- (TVRMaterialView *)backgroundMaterialView;
- (double)crossfadeDuration;
- (UIVisualEffect *)foregroundVisualEffect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForParentView:(UIView *)arg1;
- (double)maximizedCornerRadius;
- (double)minimizedCornerRadius;
- (double)remoteHeight;
- (double)remoteWidth;

@end
