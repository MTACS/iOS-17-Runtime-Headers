
@interface MNCyclingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTunnelLocationProjectorDelegate> {
    MNAlternateRoutesUpdater * _alternateRoutesUpdater;
    double  _consecutiveValidCourseCount;
    NSMutableArray * _etauPositions;
    double  _lastKnownCourse;
    MNTunnelLocationProjector * _tunnelLocationProjector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (int)_detectedMotionForLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_newMapMatcherForRoute:(id)arg1;
- (id)_overrideLocationForLocation:(id)arg1;
- (void)_updateForAlternateRoutes:(id)arg1;
- (void)_updateForArrivalAtLegIndex:(unsigned long long)arg1;
- (void)_updateForLocation:(id)arg1;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (id)initWithNavigationSession:(id)arg1;
- (bool)shouldProjectAlongRoute;
- (void)startTrackingWithInitialLocation:(id)arg1 targetLegIndex:(unsigned long long)arg2;
- (void)stopTracking;
- (int)transportType;
- (void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2;
- (id)userLocationForUpdateManager:(id)arg1;

@end
