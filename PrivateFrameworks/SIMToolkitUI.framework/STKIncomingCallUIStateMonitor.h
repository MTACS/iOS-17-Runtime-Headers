
@interface STKIncomingCallUIStateMonitor : NSObject {
    BSTimer * _fallbackTimer;
    int  _inCallAlertVisibleNotifyToken;
    bool  _isShowingIncomingCallUI;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_showingIncomingCallUI;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSHashTable * _observersLock_observers;
}

@property (nonatomic) bool isShowingIncomingCallUI;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)_fallbackTimerDuration;
- (void)_refreshState;
- (void)_setIncomingCallUIState:(bool)arg1 forReason:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)init;
- (bool)isShowingIncomingCallUI;
- (void)removeObserver:(id)arg1;
- (void)setIsShowingIncomingCallUI:(bool)arg1;

@end
