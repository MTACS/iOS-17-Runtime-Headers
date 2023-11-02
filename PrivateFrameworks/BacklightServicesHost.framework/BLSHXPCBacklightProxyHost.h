
@interface BLSHXPCBacklightProxyHost : NSObject <BLSHBacklightHostObserving, BLSXPCBacklightProxyHostInterface, BSInvalidatable> {
    int  _clientPid;
    unsigned int  _entitlements;
    <BLSBacklightProxy> * _localBacklightProxy;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_clientIsTaskScheduled;
    bool  _lock_observingActivatingWithEvent;
    <BLSXPCBacklightProxyClientInterface> * _lock_observingClient;
    bool  _lock_observingDeactivatingWithEvent;
    bool  _lock_observingDidChangeAlwaysOnEnabled;
    bool  _lock_observingDidCompleteUpdateToState;
    BLSXPCBacklightProxyObserverMask * _lock_observingMask;
    bool  _lock_observingPerformingEvent;
    bool  _lock_stateIsStale;
    bool  _lock_valid;
    RBSProcessMonitor * _processMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)backlight:(id)arg1 activatingWithEvent:(id)arg2;
- (void)backlight:(id)arg1 deactivatingWithEvent:(id)arg2;
- (void)backlight:(id)arg1 didChangeAlwaysOnEnabled:(bool)arg2;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;
- (void)backlight:(id)arg1 performingEvent:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)deviceSupportsAlwaysOn;
- (id)getBacklightState;
- (id)getFlipbookState;
- (id)initWithLocalBacklightProxy:(id)arg1 peer:(id)arg2;
- (void)invalidate;
- (bool)isAlwaysOnEnabled;
- (bool)isTransitioning;
- (oneway void)nowObservingWithMask:(id)arg1 completion:(id /* block */)arg2;
- (bool)observesActivation;
- (bool)observesDeactivation;
- (bool)observesPerformingAllEvents;
- (id)performChangeRequest:(id)arg1;

@end
