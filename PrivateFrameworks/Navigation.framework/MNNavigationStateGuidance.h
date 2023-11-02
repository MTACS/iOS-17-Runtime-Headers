
@interface MNNavigationStateGuidance : MNNavigationState {
    MNNavigationSessionManager * _navigationSessionManager;
    MNStartNavigationDetails * _startDetails;
}

+ (id)guidanceStateForStartDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3;

- (void).cxx_destruct;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)advanceToNextLeg;
- (void)changeOfflineState:(unsigned long long)arg1;
- (void)changeTransportType:(int)arg1 route:(id)arg2;
- (id)clParameters;
- (id)currentDestination;
- (unsigned long long)desiredLocationProviderType;
- (void)disableNavigationCapability:(unsigned long long)arg1;
- (void)enableNavigationCapability:(unsigned long long)arg1;
- (void)enterState;
- (void)forceReroute;
- (id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 startDetails:(id)arg3;
- (void)insertWaypoint:(id)arg1;
- (void)leaveState;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)postEnterState;
- (void)preEnterState;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)removeWaypointAtIndex:(unsigned long long)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (bool)requiresHighMemoryThreshold;
- (void)rerouteWithWaypoints:(id)arg1;
- (void)resumeOriginalDestination;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setSimulationPosition:(double)arg1;
- (void)setSimulationSpeedMultiplier:(double)arg1;
- (void)setSimulationSpeedOverride:(double)arg1;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (bool)shouldClearStoredRoutes;
- (id)simulationLocationProvider;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigationWithReason:(unsigned long long)arg1;
- (void)switchToRoute:(id)arg1;
- (id)traceManager;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end
