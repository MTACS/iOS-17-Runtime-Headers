
@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface> {
    NSData * _activeRouteDetailsData;
    NSData * _guidanceStateData;
    bool  _isListenerConnectionOpen;
    bool  _isResumingMultipointRoute;
    GEOLocation * _lastLocation;
    struct { 
        unsigned int index; 
        float offset; 
    }  _lastRouteMatchedCoordinate;
    int  _listenerConnectionOpenToken;
    NSMutableSet * _listenerPeers;
    NSData * _navigationVoiceVolumeData;
    NSData * _positionFromDestinationData;
    NSData * _positionFromManeuverData;
    NSData * _positionFromSignData;
    GEONavdPeer * _pushStatePeer;
    NSObject<OS_dispatch_queue> * _queue;
    NSData * _rideSelectionsData;
    GEOComposedRoute * _route;
    NSData * _routeSummaryData;
    unsigned long long  _state;
    NSData * _stepIndexData;
    NSData * _stepNameInfoData;
    GEOArrivalTimeAndDistanceInfo * _timeAndDistanceInfo;
    NSData * _transitSummaryData;
    int  _transportType;
    NSMutableSet * _unEntitledPeers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (void)_closePushStatePeerConnection;
- (void)_forEachValidPeer:(id /* block */)arg1;
- (void)_forEachValidPeerOnIsolationQueue:(id /* block */)arg1;
- (void)_notifyListenersOpenConnection;
- (void)_openPushStatePeerConnection:(id)arg1;
- (void)_requestActiveRouteDetailsDataWithPeer:(id)arg1;
- (void)_requestETAWithPeer:(id)arg1;
- (void)_requestGuidanceStateWithPeer:(id)arg1;
- (void)_requestNavigationVoiceVolumeWithPeer:(id)arg1;
- (void)_requestPositionFromDestinationWithPeer:(id)arg1;
- (void)_requestPositionFromManeuverWithPeer:(id)arg1;
- (void)_requestPositionFromSignWithPeer:(id)arg1;
- (void)_requestRideSelectionsWithPeer:(id)arg1;
- (void)_requestRouteSummaryWithPeer:(id)arg1;
- (void)_requestRouteWithPeer:(id)arg1;
- (void)_requestStepIndexWithPeer:(id)arg1;
- (void)_requestStepNameInfoWithPeer:(id)arg1;
- (void)_requestTransitSummaryWithPeer:(id)arg1;
- (void)_sendMessage:(long long)arg1 data:(id)arg2 toPeer:(id)arg3;
- (void)_updateAllPeersWithMessage:(long long)arg1 data:(id)arg2;
- (void)clearAllData;
- (id)init;
- (void)setArrivedAtWaypoint:(id)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)setCurrentRoadName:(id)arg1;
- (void)setETAUpdate:(id)arg1;
- (void)setLocation:(id)arg1 routeMatchedCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 isResumingMultipointRoute:(bool)arg3;
- (void)setNavigationVoiceVolumeWithData:(id)arg1;
- (void)setResumedNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)setRoute:(id)arg1;
- (void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1;
- (void)setRouteSummaryWithGuidanceStateData:(id)arg1;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1;
- (void)setRouteSummaryWithPositionFromDestinationData:(id)arg1;
- (void)setRouteSummaryWithPositionFromManeuverData:(id)arg1;
- (void)setRouteSummaryWithPositionFromSignData:(id)arg1;
- (void)setRouteSummaryWithRideSelectionsData:(id)arg1;
- (void)setRouteSummaryWithStepIndexData:(id)arg1;
- (void)setRouteSummaryWithStepNameInfoData:(id)arg1;
- (void)setRouteSummaryWithTransitSummaryData:(id)arg1;
- (bool)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(bool)arg2;
- (void)updateTrafficForCurrentRoute:(id)arg1;

@end
