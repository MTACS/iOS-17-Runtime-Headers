
@interface ADLocationManager : NSObject <CLLocationManagerDelegate> {
    CLLocation * _actualLocation;
    int  _callerStatus;
    CLPlacemark * _currentPlacemark;
    bool  _isLocationInitialized;
    bool  _isLocationUpdating;
    CLLocation * _lastPlacemarkLocation;
    NSMutableArray * _listeners;
    CLLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _locationQueue;
    bool  _updatingPlacemark;
}

@property (nonatomic, retain) CLLocation *actualLocation;
@property (nonatomic) int callerStatus;
@property (retain) CLPlacemark *currentPlacemark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLocationAvailable;
@property (nonatomic) bool isLocationInitialized;
@property (nonatomic) bool isLocationUpdating;
@property (nonatomic, retain) CLLocation *lastPlacemarkLocation;
@property (nonatomic, retain) NSMutableArray *listeners;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (readonly) Class superclass;
@property bool updatingPlacemark;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)actualLocation;
- (void)addListener:(id)arg1;
- (int)callerStatus;
- (id)currentLocation;
- (id)currentPlacemark;
- (id)init;
- (bool)isLocationAvailable;
- (bool)isLocationInitialized;
- (bool)isLocationUpdating;
- (id)lastPlacemarkLocation;
- (id)listeners;
- (bool)locationEnabledFor:(int)arg1;
- (id)locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)obfuscatedLocation;
- (void)setActualLocation:(id)arg1;
- (void)setCallerStatus:(int)arg1;
- (void)setCurrentPlacemark:(id)arg1;
- (void)setIsLocationInitialized:(bool)arg1;
- (void)setIsLocationUpdating:(bool)arg1;
- (void)setLastPlacemarkLocation:(id)arg1;
- (void)setListeners:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setUpdatingPlacemark:(bool)arg1;
- (void)start;
- (void)stop;
- (void)updatePlacemark;
- (bool)updatingPlacemark;

@end
