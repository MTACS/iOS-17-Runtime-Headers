
@interface FigCaptureDeviceLockStateMonitor : NSObject {
    bool  _deviceIsLocked;
    int  _deviceLockStateChangedToken;
    NSMutableArray * _deviceLockStateObservers;
    bool  _invalid;
    NSDictionary * _mobileKeyBagOptions;
    NSObject<OS_dispatch_queue> * _monitorQueue;
}

+ (void)initialize;
+ (id)sharedDeviceLockStateMonitor;

- (void)addDeviceLockStateObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeDeviceLockStateObserver:(id)arg1;

@end
