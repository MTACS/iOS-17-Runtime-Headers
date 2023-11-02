
@interface SSChromeHelper : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableRectForFullscreenContent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bleedToBottom:(bool)arg3 topBarHeight:(double)arg4 bottomBarHeight:(double)arg5 userInterfaceIdiom:(long long)arg6 multipleScreenshots:(bool)arg7;
+ (long long)backgroundBlurEffectStyle;
+ (double)barButtonItemsLeftOfOpacitySlider;
+ (id)barSeparatorColor;
+ (double)barSeparatorSize;
+ (void)configureNavigationBarAppearance:(id)arg1;
+ (double)contentSwitcherPadding;
+ (double)countIndicatorOffset;
+ (id)createFixedSpaceBarButtonItemWithWidth:(double)arg1;
+ (double)cropsCornerLength;
+ (double)cropsCornerWidth;
+ (double)cropsHandleOutset;
+ (double)defaultBarButtonSpacing;
+ (double)defaultBarButtonWidth;
+ (double)screenshotTopBottomMargin:(long long)arg1;
+ (double)screenshotTopBottomMarginPad;
+ (double)screenshotTopBottomMarginPhone;
+ (id)separatorView;
+ (long long)statusBarStyle;
+ (int)statusBarVisibilityForTraitCollection:(id)arg1 isPortrait:(bool)arg2;
+ (double)widthForContentSwitcher:(id)arg1 forView:(id)arg2;
+ (double)widthForOpacityControlInView:(id)arg1 withContentSwitcher:(id)arg2;

@end
