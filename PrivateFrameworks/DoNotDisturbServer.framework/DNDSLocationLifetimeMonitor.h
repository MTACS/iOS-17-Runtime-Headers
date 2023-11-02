
@interface DNDSLocationLifetimeMonitor : NSObject <CLLocationManagerDelegate, DNDSAggregateLocationLifetimeMonitor, DNDSLifetimeMonitor, DNDSMeDeviceServiceListener> {
    NSArray * _children;
    <DNDSLocationLifetimeMonitorDataSource> * _dataSource;
    <DNDSLifetimeMonitorDelegate> * _delegate;
    DNDSExplicitRegionLocationLifetimeMonitor * _explicitRegionMonitor;
    CLLocationManager * _locationManager;
    DNDSMeDeviceService * _meDeviceService;
    NSObject<OS_dispatch_queue> * _queue;
    DNDSUntilExitLocationLifetimeMonitor * _untilExitMonitor;
}

@property (nonatomic, readonly, copy) NSArray *activeLifetimeAssertionUUIDs;
@property (nonatomic, readonly) unsigned long long availableRegions;
@property (nonatomic) <DNDSLocationLifetimeMonitorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSLifetimeMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocationManager *locationManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_refreshMonitorForDate:(id)arg1;
- (id)activeLifetimeAssertionUUIDs;
- (unsigned long long)availableRegions;
- (id)dataSource;
- (id)delegate;
- (id)initWithMeDeviceService:(id)arg1;
- (id)locationManager;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)meDeviceService:(id)arg1 didReceiveMeDeviceStateUpdate:(id)arg2;
- (id)queue;
- (void)refreshMonitorForDate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
