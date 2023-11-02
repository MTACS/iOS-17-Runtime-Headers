
@protocol CKNavigationBarCanvasViewDelegate <NSObject>

@required

- (UILabel *)locationLabel;
- (bool)shouldConfigureForJunkModal;
- (bool)shouldShowAvatarView;
- (bool)splitViewControllerIsCollapsed;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })systemMinimumLayoutMarginsForView:(UIView *)arg1;

@end
