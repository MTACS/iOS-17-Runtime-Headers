
@protocol DNDSLifetimeMonitorDataSource <NSObject>

@required

- (NSArray *)lifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1 modeAssertionsWithLifetimeClass:(Class)arg2;

@end
