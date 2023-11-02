
@interface MSPNavigationListener : NSObject <GEONavigationListenerPrivateDelegate> {
    GEOSharedNavState * _currentState;
    <MSPNavigationListenerDelegate> * _delegate;
    GEONavigationGuidanceState * _guidanceState;
    GEONavigationListener * _navigationListener;
    NSString * _navigationSessionIdentifier;
    bool  _postedStateIsReady;
    GEOSharedNavState * _state;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, retain) GEOSharedNavState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSPNavigationListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCompatibleNavigationType;
@property (nonatomic, readonly) bool isCompatibleTransportType;
@property (nonatomic, readonly) bool isInNavigatingState;
@property (nonatomic, readonly, copy) NSString *navigationSessionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_analyticsPipelineTransportModeForGEOTransportType:(int)arg1;
- (void)_checkStateIsReady;
- (int)_currentTransportType;
- (bool)_currentlyArrivedAtWaypoint;
- (void)_initPendingStateIfNeeded;
- (void)_initPendingStateIfNeededWithTransportType:(int)arg1 isResumingMultipointRoute:(bool)arg2;
- (bool)_isCompatibleTransportType:(int)arg1;
- (void)_performDelegateNotificationBlockIfReady:(id /* block */)arg1;
- (int)_referenceFrameForDestination:(id)arg1;
- (bool)_updateArrivalTimeAndDistance:(id)arg1;
- (void)_updateCurrentWaypointIndexFromArrivalTimeInfo:(id)arg1;
- (bool)_updateLocation:(id)arg1 withRouteMatchedCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (void)_updateRoute:(id)arg1;
- (bool)_updateTraffic:(id)arg1;
- (void)_updateTransaction;
- (void)_updateTransportTypeFromCurrentState;
- (bool)_updateWaypointsIfNeeded:(id)arg1;
- (id)currentState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isCompatibleNavigationType;
- (bool)isCompatibleTransportType;
- (bool)isInNavigatingState;
- (void)navigationListener:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationListener:(id)arg1 didChangeNavigationState:(unsigned long long)arg2 transportType:(int)arg3;
- (void)navigationListener:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationListener:(id)arg1 didUpdateETA:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateLocation:(id)arg2 routeMatchedCoordinate:(struct { unsigned int x1; float x2; })arg3;
- (void)navigationListener:(id)arg1 didUpdateRoute:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateTrafficForCurrentRoute:(id)arg2;
- (id)navigationSessionIdentifier;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
