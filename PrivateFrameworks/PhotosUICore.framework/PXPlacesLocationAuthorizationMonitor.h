
@interface PXPlacesLocationAuthorizationMonitor : NSObject <CLLocationManagerDelegate> {
    void _authorizationStatus;
    void locationManager;
    void observable;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
