
@protocol SBLockScreenLockingAndUnlocking <NSObject>

@required

- (bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (void)finishUIUnlockFromSource:(int)arg1;
- (bool)isAuthenticated;
- (bool)isUnlockDisabled;
- (void)jiggleLockIcon;
- (void)prepareForUILock;
- (void)prepareForUIUnlock;
- (void)setAuthenticated:(bool)arg1;
- (bool)shouldUnlockUIOnKeyDownEvent;
- (bool)willUIUnlockFromSource:(int)arg1;

@end
