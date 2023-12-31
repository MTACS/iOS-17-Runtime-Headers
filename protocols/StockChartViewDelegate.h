
@protocol StockChartViewDelegate <NSObject>

@required

- (void)stockChartView:(StockChartView *)arg1 chartIntervalDidChange:(long long)arg2;
- (bool)stockChartViewIsCurrentChartView:(StockChartView *)arg1;
- (void)stockChartViewNeedsLoadingStatusUpdated:(StockChartView *)arg1;

@optional

- (void)stockChartViewFinishedInitialLoad:(StockChartView *)arg1;

@end
