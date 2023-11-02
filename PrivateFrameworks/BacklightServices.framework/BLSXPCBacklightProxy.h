
@interface BLSXPCBacklightProxy : NSObject <BLSBacklightProxy, BLSXPCBacklightProxyClientInterface, BSInvalidatable> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _lock_backlightState;
    bool  _lock_deviceSupportsAlwaysOn;
    bool  _lock_deviceSupportsAlwaysOnCached;
    bool  _lock_invalidated;
    bool  _lock_isAlwaysOnEnabled;
    bool  _lock_isAlwaysOnEnabledCached;
    bool  _lock_isBacklightStateCached;
    NSMapTable * _lock_observers;
    int  _lock_observingActivatingWithEventCount;
    int  _lock_observingDeactivatingWithEventCount;
    int  _lock_observingDidChangeAlwaysOnEnabledCount;
    int  _lock_observingDidCompleteUpdateToStateCount;
    int  _lock_observingEventsArrayCount;
    int  _lock_observingPerformingEventCount;
}

@property (getter=isAlwaysOnEnabled, nonatomic, readonly) bool alwaysOnEnabled;
@property (nonatomic, readonly) long long backlightState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceSupportsAlwaysOn;
@property (nonatomic, readonly) long long flipbookState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (long long)backlightState;
- (void)dealloc;
- (bool)deviceSupportsAlwaysOn;
- (oneway void)didChangeAlwaysOnEnabled:(id)arg1;
- (oneway void)didCompleteUpdateToState:(id)arg1 forEvents:(id)arg2 abortedEvents:(id)arg3;
- (long long)flipbookState;
- (id)init;
- (void)invalidate;
- (bool)isAlwaysOnEnabled;
- (bool)isTransitioning;
- (id)performChangeRequest:(id)arg1;
- (oneway void)performingEvent:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
