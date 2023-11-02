
@interface MNDrivingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate, MNWalkingRouteBackgroundLoaderDelegate> {
    MNAlternateRoutesUpdater * _alternateRoutesUpdater;
    double  _consecutiveValidCourseCount;
    int  _detectedTransportType;
    NSMutableArray * _etauPositions;
    bool  _exitedVehicle;
    double  _lastKnownCourse;
    MNTrafficIncidentAlertUpdater * _trafficIncidentAlertUpdater;
    MNTunnelLocationProjector * _tunnelLocationProjector;
    unsigned long long  _vehicleExitConfidence;
    struct { 
        double latitude; 
        double longitude; 
    }  _vehicleExitCoordinate;
    MNWalkingRouteBackgroundLoader * _walkingRouteBackgroundLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (id)_currentVehicleParkingInfoForParkingType:(long long)arg1;
- (int)_detectedMotionForLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_newMapMatcherForRoute:(id)arg1;
- (id)_overrideLocationForLocation:(id)arg1;
- (void)_overrideRerouteDirectionsRequest:(id)arg1;
- (void)_updateForAlternateRoutes:(id)arg1;
- (void)_updateForArrivalAtLegIndex:(unsigned long long)arg1;
- (void)_updateForLocation:(id)arg1;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)_updateNewTrafficIncidentAlerts:(id)arg1;
- (void)arrivalUpdater:(id)arg1 didUpdateArrivalInfo:(id)arg2;
- (void)arrivalUpdater:(id)arg1 didUpdateVehicleParkingType:(long long)arg2;
- (void)arrivalUpdaterDidEnterParkingDetectionRegion:(id)arg1;
- (void)arrivalUpdaterDidLeaveParkingDetectionRegion:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (void)setNavigationSessionState:(id)arg1;
- (bool)shouldProjectAlongRoute;
- (void)startTrackingWithInitialLocation:(id)arg1 targetLegIndex:(unsigned long long)arg2;
- (void)stopTracking;
- (void)tracePaused;
- (void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(bool)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 forAlert:(id)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
- (void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
- (int)transportType;
- (void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2;
- (void)updateForETAUResponse:(id)arg1;
- (void)updateRequestForETAUpdate:(id)arg1;
- (void)walkingRouteBackgroundLoader:(id)arg1 didUpdateWalkingRoute:(id)arg2;

@end
