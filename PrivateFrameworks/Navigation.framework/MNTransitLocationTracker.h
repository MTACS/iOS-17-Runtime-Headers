
@interface MNTransitLocationTracker : MNSteppingLocationTracker <MNLocationManagerObserver> {
    bool  _debugSnapToTransitLines;
    bool  _hasArrived;
    NSDate * _lastAccurateLocationDate;
    NSDate * _lastLocationTimestamp;
    MNLocation * _lastMatchedLocation;
    NSMutableDictionary * _monitoredRegions;
    GEORoadMatcher * _roadMatcher;
    NSDate * _startDate;
    NSMutableDictionary * _transitAlerts;
    NSMutableDictionary * _transitRegions;
    GEOTransitRouteMatcher * _transitRouteMatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool debugSnapToTransitLines;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clRegionWithCenter:(id)arg1 identifier:(id)arg2 signalStrength:(int)arg3;
- (id)_correctedLocationForLocation:(id)arg1;
- (void)_initRegionAlertsForRoute:(id)arg1;
- (bool)_isInaccurateLocation:(id)arg1;
- (id)_locationForInaccurateLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;
- (void)_startMonitoringTransitAlerts;
- (id)_stepForRegionAlert:(id)arg1;
- (void)_stopMonitoringAllRegions;
- (void)_stopMonitoringForRegionWithIdentifier:(id)arg1;
- (double)_timeToDisplayStaleGPSLocation;
- (void)_triggerAlertForRegionId:(id)arg1;
- (bool)debugSnapToTransitLines;
- (id)initWithNavigationSession:(id)arg1;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;
- (void)setDebugSnapToTransitLines:(bool)arg1;
- (void)startTrackingWithInitialLocation:(id)arg1 targetLegIndex:(unsigned long long)arg2;
- (void)stopTracking;
- (int)transportType;

@end
