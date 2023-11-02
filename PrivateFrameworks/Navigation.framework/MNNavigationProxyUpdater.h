
@interface MNNavigationProxyUpdater : NSObject <MNNavigationSessionObserver> {
    GEONavigationProxy * _navigationProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_geoNavigationTypeForNavigationType:(long long)arg1;
- (void)enteredRoutePreviewWithTransportType:(int)arg1;
- (id)init;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)navigationSession:(id)arg1 didStartWithRoute:(id)arg2 navigationType:(long long)arg3 isResumingMultipointRoute:(bool)arg4 isReconnecting:(bool)arg5;
- (void)navigationSession:(id)arg1 didStopWithReason:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateStepNameInfo:(id)arg2;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSessionStopped:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setIsNavigatingInLowGuidance:(bool)arg1;
- (void)setVoiceGuidance:(unsigned long long)arg1;
- (void)updateClusteredSectionSelectedRideForNavigationSession:(id)arg1;

@end
