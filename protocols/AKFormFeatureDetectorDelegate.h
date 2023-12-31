
@protocol AKFormFeatureDetectorDelegate <NSObject>

@optional

- (struct CGSize { double x1; double x2; })defaultFeatureSizeForPage:(AKPageController *)arg1;
- (double)maximumFeatureWidthForPage:(AKPageController *)arg1;
- (bool)wantsDefaultFeatures;

@end
