
@interface PIPipelineFilters : NSObject

+ (id)applyOrientationFilter;
+ (id)autoCropFilter;
+ (id)autoloopStabilizedVideoFilter;
+ (id)exifOrientationAndCropStraightenOnly;
+ (id)histogramOptimizationFilter;
+ (id)inputToCropFilter;
+ (id)iosCropToolFilter;
+ (id)noCropFilter;
+ (id)noGeometryFilter;
+ (id)noMuteFilter;
+ (id)noOrientationFilter;
+ (id)noRedEyeFilter;
+ (id)noTrimFilter;
+ (id)oneShotPortraitV2ExportFilter;
+ (id)orientationAsMetaDataFilter;
+ (id)perspectiveStraightenWithoutCropFilter;
+ (id)postGeometryFilter;
+ (id)preGeometryFilter;
+ (id)rawFaceBalanceFilter;
+ (id)rawSourceFilterIncludingOrientation;
+ (id)sourceFilter;
+ (id)sourceFilterNoOrientation;
+ (id)stopAtTagIncludeGeometryFilter:(id)arg1;
+ (id)stopAtTagIncludeOrientationFilter:(id)arg1;
+ (id)stripAllTimeAdjustmentsFilter;
+ (id)sushiLevel1Filter;

@end
