
@interface CMSedentaryTimer_Internal : NSObject {
    bool  _timerArmed;
    NSObject<OS_dispatch_queue> * fClientQueue;
    NSObject<OS_dispatch_queue> * fDaemonQueue;
    void * fLocationdConnection;
}

@property (getter=isTimerArmed, nonatomic) bool timerArmed;

- (void)_handleAlarmDataResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 withHandler:(id /* block */)arg2;
- (void)_handleStartStopTimerResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 withHandler:(id /* block */)arg2;
- (bool)_isActive;
- (void)_registerForAlarmsWithHandler:(id /* block */)arg1;
- (void)_teardown;
- (void)dealloc;
- (id)init;
- (bool)isTimerArmed;
- (void)setTimerArmed:(bool)arg1;

@end
