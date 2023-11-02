
@interface SWSystemSleepMonitorProvider : NSObject <SWSystemSleepMonitorProviding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    NSObject<OS_dispatch_queue> * _lock_queue;
    bool  _lock_registered;
    unsigned int  _lock_systemPowerConnection;
    unsigned int  _lock_systemPowerNotifier;
    struct IONotificationPort { } * _lock_systemPowerPort;
    BSZeroingWeakReference * _lock_weakDelegateWrapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)allowPowerChange:(long long)arg1;
- (void)cancelPowerChange:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)registerForSystemPowerOnQueue:(id)arg1 withDelegate:(id)arg2;

@end
