
@interface CODiscoveryManager : NSObject {
    <CODiscoveryManagerDelegate> * _delegate;
    double  _discoveryDelay;
    NSDictionary * _envelopes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_source> * _timer;
    bool  _timerEnabled;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) <CODiscoveryManagerDelegate> *delegate;
@property (nonatomic, readonly) double discoveryDelay;
@property (nonatomic, retain) NSDictionary *envelopes;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (getter=isTimerEnabled, nonatomic) bool timerEnabled;

+ (id)managerWithDiscoveryDelay:(double)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)_configureTimer;
- (void)_disableTimer_unsafe;
- (void)_enableTimer_unsafe;
- (id)_initWithDiscoveryDelay:(double)arg1 delegate:(id)arg2;
- (void)_invokeDelegate:(id)arg1;
- (void)_timerFired;
- (id)_triggerDiscovery_unsafe;
- (void)_withLock:(id /* block */)arg1;
- (bool)addDiscoveryRecord:(id)arg1;
- (void)clearRecords;
- (unsigned long long)count;
- (void)dealloc;
- (id)delegate;
- (double)discoveryDelay;
- (id)envelopes;
- (bool)isTimerEnabled;
- (void)setEnvelopes:(id)arg1;
- (void)setTimerEnabled:(bool)arg1;
- (id)timer;

@end
