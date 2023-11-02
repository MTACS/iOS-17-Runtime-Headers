
@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    NSNumber * _anchorValue;
    HKValueRange * _axisBounds;
    NSDictionary * _axisRangeOverrides;
    double  _defaultYAxisRange;
}

@property (nonatomic, readonly) NSNumber *anchorValue;
@property (nonatomic, retain) HKValueRange *axisBounds;
@property (nonatomic, readonly) NSDictionary *axisRangeOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultYAxisRange;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_rangeForZoomLevel:(long long)arg1;
- (id)anchorValue;
- (id)axisBounds;
- (id)axisRangeOverrides;
- (double)defaultYAxisRange;
- (id)init;
- (id)noDataStartingRange;
- (void)setAxisBounds:(id)arg1;
- (id)yAxisBounds;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;

@end
