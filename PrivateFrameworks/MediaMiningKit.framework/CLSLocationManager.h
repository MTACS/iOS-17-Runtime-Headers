
@interface CLSLocationManager : NSObject <CLLocationManagerDelegate> {
    double  _desiredAccuracy;
    bool  _isBrowsing;
    bool  _isUpdatingLocation;
    CLLocationManager * _locationManager;
    unsigned long long  _minimumDelayReached;
    NSMutableArray * _pendingBlocks;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _shutdownUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_dispatchProximityPendingBlocks:(bool)arg1;
- (id)currentLocation;
- (void)dealloc;
- (double)desiredAccuracy;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationResult:(id /* block */)arg1;
- (void)setDesiredAccuracy:(double)arg1;

@end
