
@interface NTKGeocoderManager : NSObject {
    CLLocation * _cachedLocation;
    CLPlacemark * _cachedPlacemark;
    CLGeocoder * _geocoder;
    NSMutableArray * _handlers;
    CLInUseAssertion * _locationInUseAssertion;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_handlePlacemarks:(id)arg1 fromLocation:(id)arg2 error:(id)arg3;
- (id)cachedPlacemarkForLocation:(id)arg1;
- (id)init;
- (void)placemarkForLocation:(id)arg1 handler:(id /* block */)arg2;

@end
