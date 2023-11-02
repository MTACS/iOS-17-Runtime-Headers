
@interface HKGraphZoomLevelConfiguration : NSObject {
    double  _approximateAxisLabelInterval;
    double  _approximateSeriesEnhancedPointInterval;
    double  _approximateSeriesStandardPointInterval;
    NSDateComponents * _axisLabelIntervalComponents;
    double  _canonicalSize;
    long long  _intendedTimeScope;
    unsigned long long  _majorTickCalendarUnit;
    NSDateComponents * _minorAxisIntervalComponents;
    NSDateComponents * _referencePointIntervalComponents;
    double  _seriesBlockSize;
    NSDateComponents * _seriesPointEnhancedIntervalComponents;
    NSDateComponents * _seriesPointStandardIntervalComponents;
    double  _todayOffsetSize;
    double  _zoomLevelThreshold;
}

@property (nonatomic, readonly) double approximateAxisLabelInterval;
@property (nonatomic, readonly) double approximateSeriesEnhancedPointInterval;
@property (nonatomic, readonly) double approximateSeriesStandardPointInterval;
@property (nonatomic, readonly) NSDateComponents *axisLabelIntervalComponents;
@property (nonatomic, readonly) double canonicalSize;
@property (nonatomic, readonly) long long intendedTimeScope;
@property (nonatomic, readonly) unsigned long long majorTickCalendarUnit;
@property (nonatomic, readonly) NSDateComponents *minorAxisIntervalComponents;
@property (nonatomic, readonly) NSDateComponents *referencePointIntervalComponents;
@property (nonatomic, readonly) double seriesBlockSize;
@property (nonatomic, readonly) NSDateComponents *seriesPointEnhancedIntervalComponents;
@property (nonatomic, readonly) NSDateComponents *seriesPointStandardIntervalComponents;
@property (nonatomic, readonly) double todayOffsetSize;
@property (nonatomic, readonly) double zoomLevelThreshold;

+ (id)_axisSpanDateComponentsWithTimeScope:(long long)arg1;
+ (id)_chartVisibleRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 alignment:(long long)arg3 dataRange:(id)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7 level:(long long)arg8 anchorDateIsInclusive:(bool)arg9;
+ (id)_dateOffsetByHalfCanonicalSizeOfDate:(id)arg1 timeScope:(long long)arg2;
+ (id)_findVisibleRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 alignment:(long long)arg3 calendar:(id)arg4 anchorDateIsInclusive:(bool)arg5;
+ (id)_fitRange:(id)arg1 toDateRange:(id)arg2 timeScope:(long long)arg3 alignment:(long long)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7 level:(long long)arg8;
+ (id)_generateConfigurationForZoomLevel:(long long)arg1;
+ (id)_gregorianCalendarForCalendar:(id)arg1;
+ (id)_snappingStartDateWithStartDate:(id)arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 calendar:(id)arg3 timeScope:(long long)arg4 options:(long long)arg5 alignment:(long long)arg6;
+ (id)_visibleRangeDateFromAnchor:(id)arg1 timeScope:(long long)arg2 calendar:(id)arg3 offset:(long long)arg4;
+ (id)_visibleRangeDateFromDate:(id)arg1 timeScope:(long long)arg2 calendar:(id)arg3 offset:(long long)arg4;
+ (id)activeRangeFromCadenceRange:(id)arg1 timeScope:(long long)arg2 axisRange:(id)arg3 calendar:(id)arg4;
+ (id)chartDataRangeForTimeScope:(long long)arg1 dataRange:(id)arg2 firstWeekday:(long long)arg3 calendar:(id)arg4 cadence:(long long)arg5 alignment:(long long)arg6;
+ (id)chartVisibleRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 alignment:(long long)arg3 dataRange:(id)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7 level:(long long)arg8;
+ (id)configurationForZoomLevel:(long long)arg1;
+ (id)defaultCalendar;
+ (id)seriesPointIntervalUnitForTimeScope:(long long)arg1 pointCount:(long long)arg2;
+ (id)snappingRangeForRange:(id)arg1 axisRange:(id)arg2 timeScope:(long long)arg3 velocity:(struct CGPoint { double x1; double x2; })arg4 calendar:(id)arg5 options:(long long)arg6 alignment:(long long)arg7;
+ (long long)timeScopeForDateRange:(id)arg1;
+ (long long)visibleSeriesPointCountForTimeScope:(long long)arg1 resolution:(long long)arg2;

- (void).cxx_destruct;
- (double)approximateAxisLabelInterval;
- (double)approximateSeriesEnhancedPointInterval;
- (double)approximateSeriesPointIntervalAtResolution:(long long)arg1;
- (double)approximateSeriesStandardPointInterval;
- (id)axisLabelIntervalComponents;
- (double)canonicalSize;
- (long long)intendedTimeScope;
- (unsigned long long)majorTickCalendarUnit;
- (id)minorAxisIntervalComponents;
- (id)referencePointIntervalComponents;
- (double)seriesBlockSize;
- (id)seriesPointEnhancedIntervalComponents;
- (id)seriesPointIntervalComponentsAtResolution:(long long)arg1;
- (id)seriesPointStandardIntervalComponents;
- (double)todayOffsetSize;
- (long long)visibleSeriesPointCountAtResolution:(long long)arg1;
- (double)zoomLevelThreshold;

@end
