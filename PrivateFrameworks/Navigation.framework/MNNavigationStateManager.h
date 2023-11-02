
@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface> {
    GEOApplicationAuditToken * _auditToken;
    MNNavigationState * _currentState;
    bool  _isStarted;
    geo_isolater * _isolater;
    <MNNavigationSessionManagerDelegate> * _navigationDelegate;
    MNObserverHashTable * _navigationStateObservers;
}

@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) MNNavigationState *currentState;
@property (nonatomic, readonly) unsigned long long currentStateType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStarted;
@property (nonatomic) <MNNavigationSessionManagerDelegate> *navigationDelegate;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_changeToDesiredLocationProviderTypeForState:(id)arg1;
- (id)_initialState;
- (void)_replayStateForNewObserver:(id)arg1;
- (unsigned long long)_stateTypeForState:(id)arg1;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)advanceToNextLeg;
- (id)auditToken;
- (void)changeOfflineState:(unsigned long long)arg1;
- (void)changeTransportType:(int)arg1 route:(id)arg2;
- (void)changeUserOptions:(id)arg1;
- (void)checkinForNavigationService:(id /* block */)arg1;
- (id)currentState;
- (unsigned long long)currentStateType;
- (void)dealloc;
- (void)disableNavigationCapability:(unsigned long long)arg1;
- (void)enableNavigationCapability:(unsigned long long)arg1;
- (void)forceReroute;
- (id)init;
- (void)insertWaypoint:(id)arg1;
- (void)interfaceHashesWithHandler:(id /* block */)arg1;
- (bool)isStarted;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (id)navSessionDestination;
- (id)navigationDelegate;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeWaypointAtIndex:(unsigned long long)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (void)rerouteWithWaypoints:(id)arg1;
- (void)reset;
- (void)resumeOriginalDestination;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setGuidanceType:(unsigned long long)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setNavigationDelegate:(id)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)setSimulationPosition:(double)arg1;
- (void)setSimulationSpeedMultiplier:(double)arg1;
- (void)setSimulationSpeedOverride:(double)arg1;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)start;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(id /* block */)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigationWithReason:(unsigned long long)arg1;
- (void)switchToRoute:(id)arg1;
- (void)transitionToState:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end
