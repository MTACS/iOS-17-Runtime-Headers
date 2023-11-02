
@interface IMUnlockMonitor : NSObject {
    void firstKeybagUnlockToken;
    void initializedBeforeFirstUnlock;
    void keybagChangeIOKitToken;
    void keybagChangeToken;
    void listeners;
    void sbLockChangeToken;
    void state;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (bool)hasReceivedFirstUnlockNotification;
- (id)init;
- (bool)isSystemLocked;
- (bool)isUnderFirstDataProtectionLock;
- (void)removeListener:(id)arg1;

@end
