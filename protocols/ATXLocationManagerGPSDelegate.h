
@protocol ATXLocationManagerGPSDelegate

@required

- (void)didChangeLocationEnabled:(bool)arg1;
- (void)didChangePreciseLocationEnabled:(bool)arg1;
- (void)locationManagerGPS:(id <ATXLocationManagerGPS>)arg1 didEnterRegionWithIdentifier:(NSString *)arg2;
- (void)locationManagerGPS:(id <ATXLocationManagerGPS>)arg1 didExitRegionWithIdentifier:(NSString *)arg2;

@end
