
@protocol ChartUpdaterDelegate

@required

- (void)chartUpdater:(ChartUpdater *)arg1 didFailWithError:(NSError *)arg2;
- (void)chartUpdater:(ChartUpdater *)arg1 didReceiveStockChartData:(StockChartData *)arg2;

@end
