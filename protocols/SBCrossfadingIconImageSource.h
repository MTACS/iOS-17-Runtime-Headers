
@protocol SBCrossfadingIconImageSource <NSObject>

@required

- (double)continuousCornerRadius;
- (void)setShowsSquareCorners:(bool)arg1;
- (bool)showsSquareCorners;
- (UIView *)sourceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@optional

- (UIView *)sourceBackgroundView:(UIView *)arg1;

@end
