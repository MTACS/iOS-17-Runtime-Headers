
@interface RBProcessMonitorObserver : NSObject <RBProcessMonitorObserving> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableDictionary * _configurations;
    <RBProcessMonitorObserverConnection> * _connection;
    bool  _didClearState;
    bool  _extantEventUpdate;
    bool  _extantStateUpdate;
    RBSProcessHandle * _lastMatchedHandle;
    double  _lastSend;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <RBProcessMonitoring> * _monitor;
    NSMutableArray * _pendingExitEvents;
    NSSet * _pendingPreventLaunchPredicates;
    RBProcessMap * _pendingProcessState;
    RBProcess * _process;
    unsigned int  _qos;
    RBSProcessStateDescriptor * _stateDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkForBadActorWithPendingStates:(id)arg1;
- (void)_lock_addAllConfiguredStatesToPending;
- (void)_lock_addConfigurationStatesToPending:(id)arg1;
- (void)_lock_clearPendingNonterminalStates;
- (void)_lock_rebuildConfiguration;
- (void)_lock_sendPendingStateUpdates;
- (void)addConfiguration:(id)arg1;
- (id)captureState;
- (void)dealloc;
- (id)description;
- (void)didObserveProcessExit:(id)arg1;
- (void)didResolvePreventLaunchPredicates:(id)arg1;
- (id)initWithMonitor:(id)arg1 forProcess:(id)arg2 connection:(id)arg3;
- (void)invalidate;
- (void)processMonitor:(id)arg1 didChangeProcessStates:(id)arg2;
- (void)removeConfigurationWithIdentifier:(unsigned long long)arg1;
- (id)stateCaptureTitle;

@end
