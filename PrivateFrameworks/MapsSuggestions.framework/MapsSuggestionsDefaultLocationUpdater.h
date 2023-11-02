
@interface MapsSuggestionsDefaultLocationUpdater : MapsSuggestionsBaseLocationUpdater <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater> {
    CLLocationManager * _locationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)onStartImplementation;
- (void)onStopImplementation;

@end
