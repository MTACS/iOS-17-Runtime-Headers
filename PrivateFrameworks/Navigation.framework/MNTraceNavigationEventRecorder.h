
@interface MNTraceNavigationEventRecorder : NSObject <MNNavigationSessionObserver> {
    NSUUID * _currentPrimarySignID;
    NSUUID * _currentSecondarySignID;
    NSUUID * _junctionViewID;
    NSUUID * _laneGuidanceID;
    NSArray * _lastARInfos;
    MNLocation * _lastMatchedLocation;
    NSError * _previousSuppressedRerouteError;
    MNTraceRecorder * _traceRecorder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionForWaypoint:(id)arg1;
- (void)_didUpdateArrivalInfo:(id)arg1;
- (void)_recordDebugSettings;
- (void)_recordEvent:(long long)arg1 description:(id)arg2;
- (id)_stringForSignDescription:(id)arg1;
- (void)_userGotOnRoute;
- (void)_userWentOffRoute;
- (id)initWithTraceRecorder:(id)arg1;
- (void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didInsertWaypoint:(id)arg2;
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)navigationSession:(id)arg1 didReceiveTransitAlert:(id)arg2;
- (void)navigationSession:(id)arg1 didRemoveWaypoint:(id)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationSession:(id)arg1 didRerouteWithWaypoints:(id)arg2;
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)navigationSession:(id)arg1 didSendNavigationServiceCallback:(id)arg2;
- (void)navigationSession:(id)arg1 didStartWithRoute:(id)arg2 navigationType:(long long)arg3 isResumingMultipointRoute:(bool)arg4 isReconnecting:(bool)arg5;
- (void)navigationSession:(id)arg1 didStopWithReason:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateTargetLegIndex:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 showJunctionView:(id)arg2;
- (void)navigationSession:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSession:(id)arg1 updateSignsWithARInfo:(id)arg2;
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)setLastMatchedLocation:(id)arg1;

@end
