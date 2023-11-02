
@interface SWWakingTimer : NSObject <BSCancellable, BSInvalidatable, BSTimerScheduleQuerying, SWSystemSleepObserver> {
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_handler;
    bool  _lock_invalidated;
    double  _lock_leeway;
    <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> * _lock_timer;
    <BSInvalidatable> * _preventSleepAssertion;
    SWScheduledSystemWake * _scheduledWake;
    <SWSystemSleepAssertionProviding> * _sleepAssertionProvider;
    SWSystemSleepMonitor * _sleepMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isScheduled, nonatomic, readonly) bool scheduled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeRemaining;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sleepMonitor:(id)arg2 sleepAssertionProvider:(id)arg3;
- (void)invalidate;
- (bool)isScheduled;
- (void)scheduleForDate:(id)arg1 leewayInterval:(double)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)scheduleWithFireInterval:(double)arg1 leewayInterval:(double)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)systemSleepMonitor:(id)arg1 prepareForSleepWithCompletion:(id /* block */)arg2;
- (void)systemSleepMonitor:(id)arg1 sleepRequestedWithResult:(id /* block */)arg2;
- (double)timeRemaining;

@end
