
@interface ENRegionMonitorCoreLocationDataSource : NSObject <CLLocationManagerDelegate, ENRegionMonitorDataSource> {
    ENRegionVisit * _cachedRegionVisit;
    CLLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _queue;
    RTRoutineManager * _routineManager;
    NSObject<ENRegionMonitorSourceDelegate> * delegate;
}

@property (nonatomic, copy) ENRegionVisit *cachedRegionVisit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) RTRoutineManager *routineManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_processLocation:(id)arg1;
- (void)_processLocation:(id)arg1 locationOfInterest:(id)arg2;
- (void)_processLocation:(id)arg1 locationsOfInterest:(id)arg2;
- (void)_processVisit:(id)arg1;
- (void)_setup;
- (void)_updateRegionVisit:(id)arg1;
- (void)_updatedRegion;
- (id)cachedRegionVisit;
- (id)currentRegionVisit;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 routineManager:(id)arg2;
- (id)locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)processLocation:(id)arg1 locationOfInterest:(id)arg2;
- (void)processLocation:(id)arg1 locationsOfInterest:(id)arg2;
- (id)queue;
- (id)routineManager;
- (void)setCachedRegionVisit:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRoutineManager:(id)arg1;
- (void)setup;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)updateRegion;
- (bool)updateRegionAllowed;
- (void)updateRegionVisit:(id)arg1;

@end
