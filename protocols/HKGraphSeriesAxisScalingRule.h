
@protocol HKGraphSeriesAxisScalingRule <NSObject>

@required

- (HKValueRange *)noDataStartingRange;
- (HKValueRange *)yValueRangeForRange:(HKValueRange *)arg1 zoomLevel:(long long)arg2;

@optional

- (HKValueRange *)yAxisBounds;

@end
