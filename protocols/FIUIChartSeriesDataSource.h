
@protocol FIUIChartSeriesDataSource <NSObject>

@required

- (id)maxXValueForChartSeries:(FIUIChartSeries *)arg1;
- (id)maxYValueForChartSeries:(FIUIChartSeries *)arg1;
- (id)minXValueForChartSeries:(FIUIChartSeries *)arg1;
- (id)minYValueForChartSeries:(FIUIChartSeries *)arg1;

@end
