
@interface VUIUtilities : NSObject

+ (id)VideosUIBundle;
+ (id)colorFromHexStr:(id)arg1;
+ (id)colorFromRGBStr:(id)arg1;
+ (id)getCurrentQueueLabel;
+ (id)getOSVersion;
+ (void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 properties:(id)arg3 configuration:(struct { struct UIEdgeInsets { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; }*)arg4;
+ (id)gradientLayerLocationsFromSpacings:(id)arg1 height:(double)arg2;
+ (struct TVCornerRadii { double x1; double x2; double x3; double x4; })imageCornerRadiiWithStyle:(long long)arg1;
+ (double)imageCornerRadiusWithStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })imageSizeWithAspectRatio:(double)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2;
+ (long long)interfaceStyleFromTheme:(id)arg1 defaultInterfaceStyle:(long long)arg2;
+ (bool)isInFullscreenOrPipPlayback;
+ (bool)isInRetailDemoMode;
+ (bool)isIpadInterface;
+ (bool)isIpadPortrait;
+ (bool)isPortraitIgnoringFlatOrientation:(long long)arg1 viewSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isSUIEnabled;
+ (bool)isTVApp;
+ (double)libraryCategoryListWidth;
+ (double)libraryCategoryListWidthForWindowWidth:(double)arg1;
+ (double)libraryListMarginToGrid;
+ (unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+ (id)placeholderImageResourceName:(long long)arg1;
+ (id)randomColor;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(id)arg3;
+ (bool)shouldInvalidateLayoutWithPreviousTraitCollection:(id)arg1 newTraitCollection:(id)arg2;
+ (bool)shouldPlayerTabsUseVerticalLayoutForSize:(struct CGSize { double x1; double x2; })arg1 isPhoneSizeClass:(bool)arg2;
+ (long long)textAlignmentWithSemanticContentAttribute:(long long)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vuiRectCenteredXInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 boundsToCenterIn:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 offset:(double)arg3;

@end
