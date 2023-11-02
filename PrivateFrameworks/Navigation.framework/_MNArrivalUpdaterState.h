
@interface _MNArrivalUpdaterState : NSObject {
    MNArrivalUpdater * _arrivalUpdater;
    _MNArrivalUpdaterDetails * _details;
}

@property (nonatomic) MNArrivalUpdater *arrivalUpdater;
@property (nonatomic, retain) _MNArrivalUpdaterDetails *details;
@property (nonatomic, readonly) MNLocation *location;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) GEOComposedRouteLeg *targetLeg;

- (void).cxx_destruct;
- (bool)_checkForApproachingWaypoint;
- (bool)_checkForArrival;
- (bool)_checkForEndOfDrivingSegment;
- (bool)_checkForPreArrival;
- (double)_distanceToEndOfLeg;
- (bool)_updateForApproachingWaypoint;
- (bool)_updateForArrival;
- (void)_updateForEVMonitoring;
- (bool)_updateForEndOfDrivingSegment;
- (bool)_updateForPreArrival;
- (bool)_updateForSearchingForParking;
- (id)arrivalUpdater;
- (id)details;
- (void)forceDepartureWithReason:(unsigned long long)arg1;
- (id)location;
- (void)onEnterState:(id)arg1;
- (void)onLeaveState:(id)arg1;
- (double)parkingDetectionExcludeRadius;
- (id)route;
- (void)sendArrivalInfo;
- (void)setArrivalUpdater:(id)arg1;
- (void)setDetails:(id)arg1;
- (long long)state;
- (id)targetLeg;
- (void)updateForEVChargingState:(bool)arg1;
- (void)updateForEVReachedTargetBatteryCharge;
- (void)updateForLocation;

@end
