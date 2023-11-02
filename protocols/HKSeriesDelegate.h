
@protocol HKSeriesDelegate

@required

- (void)nonemptyDrawComplete;
- (bool)rangeIsVisible:(HKValueRange *)arg1;
- (void)seriesDidInvalidatePaths:(HKGraphSeries *)arg1 newDataArrived:(bool)arg2;
- (double)snapScreenCoordinateToXAxisResolution:(double)arg1;

@end
