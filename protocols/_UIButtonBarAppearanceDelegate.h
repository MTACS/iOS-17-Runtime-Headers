
@protocol _UIButtonBarAppearanceDelegate <NSObject, UICoordinateSpace>

@required

- (double)absorptionForItem:(UIBarButtonItem *)arg1;
- (_UIBarButtonItemAppearanceStorage *)appearanceStorage;
- (double)backButtonMargin;
- (double)backButtonMaximumWidth;
- (UIImage *)backIndicatorImage;
- (UIImage *)backIndicatorMaskImage;
- (long long)barType;
- (bool)centerTextButtons;
- (bool)compactMetrics;
- (double)defaultEdgeSpacing;
- (double)defaultTextPadding;
- (unsigned long long)edgesPaddingBarButtonItem:(UIBarButtonItem *)arg1;
- (UIColor *)tintColor;

@optional

- (UIImageSymbolConfiguration *)imageSymbolConfiguration;

@end
