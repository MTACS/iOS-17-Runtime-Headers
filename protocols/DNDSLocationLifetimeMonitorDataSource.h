
@protocol DNDSLocationLifetimeMonitorDataSource <DNDSLifetimeMonitorDataSource>

@required

- (DNDSLocationTriggerConfiguration *)locationTriggerConfigurationForLifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1;

@end
