
@protocol SBLockScreenBacklightControlling <NSObject>

@required

- (double)backlightLevel;
- (long long)backlightLuminance;
- (bool)isInScreenOffMode;
- (void)setBacklightLevel:(double)arg1;
- (void)setInScreenOffMode:(bool)arg1;
- (void)setInScreenOffMode:(bool)arg1 forAutoUnlock:(bool)arg2 fromUnlockSource:(int)arg3;
- (void)setInScreenOffMode:(bool)arg1 preservingCoverSheetPresentationState:(bool)arg2;
- (bool)shouldDisableALS;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;

@end
