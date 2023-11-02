
@interface PCActivityUtility : NSObject

+ (bool)activity:(id)arg1 isLessThan:(id)arg2;
+ (id)activityFrom:(id)arg1;
+ (id)composedImageFor:(id)arg1;
+ (id)composedImageFor:(id)arg1 assetType:(long long)arg2;
+ (id)composedImageWithArtworkFor:(id)arg1 assetType:(long long)arg2;
+ (id)composedImageWithDeviceImage:(id)arg1 badgeImage:(id)arg2;
+ (id)deviceNameFor:(id)arg1;
+ (id)disambiguationButtonImageForActivity:(id)arg1;
+ (id)formattedDurationFor:(double)arg1;
+ (id)iconForBundleIdentifier:(id)arg1;
+ (id)imageForAssetType:(long long)arg1;
+ (id)order:(id)arg1;
+ (id)scaleImageIfNeeded:(id)arg1 toFitSize:(struct CGSize { double x1; double x2; })arg2 withCornerRadius:(double)arg3;

@end
