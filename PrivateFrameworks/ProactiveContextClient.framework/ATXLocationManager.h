
@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXLocationOfInterestManagerProtocol, ATXPredictedLocationsManagerProtocol> {
    <ATXLocationManagerGPS> * _gps;
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _loiUpdateQueue;
    <ATXLocationParameters> * _modeGlobals;
    NSDate * _now;
    double  _predictedExitDateTimeout;
    double  _predictedNextLOITimeout;
    <ATXLocationManagerRoutine> * _routine;
    <ATXLocationManagerStateStore> * _stateStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *now;
@property (nonatomic) double predictedExitDateTimeout;
@property (nonatomic) double predictedNextLOITimeout;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient

+ (id)debugDescriptionForCLLocation:(id)arg1;
+ (id)stringForLOIType:(long long)arg1;

- (void).cxx_destruct;
- (id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(bool)arg1;
- (double)_distanceOfCurrentLocationFrom:(id)arg1;
- (void)_fetchLocationOfInterest:(long long)arg1 inGroup:(id)arg2;
- (void)_gotLocation:(id)arg1 forLocationOfInterest:(long long)arg2;
- (void)_handleRoutineError:(id)arg1 forThing:(id)arg2;
- (void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(id /* block */)arg1;
- (id)_updateLocationsOfInterestWithCurrentLocation:(id)arg1;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (void)beginMonitoringRegion:(id)arg1;
- (id)cachedLocationOfInterestAtCurrentLocation;
- (void)clearLocationOfInterest;
- (void)didChangeLocationEnabled:(bool)arg1;
- (void)didChangePreciseLocationEnabled:(bool)arg1;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (void)fetchAllLocationsOfInterest:(id /* block */)arg1;
- (void)fetchLOILocationOfType:(long long)arg1 reply:(id /* block */)arg2;
- (void)fetchLocationsOfInterestVisitedDuring:(id)arg1 handler:(id /* block */)arg2;
- (id)getCurrentLocation;
- (void)getCurrentLocationWithCompletionHandler:(id /* block */)arg1;
- (id)getCurrentLocation_RequestPreciseLocation:(bool)arg1;
- (id)getCurrentPreciseLocation;
- (unsigned long long)getCurrentRoutineModeWithCurrentDate:(id)arg1;
- (id)getPredictedExitTimesFromLOIName:(id)arg1 startDate:(id)arg2;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)arg1 startDate:(id)arg2;
- (void)gotState:(id)arg1;
- (id)init;
- (id)initWithGPS:(id)arg1 routine:(id)arg2 stateStore:(id)arg3 now:(id)arg4 modeGlobals:(id)arg5;
- (id)initWithStateStore:(id)arg1 modeGlobals:(id)arg2;
- (void)invalidateLocationOfInterestCache;
- (bool)isAvailableLocationOfInterestType:(long long)arg1;
- (bool)isLocationNearKnownTypeLocationOfInterest:(id)arg1;
- (bool)isNearFrequentLocationOfInterest;
- (bool)isNearKnownTypeLocationOfInterest;
- (bool)isNearKnownTypeOrFrequentLocationOfInterest;
- (bool)isTourist;
- (bool)isTouristWithCurrentDate:(id)arg1;
- (bool)locationEnabled;
- (void)locationManagerGPS:(id)arg1 didEnterRegionWithIdentifier:(id)arg2;
- (void)locationManagerGPS:(id)arg1 didExitRegionWithIdentifier:(id)arg2;
- (id)locationOfInterestAtCurrentLocation;
- (void)locationOfInterestAtCurrentLocationWithCompletionHandler:(id /* block */)arg1;
- (id)now;
- (bool)preciseLocationEnabled;
- (double)predictedExitDateTimeout;
- (id)predictedExitTimes;
- (id)predictedLocationsOfInterest;
- (double)predictedNextLOITimeout;
- (id)previousLOIAndCurrentLOI;
- (void)setNow:(id)arg1;
- (void)setPredictedExitDateTimeout:(double)arg1;
- (void)setPredictedNextLOITimeout:(double)arg1;
- (long long)stateForRegion:(id)arg1 withTimeout:(double)arg2;
- (void)stopMonitoringRegionWithIdentifier:(id)arg1;
- (void)updateCurrentLocationOfInterest;
- (void)updateCurrentLocationOfInterestIfTimeElapsed;
- (void)updateCurrentLocationOfInterestWithCompletionHandler:(id /* block */)arg1;
- (void)updatePredictedExitTimes;
- (void)updatePredictedLocationsOfInterest;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

+ (id)sharedInstance;

@end
