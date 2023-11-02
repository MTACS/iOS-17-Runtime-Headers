
@interface DNDSUntilExitLocationLifetimeMonitor : NSObject <CLLocationManagerDelegate, DNDSLifetimeMonitor> {
    NSArray * _activeLifetimeAssertionUUIDs;
    <DNDSAggregateLocationLifetimeMonitor> * _aggregateMonitor;
    <DNDSBackingStore> * _backingStore;
    CLRegion * _currentRegion;
    <DNDSLifetimeMonitorDataSource> * _dataSource;
    <DNDSLifetimeMonitorDelegate> * _delegate;
    bool  _hasActiveLifetimes;
    bool  _regionEntered;
    DNDSUntilExitRegionStore * _store;
}

@property (nonatomic, readonly, copy) NSArray *activeLifetimeAssertionUUIDs;
@property (nonatomic) <DNDSAggregateLocationLifetimeMonitor> *aggregateMonitor;
@property (nonatomic) <DNDSLifetimeMonitorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSLifetimeMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCurrentRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadDataFromBackingStore;
- (void)_queue_beginMonitoringCurrentLocation;
- (void)_queue_geofenceLocation:(id)arg1;
- (void)_queue_geofenceRegion:(id)arg1;
- (void)_queue_refreshMonitor;
- (void)_queue_sendExpiryEventForAllLocationAssertions;
- (void)_queue_stopMonitoringCurrentLocation;
- (bool)_saveDataToBackingStoreWithError:(id*)arg1;
- (id)activeLifetimeAssertionUUIDs;
- (id)aggregateMonitor;
- (id)dataSource;
- (id)delegate;
- (bool)hasCurrentRegion;
- (id)initWithAggregateMonitor:(id)arg1;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)refreshMonitorForDate:(id)arg1;
- (void)setAggregateMonitor:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
