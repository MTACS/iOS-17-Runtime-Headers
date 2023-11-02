
@interface HKAbstractFixedAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    NSDictionary * _axisBoundsOverrides;
    HKValueRange * _defaultAxisBounds;
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    bool  _shouldExpandBoundsForOutliers;
}

@property (nonatomic, readonly) NSDictionary *axisBoundsOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) HKValueRange *defaultAxisBounds;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldExpandBoundsForOutliers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_valueRangeForZoomLevel:(long long)arg1;
- (id)axisBoundsOverrides;
- (id)defaultAxisBounds;
- (id)init;
- (id)noDataStartingRange;
- (void)setShouldExpandBoundsForOutliers:(bool)arg1;
- (bool)shouldExpandBoundsForOutliers;
- (id)yAxisBounds;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;

@end
