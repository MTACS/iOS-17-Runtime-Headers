
@interface SDLockHandler : NSObject {
    <SDLockHandlerDelegate> * _delegate;
    _Atomic bool  _didFirstUnlockInHomeScreen;
    _Atomic bool  _didFirstUnlockInSpringBoard;
    _Atomic bool  _didFirstUnlockSinceBoot;
    _Atomic bool  _didMigrationComplete;
    _Atomic bool  _didStart;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _notifyTokenKeybagLockStateNotifyToken;
    int  _notifyTokenSBHomescreenUnlocked;
    int  _notifyTokenSBLockState;
    unsigned long long  _options;
}

+ (void)setLockHandlerWithDelegate:(id)arg1 options:(unsigned long long)arg2;
+ (id)sharedLockHandler;

- (void).cxx_destruct;
- (void)checkMigrationComplete;
- (bool)firstUnlockedInSB;
- (void)forceMigrationComplete;
- (void)handleFirstUnlock;
- (void)handleFirstUnlockHomeScreen;
- (void)handleFirstUnlockInSpringBoard;
- (void)handleMigrationComplete;
- (id)initWithDelegate:(id)arg1 options:(unsigned long long)arg2;
- (bool)migrationComplete;
- (void)start;
- (bool)unlocked;
- (bool)unlockedSinceBoot;

@end
