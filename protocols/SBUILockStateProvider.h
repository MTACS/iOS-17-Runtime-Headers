
@protocol SBUILockStateProvider <NSObject>

@required

- (void)coverSheetPresentationManager:(void *)arg1 unlockWithRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SBCoverSheetPresentationManager *, SBLockScreenUnlockRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)isLockScreenPresentationPending;
- (bool)isUILocked;

@end
