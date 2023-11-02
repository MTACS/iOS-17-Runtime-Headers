
@protocol IMLocationManager <NSObject>

@required

- (CLLocation *)currentLocation;
- (NSError *)error;
- (CLLocation *)location;
- (bool)locationAuthorizationDenied;
- (bool)locationAuthorizationDetermined;
- (bool)preciseLocationAuthorized;
- (void)startUpdatingCurrentLocationWithAuthorizedHandler:(void *)arg1 updateHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, CLLocation *, NSError *, void*
- (void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(void *)arg1 withAuthorizedHandler:(void *)arg2 updateHandler:(void *)arg3; // needs 3 arg types, found 13: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, CLLocation *, NSError *, void*

@end
