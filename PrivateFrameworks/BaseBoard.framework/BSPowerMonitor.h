
@interface BSPowerMonitor : NSObject {
    NSHashTable * _lock_observers;
    struct IONotificationPort { } * _notificationPort;
    unsigned int  _notifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _rootDomainConnect;
    BSZeroingWeakReference * _weakSelfWrapper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
