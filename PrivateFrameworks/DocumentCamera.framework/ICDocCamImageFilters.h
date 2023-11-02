
@interface ICDocCamImageFilters : NSObject

+ (id)bradleyAdaptiveThreshold:(id)arg1;
+ (id)bradleyAdaptiveThreshold:(id)arg1 orientation:(long long)arg2;
+ (id)bradleyAdaptiveThresholdWithBlur:(id)arg1 orientation:(long long)arg2;
+ (id)colorDocument:(id)arg1 orientation:(long long)arg2;
+ (id)convertImageToGrayScale:(id)arg1;
+ (id)filteredImage:(id)arg1 imageFilterType:(short)arg2;
+ (id)filteredImage:(id)arg1 orientation:(long long)arg2 imageFilterType:(short)arg3;
+ (id)grayscale:(id)arg1 orientation:(long long)arg2;
+ (id)grayscaleDocument:(id)arg1 orientation:(long long)arg2;
+ (id)imageFilterNames;
+ (short)imageFilterTypeFromName:(id)arg1;
+ (short)imageFilterTypeFromNonLocalizedName:(id)arg1;
+ (id)imageWithRGBColorspaceFromImage:(id)arg1;
+ (id)localizedImageFilterNameForName:(id)arg1;
+ (id)localizedImageFilterNameForType:(short)arg1;
+ (id)nonLocalizedImageFilterNameForType:(short)arg1;
+ (id)nonLocalizedImageFilterNames;
+ (id)perspectiveCorrectedCIImageFromCIImage:(id)arg1 imageQuad:(id)arg2;
+ (id)perspectiveCorrectedImageFromImage:(id)arg1 imageQuad:(id)arg2;
+ (id)perspectiveCorrectedImageFromImage:(id)arg1 normalizedImageQuad:(id)arg2;
+ (id)sharedCoreImageContext;
+ (id)whiteboardAndSaturation:(id)arg1 orientation:(long long)arg2;
+ (id)whiteboardFilter:(id)arg1 orientation:(long long)arg2;

@end
