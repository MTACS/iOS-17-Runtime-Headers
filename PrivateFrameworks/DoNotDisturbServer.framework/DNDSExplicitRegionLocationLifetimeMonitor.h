
@interface DNDSExplicitRegionLocationLifetimeMonitor : NSObject <CLLocationManagerDelegate, DNDSLifetimeMonitor> {
    NSArray * _activeLifetimeAssertionUUIDs;
    <DNDSAggregateLocationLifetimeMonitor> * _aggregateMonitor;
    <DNDSBackingStore> * _backingStore;
    DNDSLocationTriggerConfiguration * _currentConfiguration;
    <DNDSLifetimeMonitorDataSource> * _dataSource;
    <DNDSLifetimeMonitorDelegate> * _delegate;
    NSMutableSet * _enteredRegionIdentifiers;
    NSMutableSet * _enteredRegionIdentifiersPendingExit;
    DNDSExplicitRegionStore * _store;
}

@property (nonatomic, readonly, copy) NSArray *activeLifetimeAssertionUUIDs;
@property (nonatomic) <DNDSAggregateLocationLifetimeMonitor> *aggregateMonitor;
@property (nonatomic) <DNDSLifetimeMonitorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSLifetimeMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadDataFromBackingStore;
- (void)_queue_invalidateAssertionOnExitFromRegion:(id)arg1;
- (id)_queue_locationMonitorClientIdentifierForModeIdentifier:(id)arg1 region:(id)arg2;
- (void)_queue_refreshMonitor;
- (void)_queue_resolveEnteredRegionIdentifiersWithAssertionRegionIdentifiers:(id)arg1;
- (void)_queue_startMonitoringForRegion:(id)arg1;
- (void)_queue_stopMonitoringForRegion:(id)arg1;
- (void)_queue_takeAssertionOnEntryIntoRegion:(id)arg1;
- (bool)_saveDataToBackingStoreWithError:(id*)arg1;
- (id)activeLifetimeAssertionUUIDs;
- (id)aggregateMonitor;
- (id)dataSource;
- (id)delegate;
- (id)initWithAggregateMonitor:(id)arg1;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)refreshMonitorForDate:(id)arg1;
- (void)setAggregateMonitor:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
