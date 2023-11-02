
@protocol WebGeolocationCoreLocationUpdateListener

@required

- (void)errorOccurred:(NSString *)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)positionChanged:(void*)arg1;
- (void)resetGeolocation;

@end
