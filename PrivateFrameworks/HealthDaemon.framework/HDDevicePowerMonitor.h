
@interface HDDevicePowerMonitor : NSObject {
    bool  _isCharging;
    CUPowerSourceMonitor * _monitor;
    HKObserverSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) bool primarySourceIsCharging;

- (void).cxx_destruct;
- (void)addDevicePowerObserver:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)primarySourceIsCharging;
- (void)removeDevicePowerObserver:(id)arg1;

@end
