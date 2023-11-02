
@interface DBKeybagMonitor : NSObject {
    double  _backoffInterval;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    int  _lockStateNotificationToken;
    long long  _lockedState;
    CARObserverHashTable * _observers;
    bool  _permanentlyBlocked;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) double backoffInterval;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) long long currentState;
@property (nonatomic) int lockStateNotificationToken;
@property (getter=isLocked, nonatomic, readonly) bool locked;
@property (nonatomic) long long lockedState;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic) bool permanentlyBlocked;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_handleKeybagStatusChanged;
- (void)_queue_updateLockedState;
- (void)addObserver:(id)arg1;
- (double)backoffInterval;
- (id)callbackQueue;
- (long long)currentState;
- (void)dealloc;
- (id)init;
- (bool)isBlocked;
- (bool)isLocked;
- (int)lockStateNotificationToken;
- (long long)lockedState;
- (id)observers;
- (bool)permanentlyBlocked;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setBackoffInterval:(double)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setLockStateNotificationToken:(int)arg1;
- (void)setLockedState:(long long)arg1;
- (void)setObservers:(id)arg1;
- (void)setPermanentlyBlocked:(bool)arg1;
- (void)setQueue:(id)arg1;

@end
