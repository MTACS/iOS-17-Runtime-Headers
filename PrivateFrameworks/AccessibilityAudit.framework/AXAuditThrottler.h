
@interface AXAuditThrottler : NSObject {
    bool  __alwaysReschedule;
    NSObject<OS_dispatch_source> * __dispatchTimer;
    NSObject<OS_dispatch_queue> * __fireQueue;
    double  __interval;
    NSDate * __lastFireTime;
    bool  __pendingFire;
    SEL  __selector;
    NSObject * __target;
}

@property (nonatomic) bool _alwaysReschedule;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *_dispatchTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_fireQueue;
@property (nonatomic) double _interval;
@property (nonatomic, retain) NSDate *_lastFireTime;
@property (nonatomic) bool _pendingFire;
@property (nonatomic) SEL _selector;
@property (nonatomic) NSObject *_target;

+ (id)throttlerWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 queue:(id)arg4 alwaysReschedule:(bool)arg5;

- (void).cxx_destruct;
- (bool)_alwaysReschedule;
- (id)_dispatchTimer;
- (void)_fire;
- (id)_fireQueue;
- (double)_interval;
- (id)_lastFireTime;
- (bool)_pendingFire;
- (void)_scheduleTimerAfterDelay:(double)arg1;
- (SEL)_selector;
- (id)_target;
- (void)scheduleNow;
- (void)set_alwaysReschedule:(bool)arg1;
- (void)set_dispatchTimer:(id)arg1;
- (void)set_fireQueue:(id)arg1;
- (void)set_interval:(double)arg1;
- (void)set_lastFireTime:(id)arg1;
- (void)set_pendingFire:(bool)arg1;
- (void)set_selector:(SEL)arg1;
- (void)set_target:(id)arg1;

@end
