
@interface SearchUIBackgroundColorUtilities : NSObject

+ (id)averageColorOfUIColors:(id)arg1;
+ (bool)backgroundColorPrefersWhiteForegroundText:(id)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (void)computeResolvedColoringForColorRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)defaultBackgroundColor;
+ (id)hexStringFromColor:(id)arg1;
+ (bool)isDefaultUIColorInUIColors:(id)arg1;
+ (void)overrideAppearance:(id)arg1 onView:(id)arg2;
+ (id)randomColor;
+ (void)resolvedColoringForColorRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)rgbCompatibleColorForColor:(id)arg1;
+ (double)tintedRGBValueForValue:(double)arg1 isLight:(bool)arg2 colorTintStyle:(int)arg3;
+ (id)tintedUIColorsFromUIColors:(id)arg1 withColorRequest:(id)arg2 tintStyle:(int)arg3;

@end
