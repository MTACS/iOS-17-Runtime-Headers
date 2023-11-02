
@interface CRCJKLowConfidenceTextFeatureFilterV2 : NSObject <CRSingleTextFeatureFiltering> {
    double  _lowConfidenceThreshold1CharLines;
    double  _lowConfidenceThreshold2PlusCharLines;
    double  _lowConfidenceThresholdIsolated1CharLines;
}

@property (readonly) double lowConfidenceThreshold1CharLines;
@property (readonly) double lowConfidenceThreshold2PlusCharLines;
@property (readonly) double lowConfidenceThresholdIsolated1CharLines;

- (id)initWithLowConfidenceThresholdFor1CharLines:(double)arg1 for2PlusCharLines:(double)arg2 forIsolated1CharLines:(double)arg3;
- (double)lowConfidenceThreshold1CharLines;
- (double)lowConfidenceThreshold2PlusCharLines;
- (double)lowConfidenceThresholdIsolated1CharLines;
- (bool)shouldFilterRegion:(id)arg1;
- (bool)shouldFilterRegionBasedOnGeometry:(id)arg1 closestDistance:(double)arg2;

@end
