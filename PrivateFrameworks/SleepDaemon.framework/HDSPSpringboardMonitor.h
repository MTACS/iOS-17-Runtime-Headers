
@interface HDSPSpringboardMonitor : NSObject {
    bool  _isAppleWatch;
    int  _notifyToken;
    HKSPObserverSet * _observers;
    bool  _springboardStarted;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _springboardStartedLock;
}

@property (nonatomic, readonly) bool isAppleWatch;
@property (nonatomic, readonly) bool isSpringboardStarted;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (nonatomic, readonly) bool springboardStarted;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } springboardStartedLock;

- (void).cxx_destruct;
- (void)_checkAndNotify;
- (bool)_checkSpringBoardStarted;
- (id)_processName;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithCallbackScheduler:(id)arg1 isAppleWatch:(bool)arg2;
- (bool)isAppleWatch;
- (bool)isSpringboardStarted;
- (int)notifyToken;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (bool)springboardStarted;
- (struct os_unfair_lock_s { unsigned int x1; })springboardStartedLock;

@end
