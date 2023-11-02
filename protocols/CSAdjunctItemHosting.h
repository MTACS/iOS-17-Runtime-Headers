
@protocol CSAdjunctItemHosting <NSObject, MTVisualStylingRequiring>

@required

- (struct CGSize { double x1; double x2; })preferredContentSize;
- (UIView *)view;

@optional

- (double)containerCornerRadius;
- (bool)insetsMargins;
- (PLPlatterView *)platterView;
- (void)setContainerCornerRadius:(double)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)usesBackgroundView;

@end
