
@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_preventsAppearanceProxyCustomization;

- (bool)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (bool)_viewControllerUnderlapsStatusBar;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
