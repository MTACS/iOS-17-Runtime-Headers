
@protocol PXUIBadgeTheme <NSObject>

@required

- (UIColor *)afterLabelImageTintColor;
- (double)backgroundAlpha;
- (UIBlurEffect *)backgroundBlurEffect;
- (UIColor *)backgroundBorderColor;
- (double)backgroundBorderWidth;
- (UIColor *)backgroundColor;
- (double)backgroundCornerRadius;
- (Class)backgroundViewClass;
- (double)imageAlpha;
- (CAFilter *)imageCompositingFilter;
- (UIImageSymbolConfiguration *)imageConfiguration;
- (UIColor *)imageTintColor;
- (double)labelAlpha;
- (CAFilter *)labelCompositingFilter;
- (UIFont *)labelFont;
- (UIColor *)labelTextColor;

@end
