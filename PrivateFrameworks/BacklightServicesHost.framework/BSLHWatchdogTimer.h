
@interface BSLHWatchdogTimer : NSObject <BLSHWatchdogTiming, SWSystemSleepObserver> {
    <BLSHWatchdogDelegate> * _delegate;
    NSString * _explanation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    unsigned long long  _lock_invalidationReason;
    bool  _lock_sleepImminentSinceScheduled;
    double  _lock_timeout;
    double  _lock_watchdogStart;
    BLSHWatchdogProvider * _provider;
    bool  _sleepImminentWhenScheduled;
    BSAbsoluteMachTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) unsigned long long invalidationReason;
@property (getter=hasSleepBeenImminentSinceScheduled, nonatomic) bool sleepImminentSinceScheduled;
@property (getter=wasSleepImminentWhenScheduled, nonatomic, readonly) bool sleepImminentWhenScheduled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)explanation;
- (bool)hasSleepBeenImminentSinceScheduled;
- (id)initWithExplanation:(id)arg1 delegate:(id)arg2 provider:(id)arg3;
- (void)invalidate:(unsigned long long)arg1;
- (unsigned long long)invalidationReason;
- (bool)isInvalidated;
- (void)scheduleWithTimeout:(double)arg1;
- (void)setSleepImminentSinceScheduled:(bool)arg1;
- (void)systemSleepMonitorDidWakeFromSleep:(id)arg1;
- (void)systemSleepMonitorSleepRequestAborted:(id)arg1;
- (void)systemSleepMonitorWillWakeFromSleep:(id)arg1;
- (void)timerFired;
- (bool)wasSleepImminentWhenScheduled;

@end
