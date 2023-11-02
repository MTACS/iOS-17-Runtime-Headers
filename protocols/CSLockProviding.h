
@protocol CSLockProviding <NSObject>

@required

- (bool)isLocked;
- (bool)showPasscode;
- (bool)unlockFromSource:(int)arg1;

@end
