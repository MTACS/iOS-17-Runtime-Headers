
@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener> {
    WebGeolocationProviderIOS * _provider;
}

- (void)errorOccurred:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (id)initWithProvider:(id)arg1;
- (void)positionChanged:(void*)arg1;
- (void)resetGeolocation;

@end
