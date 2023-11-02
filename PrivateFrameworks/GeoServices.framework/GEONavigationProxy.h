
@interface GEONavigationProxy : NSObject {
    NSData * _activeRouteDetailsData;
    unsigned long long  _announcementStage;
    NSString * _currentRoadName;
    NSString * _destinationName;
    unsigned long long  _displayedStepIndex;
    <GEOServerFormattedStepStringFormatter> * _formatter;
    bool  _guidancePromptsEnabled;
    GEONavigationGuidanceState * _guidanceState;
    bool  _hasNavigationStartedToken;
    bool  _isConnectedToCarplay;
    bool  _isNavigatingInLowGuidance;
    GEOLocation * _lastLocation;
    bool  _locationUnreliable;
    struct { 
        unsigned int index; 
        float offset; 
    }  _matchedCoordinate;
    NSXPCConnection * _navdConnection;
    int  _navigationStartedToken;
    int  _navigationVoiceVolume;
    unsigned long long  _nextAnnouncementStage;
    struct { 
        double remainingTime; 
        double remainingDistance; 
    }  _positionFromDestination;
    struct { 
        double remainingTime; 
        double remainingDistance; 
    }  _positionFromManeuver;
    struct { 
        double remainingTime; 
        double remainingDistance; 
    }  _positionFromSign;
    NSArray * _rideSelections;
    GEOComposedRoute * _route;
    GEORouteMatch * _routeMatch;
    GEONavigationRouteSummary * _routeSummary;
    unsigned long long  _stepIndex;
    GEONameInfo * _stepNameInfo;
    GEOArrivalTimeAndDistanceInfo * _timeAndDistanceInfo;
    double  _timeUntilNextAnnouncement;
    GEONavigationRouteTransitSummary * _transitRouteSummary;
}

@property (nonatomic, retain) <GEOServerFormattedStepStringFormatter> *formatter;

- (void).cxx_destruct;
- (void)_clearState;
- (void)_closeNavdConnection;
- (void)_openNavdConnection;
- (void)_sendActiveRouteDetailsData;
- (void)_sendCurrentRoadName;
- (void)_sendGuidanceState;
- (void)_sendLocationAndCoordinate;
- (void)_sendNavigationVoiceVolume;
- (void)_sendPositionFromDestination;
- (void)_sendPositionFromManeuver;
- (void)_sendPositionFromSign;
- (void)_sendRideSelections;
- (void)_sendRouteSummary;
- (void)_sendStepIndex;
- (void)_sendStepNameInfo;
- (void)_sendTransitSummary;
- (void)dealloc;
- (id)formatter;
- (void)setActiveRouteDetailsData:(id)arg1;
- (void)setAnnouncementStage:(unsigned long long)arg1;
- (void)setArrivedAtWaypoint:(id)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)setClusteredSectionSelectedRideFromRoute:(id)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setDestinationName:(id)arg1 nextDestinationName:(id)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setETAUpdate:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setIsNavigatingInLowGuidance:(bool)arg1;
- (void)setLastLocation:(id)arg1 routeMatchedCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (void)setLocationUnreliable:(bool)arg1;
- (void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 navigationType:(int)arg3 isResumingMultipointRoute:(bool)arg4;
- (void)setNavigationState:(int)arg1;
- (void)setNavigationVoiceVolume:(int)arg1;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2;
- (void)setPositionFromDestination:(struct { double x1; double x2; })arg1;
- (void)setPositionFromManeuver:(struct { double x1; double x2; })arg1;
- (void)setPositionFromSign:(struct { double x1; double x2; })arg1;
- (void)setResumedNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)setRoute:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (void)setStepNameInfo:(id)arg1;
- (void)setTrafficForCurrentRoute:(id)arg1;
- (void)startWithDestinationName:(id)arg1 nextDestinationName:(id)arg2;
- (void)stop;
- (void)triggerHaptics:(int)arg1;

@end
