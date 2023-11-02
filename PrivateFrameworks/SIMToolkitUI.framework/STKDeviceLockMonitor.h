
@interface STKDeviceLockMonitor : NSObject {
    bool  _deviceLocked;
    bool  _isDeviceLocked;
    int  _notify_token;
    NSHashTable * _observersList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (nonatomic) bool isDeviceLocked;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateDeviceLockState;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isDeviceLocked;
- (void)removeObserver:(id)arg1;
- (void)setIsDeviceLocked:(bool)arg1;

@end
