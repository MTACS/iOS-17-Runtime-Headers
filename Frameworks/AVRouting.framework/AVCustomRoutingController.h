
@interface AVCustomRoutingController : NSObject {
    NSArray * _authorizedRoutes;
    NSArray * _customActionItems;
    <AVCustomRoutingControllerDelegate> * _delegate;
    NSArray * _knownRouteIPs;
    NSArray * _pendingEvents;
    NSArray * _routeEventRecords;
    DASession * _session;
    bool  _sessionSuspended;
}

@property (nonatomic, readonly) NSArray *authorizedRoutes;
@property (nonatomic, retain) NSArray *customActionItems;
@property (nonatomic) <AVCustomRoutingControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *knownRouteIPs;
@property (nonatomic, readonly) NSArray *pendingEvents;
@property (nonatomic) DASession *session;
@property (getter=isSessionSuspended, nonatomic) bool sessionSuspended;

- (void).cxx_destruct;
- (void)_addAuthorizedRoute:(id)arg1;
- (void)_informClientOfEventReason:(long long)arg1 forRoute:(id)arg2;
- (void)_removeAuthorizedRoute:(id)arg1;
- (void)_resumeSessionUpdates;
- (id)_routeForDADevice:(id)arg1;
- (void)_setActive:(bool)arg1 forRoute:(id)arg2;
- (void)_setAuthorizedRoutes:(id)arg1;
- (void)_setPendingEvents:(id)arg1;
- (void)_startSession;
- (void)_stopSession;
- (void)_storeRecordForEvent:(id)arg1;
- (void)_suspendSessionUpdates;
- (void)_updateSessionForEvent:(id)arg1;
- (void)_updateSessionFromEventRecords;
- (void)_updateSessionStateToMatchRoute:(id)arg1;
- (void)_updateSessionToReflectCurrentlyActiveRoutes;
- (id)authorizedRoutes;
- (id)customActionItems;
- (void)dealloc;
- (id)delegate;
- (void)handleCustomActionItemSelected:(id)arg1;
- (id)init;
- (void)invalidateAuthorizationForRoute:(id)arg1;
- (bool)isRouteActive:(id)arg1;
- (bool)isSessionSuspended;
- (id)knownRouteIPs;
- (id)pendingEvents;
- (id)session;
- (void)setActive:(bool)arg1 forRoute:(id)arg2;
- (void)setCustomActionItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKnownRouteIPs:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionSuspended:(bool)arg1;

@end
