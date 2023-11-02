
@protocol SBFScreenWakeAnimationControlling <NSObject>

@required

- (bool)interruptSleepAnimationIfNeeded;
- (bool)isSleepAnimationInProgress;
- (bool)isWakeAnimationInProgress;
- (bool)isWakeAnimationInProgressForSource:(long long)arg1;
- (void)prepareToWakeForSource:(void *)arg1 timeAlpha:(void *)arg2 statusBarAlpha:(void *)arg3 target:(void *)arg4 dateView:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 10: long long, double, double, <SBFScreenWakeAnimationTarget> *, SBFLockScreenDateView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setScreenWakeTemporarilyDisabled:(bool)arg1 forReason:(NSString *)arg2;
- (void)sleepForSource:(void *)arg1 target:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: long long, <SBFScreenWakeAnimationTarget> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
