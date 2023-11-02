
@interface SALocationManager : NSObject <CLLocationManagerDelegate> {
    <SALocationManagerProtocol> * _delegate;
    CLLocationManager * _locationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SALocationManagerProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)notifyLocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)startMonitoringLocation;
- (void)stopMonitoringLocation;

@end
