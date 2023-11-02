
@interface ATThreadSafeHeadTracker : NSObject <SWSystemSleepObserver> {
    struct shared_ptr<ThreadSafeHeadTracker> { 
        struct ThreadSafeHeadTracker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _impl;
    SWSystemSleepMonitor * _sleepMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleSystemSleepMonitorDidWakeFromSleep;
- (id)initWithRateLimit:(float)arg1 detectPredictionAnchor:(bool)arg2 userContext:(void*)arg3 factory:(int (*)arg4 execution:(int (*)arg5 finalizer:(int (*)arg6;
- (void)systemSleepMonitorDidWakeFromSleep:(id)arg1;

@end
