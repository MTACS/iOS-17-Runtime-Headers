
@interface POKeyBag : NSObject {
    bool  _firstUnlock;
    id /* block */  _lockHandler;
    int  _notifyToken;
    id /* block */  _startupCompletion;
    id /* block */  _unlockCompletion;
}

@property bool firstUnlock;
@property (copy) id /* block */ lockHandler;
@property (copy) id /* block */ startupCompletion;
@property (copy) id /* block */ unlockCompletion;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)firstUnlock;
- (id)init;
- (bool)isUserKeybagUnlocked;
- (id /* block */)lockHandler;
- (void)setFirstUnlock:(bool)arg1;
- (void)setLockHandler:(id /* block */)arg1;
- (void)setStartupCompletion:(id /* block */)arg1;
- (void)setUnlockCompletion:(id /* block */)arg1;
- (void)startObservingKeyBagLockStatusChanges;
- (id /* block */)startupCompletion;
- (void)stopObservingKeyBagLockStatusChanges;
- (id /* block */)unlockCompletion;
- (void)waitForKeyBagFirstUnlockOnStartupWithCompletion:(id /* block */)arg1;
- (void)waitForKeyBagUnlockWithCompletion:(id /* block */)arg1;

@end
