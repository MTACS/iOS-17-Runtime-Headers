
@interface CAMLibrarySelectionSignalResult : NSObject {
    CLLocation * _currentLocation;
    NSArray * _frequentAndHomeLocations;
    NSArray * _homeLocations;
    NSArray * _identitiesInProximity;
    int  _locationAuthorizationStatus;
    NSNumber * _suggestsSharingValue;
}

@property (nonatomic, readonly) bool cameraHasAccessToLocation;
@property (nonatomic, retain) CLLocation *currentLocation;
@property (nonatomic, readonly) bool currentLocationCloseToHome;
@property (nonatomic, readonly) NSArray *frequentAndHomeLocations;
@property (nonatomic, readonly) NSArray *homeLocations;
@property (nonatomic, retain) NSArray *identitiesInProximity;
@property (nonatomic, readonly) bool isOnTrip;
@property (nonatomic, readonly) int locationAuthorizationStatus;
@property (nonatomic, readonly) bool suggestsSharing;
@property (nonatomic, retain) NSNumber *suggestsSharingValue;

+ (bool)currentLocation:(id)arg1 isContainedInCircularRegions:(id)arg2;
+ (double)distanceBetweenLocation:(id)arg1 andCircularRegion:(id)arg2 atDate:(id)arg3;
+ (id)librarySelectionSignalResultWithIdentitiesInProximity:(id)arg1 currentLocation:(id)arg2 locationAuthorizationStatus:(int)arg3 homeLocations:(id)arg4 frequentLocations:(id)arg5;

- (void).cxx_destruct;
- (id)_diagnosticsForRegions:(id)arg1;
- (bool)cameraHasAccessToLocation;
- (id)currentLocation;
- (bool)currentLocationCloseToHome;
- (id)description;
- (id)frequentAndHomeLocations;
- (id)frequentLocationRegionContainingLocation:(id)arg1;
- (id)homeLocations;
- (id)identitiesInProximity;
- (id)initWithIdentitiesInProximity:(id)arg1 currentLocation:(id)arg2 locationAuthorizationStatus:(int)arg3 homeLocations:(id)arg4 frequentLocations:(id)arg5;
- (bool)isOnTrip;
- (int)locationAuthorizationStatus;
- (id)resultDiagnostics;
- (void)setCurrentLocation:(id)arg1;
- (void)setIdentitiesInProximity:(id)arg1;
- (void)setSuggestsSharingValue:(id)arg1;
- (bool)suggestsSharing;
- (id)suggestsSharingValue;

@end
