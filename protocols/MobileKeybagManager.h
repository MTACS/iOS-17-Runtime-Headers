
@protocol MobileKeybagManager

@required

- (double)backOffTime;
- (long long)currentState;
- (unsigned long long)failedAttemptCount;
- (bool)isLocked;
- (void)lock;
- (void)registerFirstUnlockBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)registerLockStateChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)unlockWithPasscode:(NSString *)arg1 error:(id*)arg2;

@end
