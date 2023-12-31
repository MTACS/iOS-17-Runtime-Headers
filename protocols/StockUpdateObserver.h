
@protocol StockUpdateObserver <NSObject>

@optional

- (void)stockUpdateManager:(StockUpdateManager *)arg1 didRequestUpdateForStocks:(NSArray *)arg2 updates:(long long)arg3;
- (void)stockUpdateManager:(StockUpdateManager *)arg1 didUpdateStocks:(NSArray *)arg2 updates:(long long)arg3;
- (void)stockUpdateManager:(StockUpdateManager *)arg1 failedToUpdateStocks:(NSArray *)arg2 updates:(long long)arg3 error:(NSError *)arg4;

@end
