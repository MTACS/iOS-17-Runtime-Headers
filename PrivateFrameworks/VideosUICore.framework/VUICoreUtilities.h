
@interface VUICoreUtilities : NSObject

+ (id)TVUIKitBundle;
+ (id)URLForResource:(id)arg1;
+ (id)VideosUIBundle;
+ (id)VideosUICoreBundle;
+ (id)_URLForResource:(id)arg1 inBundle:(id)arg2;
+ (id)_getImageFromURLorBundle:(id)arg1;
+ (id)_imageForResource:(id)arg1;
+ (id)_vuiCoreResourceMap;
+ (bool)canHandleDecodingOnRenderThread;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGPath { }*)createPathForRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isContinuous:(bool)arg3;
+ (id)defaultPlaceholderImageForUserInterfaceStyle:(unsigned long long)arg1;
+ (double)focusedSizeIncreaseForSize:(struct CGSize { double x1; double x2; })arg1 upscaleFactor:(double)arg2;
+ (void)image:(id)arg1 didCompleteLoadingForCache:(long long)arg2 requestRecord:(id)arg3;
+ (id)imageForResource:(id)arg1 accessibilityDescription:(id)arg2;
+ (id)mobileGestaltStringForKey:(struct __CFString { }*)arg1;
+ (struct _VUICornerRadii { double x1; double x2; double x3; double x4; })radiiFromRadius:(double)arg1;
+ (bool)radiiIsZero:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1;
+ (double)radiusFromCornerRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1;
+ (id)randomColor;
+ (bool)runningAnInternalBuild;
+ (bool)runningUiTest;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(unsigned long long)arg3;
+ (struct CGPath { }*)shadowPathWithCornerRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1 andScaledSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)uiContentSizeCategoryFor:(unsigned long long)arg1;
+ (void)vuiColor:(id)arg1 getRed:(double*)arg2 green:(double*)arg3 blue:(double*)arg4 alpha:(double*)arg5;
+ (unsigned long long)vuiContentSizeCategoryFor:(id)arg1;
+ (unsigned long long)vuiUserInterfaceStyleForInterfaceStyle:(long long)arg1;

@end
