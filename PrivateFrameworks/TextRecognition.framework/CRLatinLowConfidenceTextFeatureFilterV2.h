
@interface CRLatinLowConfidenceTextFeatureFilterV2 : NSObject <CRSingleTextFeatureFiltering>

- (bool)shouldFilterRegion:(id)arg1;
- (bool)shouldFilterRegionBasedOnGeometry:(id)arg1 closestDistance:(double)arg2;

@end
