
@interface CSDeviceDetermination : NSObject

+ (bool)_screenScaleMatchesZoomScale:(double)arg1;
+ (unsigned long long)_zoomAwareCategoryForDevice:(unsigned long long)arg1 zoomVariant:(unsigned long long)arg2;
+ (double)_zoomScaleForBaseDevice:(unsigned long long)arg1;
+ (unsigned long long)baseCategory;
+ (unsigned long long)categoryFromScreenSize;
+ (unsigned long long)effectiveCategory;
+ (bool)isCategoryPad:(unsigned long long)arg1;
+ (bool)isCategoryPhone:(unsigned long long)arg1;

@end
