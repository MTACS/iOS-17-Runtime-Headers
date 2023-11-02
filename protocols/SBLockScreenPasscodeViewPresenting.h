
@protocol SBLockScreenPasscodeViewPresenting <NSObject>

@required

- (bool)isPasscodeLockVisible;
- (void)setPasscodeLockVisible:(bool)arg1 animated:(bool)arg2;
- (void)setPasscodeLockVisible:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
