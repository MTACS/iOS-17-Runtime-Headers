
@protocol DNDSAggregateLocationLifetimeMonitor <DNDSLifetimeMonitor>

@required

- (unsigned long long)availableRegions;
- (<DNDSLocationLifetimeMonitorDataSource> *)dataSource;
- (<DNDSLifetimeMonitorDelegate> *)delegate;
- (CLLocationManager *)locationManager;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setDataSource:(id <DNDSLocationLifetimeMonitorDataSource>)arg1;
- (void)setDelegate:(id <DNDSLifetimeMonitorDelegate>)arg1;

@end
