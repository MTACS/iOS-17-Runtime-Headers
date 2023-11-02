
@interface SWSystemActivityAssertion : NSObject <BSInvalidatable, SWSystemSleepObserver> {
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_acquisitionHandler;
    unsigned int  _lock_assertionID;
    bool  _lock_clientDidInvalidate;
    bool  _lock_didFailToRevertPendingSleep;
    unsigned long long  _lock_startKernelAPWakeTime;
    unsigned long long  _lock_state;
    double  _lock_timeout;
    BSAbsoluteMachTimer * _lock_timeoutTimer;
    bool  _lock_wasSleepImminent;
    <SWSystemActivityProviding> * _provider;
    SWSystemSleepMonitor * _sleepMonitor;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireWithTimeout:(double)arg1 handler:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sleepMonitor:(id)arg2 systemActivityProvider:(id)arg3;
- (void)invalidate;
- (bool)isActive;
- (void)systemSleepMonitorDidWakeFromSleep:(id)arg1;
- (void)systemSleepMonitorSleepRequestAborted:(id)arg1;

@end
