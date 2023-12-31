
@protocol FIUIChartDataSetDataSource <NSObject>

@required

- (<FIUIChartPoint> *)dataSet:(FIUIChartDataSet *)arg1 chartPointForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataPointsForDataSet:(FIUIChartDataSet *)arg1;

@optional

- (NSArray *)labelsForSet:(FIUIChartDataSet *)arg1;

@end
