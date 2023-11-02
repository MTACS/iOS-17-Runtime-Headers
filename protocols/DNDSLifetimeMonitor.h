
@protocol DNDSLifetimeMonitor <NSObject>

@required

- (NSArray *)activeLifetimeAssertionUUIDs;
- (<DNDSLifetimeMonitorDataSource> *)dataSource;
- (<DNDSLifetimeMonitorDelegate> *)delegate;
- (void)refreshMonitorForDate:(NSDate *)arg1;
- (void)setDataSource:(id <DNDSLifetimeMonitorDataSource>)arg1;
- (void)setDelegate:(id <DNDSLifetimeMonitorDelegate>)arg1;

@end
