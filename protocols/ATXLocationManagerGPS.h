
@protocol ATXLocationManagerGPS

@required

- (void)beginMonitoringRegion:(CLRegion *)arg1;
- (<ATXLocationManagerGPSDelegate> *)delegate;
- (CLLocation *)location;
- (bool)locationEnabled;
- (bool)preciseLocationEnabled;
- (void)setDelegate:(id <ATXLocationManagerGPSDelegate>)arg1;
- (long long)stateForRegion:(CLRegion *)arg1 withTimeout:(double)arg2;
- (void)stopMonitoringRegionWithIdentifier:(NSString *)arg1;
- (void)updateLocationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLLocation *, NSError *, void*
- (CLLocation *)updateLocationWithTimeout:(double)arg1 requestPreciseLocation:(bool)arg2;

@end
