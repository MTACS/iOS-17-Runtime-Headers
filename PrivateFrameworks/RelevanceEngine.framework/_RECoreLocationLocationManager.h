
@interface _RECoreLocationLocationManager : RELocationManager <CLLocationManagerDelegate> {
    CLLocation * _currentLocation;
    id /* block */  _handler;
    NSLock * _locationAccessLock;
    CLLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _resumedQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyUpdateHandlersWithError:(id)arg1;
- (void)_updateLocation:(id)arg1;
- (id)currentLocation;
- (void)dealloc;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)startLocationUpdatesWithHandler:(id /* block */)arg1;
- (void)stopLocationUpdates;

@end
