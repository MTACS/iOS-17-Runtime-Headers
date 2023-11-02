
@protocol REDataSourceManagerObserver <NSObject>

@required

- (void)dataSourceManager:(REDataSourceManager *)arg1 didLoadDataSourceController:(REElementDataSourceController *)arg2;
- (void)dataSourceManager:(REDataSourceManager *)arg1 willUnloadDataSourceController:(REElementDataSourceController *)arg2;

@end
