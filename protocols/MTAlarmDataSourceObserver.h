
@protocol MTAlarmDataSourceObserver

@required

- (void)dataSourceDidReload:(MTAlarmDataSource *)arg1;

@optional

- (void)dataSource:(MTAlarmDataSource *)arg1 didAddAlarms:(NSArray *)arg2;
- (void)dataSource:(MTAlarmDataSource *)arg1 didRemoveAlarms:(NSArray *)arg2;
- (void)dataSource:(MTAlarmDataSource *)arg1 didUpdateAlarms:(NSArray *)arg2;

@end
