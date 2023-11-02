
@protocol CRSingleTextFeatureFiltering

@required

- (bool)shouldFilterRegion:(CRRecognizedTextRegion *)arg1;
- (bool)shouldFilterRegionBasedOnGeometry:(CRGroupRegionGeometry *)arg1 closestDistance:(double)arg2;

@end
