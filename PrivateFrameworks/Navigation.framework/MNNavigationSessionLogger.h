
@interface MNNavigationSessionLogger : NSObject <MNNavigationSessionObserver> {
    NSHashTable * _activeCameraInfos;
    NSMutableDictionary * _displayETALookup;
    NSArray * _lastARInfos;
    NSUUID * _lastGuidanceSignID;
    NSError * _previousSuppressedRerouteError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stringForLocationType:(unsigned long long)arg1;
- (id)_stringForStyleAttributeKey:(unsigned int)arg1;
- (void)_updateCameraStyleAttributesForLocation:(id)arg1;
- (id)init;
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)navigationSession:(id)arg1 didInsertWaypoint:(id)arg2;
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)navigationSession:(id)arg1 didRemoveWaypoint:(id)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationSession:(id)arg1 didRerouteWithWaypoints:(id)arg2;
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)navigationSession:(id)arg1 didStartWithRoute:(id)arg2 navigationType:(long long)arg3 isResumingMultipointRoute:(bool)arg4 isReconnecting:(bool)arg5;
- (void)navigationSession:(id)arg1 didStopWithReason:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateTargetLegIndex:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 updateSignsWithARInfo:(id)arg2;
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSessionDidArrive:(id)arg1;
- (void)navigationSessionDidCancelReroute:(id)arg1;
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;
- (void)navigationSessionWillReroute:(id)arg1;

@end
