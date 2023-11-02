
@interface GEOOfflineService : NSObject <GEOPListStateCapturing> {
    geo_isolater * _applicationStateIsolater;
    GEOXPCConnection * _connection;
    NSObject<OS_dispatch_source> * _connectivityCheckTimer;
    int  _daemonLaunchNotifyToken;
    <GEOOfflineServiceDelegate> * _delegate;
    unsigned long long  _delegateInformedState;
    NSObject<OS_dispatch_source> * _heartbeatTimer;
    <GEOOfflineServiceViewportReporter> * _latestMapView;
    id  _offlineAvailabilityObserver;
    NSMapTable * _registeredMapViews;
    unsigned long long  _savedState;
    unsigned long long  _state;
    unsigned long long  _stateCaptureHandle;
    id /* block */  _stateUpdateBlock;
    NSDictionary * _subscriptionInfos;
    GEOMapDataSubscriptionManager * _subscriptionManager;
    int  _subscriptionsChangedNotifyToken;
    unsigned long long  _suggestedState;
    NSObject<OS_dispatch_source> * _updateCoalescingTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOOfflineServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUsingOffline;
@property (nonatomic, readonly) unsigned long long offlineRegionCount;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (unsigned long long)activeStateForCohortId:(id)arg1;
+ (id)shared;
+ (id)sharedNoCreate;

- (void).cxx_destruct;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delegate:(id)arg1 prefersState:(unsigned long long)arg2;
- (void)delegatePrefersState:(unsigned long long)arg1;
- (bool)isUsingOffline;
- (void)mapView:(id)arg1 viewPortUpdated:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)mapView:(id)arg1 viewPortUpdated:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 showingGrid:(bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)offlineRegionCount;
- (void)registerMapView:(id)arg1 withPriority:(double)arg2;
- (void)removeDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStateAuto;
- (void)setStateForcedOffline;
- (void)startServiceIfEnabled;
- (unsigned long long)state;
- (void)unregisterMapView:(id)arg1;

@end
