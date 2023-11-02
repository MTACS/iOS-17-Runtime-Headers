
@interface BLSHBacklightIdleProvider : NSObject <BLSHBacklightHostObserving, BLSHUserIdleProvidingDelegate, BSInvalidatable> {
    <BLSHBacklightHostObservable><BLSBacklightChangeRequestable> * _backlightHost;
    <BLSHBacklightIdleProviderDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_active;
    bool  _lock_didStartTransitionToNewState;
    bool  _lock_idle;
    <BLSHUserIdleProviding> * _lock_idleProvider;
    double  _lock_idleTimeout;
    bool  _lock_invalidated;
    double  _lock_nonInteractiveIdleTimeout;
    bool  _lock_pendingIdleInactiveRequest;
    long long  _lock_previousBacklightState;
    bool  _lock_started;
    bool  _lock_suppressed;
    bool  _lock_suspended;
    bool  _lock_userActivityOccured;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLSHBacklightIdleProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIdle, nonatomic, readonly) bool idle;
@property (nonatomic) double idleTimeout;
@property (nonatomic) double nonInteractiveIdleTimeout;
@property (readonly) Class superclass;
@property (getter=hasUserActivityOccured, nonatomic, readonly) bool userActivityOccured;

+ (id)createSharedProviderWithLocalAssertionService:(id)arg1;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;
- (void)backlightHost:(id)arg1 willTransitionToState:(long long)arg2 forEvent:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (bool)hasUserActivityOccured;
- (void)idleProviderDidIdle:(id)arg1;
- (void)idleProviderDidUnidle:(id)arg1;
- (double)idleTimeout;
- (id)initWithLocalAssertionService:(id)arg1 idleProvider:(id)arg2 backlightHost:(id)arg3;
- (void)invalidate;
- (bool)isActive;
- (bool)isIdle;
- (double)nonInteractiveIdleTimeout;
- (void)reset;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdleTimeout:(double)arg1;
- (void)setNonInteractiveIdleTimeout:(double)arg1;
- (void)setSuspended:(bool)arg1;
- (void)signalUserActivityOccurred;
- (void)start;

@end
