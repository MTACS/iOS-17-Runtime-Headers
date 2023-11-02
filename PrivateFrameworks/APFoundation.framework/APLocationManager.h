
@interface APLocationManager : NSObject <CLLocationManagerDelegate> {
    int  _callerStatus;
    CLLocationManager * _clLocationManager;
    CLPlacemark * _currentPlacemark;
    bool  _isLocationInitialized;
    bool  _isLocationUpdating;
    CLLocation * _lastPlacemarkLocation;
    CLLocation * _location;
    NSObject<OS_dispatch_queue> * _locationQueue;
    bool  _updatingPlacemark;
}

@property (nonatomic) int callerStatus;
@property (nonatomic, retain) CLLocationManager *clLocationManager;
@property (retain) CLPlacemark *currentPlacemark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocationInitialized;
@property (nonatomic) bool isLocationUpdating;
@property (nonatomic, retain) CLLocation *lastPlacemarkLocation;
@property (nonatomic, retain) CLLocation *location;
@property (readonly) Class superclass;
@property bool updatingPlacemark;

+ (id)_authorizationChangedBlocks;
+ (void)addAuthorizationChangedBlock:(id /* block */)arg1;
+ (bool)locationEnabledFor:(int)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)callerStatus;
- (id)clLocationManager;
- (id)currentPlacemark;
- (id)init;
- (id)initForTesting;
- (bool)isLocationInitialized;
- (bool)isLocationUpdating;
- (id)lastPlacemarkLocation;
- (id)location;
- (bool)locationEnabled;
- (id)locationInfo;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)setCallerStatus:(int)arg1;
- (void)setClLocationManager:(id)arg1;
- (void)setCurrentPlacemark:(id)arg1;
- (void)setIsLocationInitialized:(bool)arg1;
- (void)setIsLocationUpdating:(bool)arg1;
- (void)setLastPlacemarkLocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setUpdatingPlacemark:(bool)arg1;
- (void)start;
- (void)stop;
- (void)updatePlacemark;
- (bool)updatingPlacemark;

@end
