
@protocol WeatherMaps.WeatherMKMapViewAccessibilityDelegate <MKMapViewDelegate>

@required

- (NSString *)accessibilityModelOverlayKeyForMapView:(MKMapView *)arg1;
- (void)mapView:(void *)arg1 requestedAccessibilityModelForLocation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MKMapView *, CLLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLLocation *, _TtC11WeatherMaps29MapLocationAccessibilityModel *, void*

@end
