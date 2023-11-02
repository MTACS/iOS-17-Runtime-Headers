
@interface HDLocationManager : NSObject <CLLocationManagerDelegate, HDAssertionObserver> {
    HDAssertionManager * _assertionManager;
    CLInUseAssertion * _inUseAssertion;
    CLLocationManager * _locationManager;
    id /* block */  _locationManagerConfiguration;
    HKObserverSet * _observers;
    <HDLocationManagerUnitTestDelegate> * _unitTestDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <HDLocationManagerUnitTestDelegate> *unitTestDelegate;

- (void).cxx_destruct;
- (id)_mainQueue_newLocationManagerWithEffectiveBundlePath:(id)arg1;
- (void)_mainQueue_releaseLocationUpdatingAssertion;
- (void)_mainQueue_takeLocationUpdatingAssertionWithAccuracy:(double)arg1;
- (void)_mainQueue_updateLocationManager;
- (void)_unitTest_didInvalidateAssertion:(id)arg1;
- (void)_unitTest_didTakeAssertion:(id)arg1;
- (id)_unitTest_locationManager;
- (void)_unitTest_setLocationManagerConfiguration:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)setUnitTestDelegate:(id)arg1;
- (id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)arg1 desiredAccuracy:(double)arg2;
- (id)unitTestDelegate;

@end
