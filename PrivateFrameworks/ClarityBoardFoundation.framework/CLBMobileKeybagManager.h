
@interface CLBMobileKeybagManager : NSObject <MobileKeybagManager> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMutableArray * _firstUnlockCallbackBlocks;
    int  _firstUnlockToken;
    int  _keybagStatusChangedToken;
    NSDictionary * _lockedState;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _stateChangedCallbackBlocks;
}

@property (nonatomic, readonly) double backOffTime;
@property (nonatomic, readonly) long long currentState;
@property (nonatomic, readonly) unsigned long long failedAttemptCount;
@property (getter=isLocked, nonatomic, readonly) bool locked;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleFirstUnlock;
- (void)_handleKeybagStatusChanged;
- (void)_queue_updateLockedState;
- (double)backOffTime;
- (long long)currentState;
- (void)dealloc;
- (unsigned long long)failedAttemptCount;
- (id)init;
- (bool)isLocked;
- (void)lock;
- (void)registerFirstUnlockBlock:(id /* block */)arg1;
- (void)registerLockStateChangedBlock:(id /* block */)arg1;
- (bool)unlockWithPasscode:(id)arg1 error:(id*)arg2;

@end
