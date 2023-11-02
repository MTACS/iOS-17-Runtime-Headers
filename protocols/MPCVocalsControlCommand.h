
@protocol MPCVocalsControlCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)activateVocalsControl:(bool)arg1;
- (long long)disabledReason;
- (bool)isActive;
- (bool)isContinuous;
- (bool)isDisabled;
- (float)level;
- (float)maxLevel;
- (float)minLevel;
- (MPCPlayerCommandRequest *)setVocalsLevel:(float)arg1;

@end
