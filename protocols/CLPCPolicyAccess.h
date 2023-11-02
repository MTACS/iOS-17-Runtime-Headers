
@protocol CLPCPolicyAccess

@required

- (unsigned long long)isInGameMode:(id*)arg1;
- (unsigned long long)isInLowPowerMode:(id*)arg1;
- (unsigned long long)isInSustainableMode:(id*)arg1;
- (bool)setGameMode:(bool)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setGameModeOnProcess:(bool)arg1 targetProcess:(int)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)setLowPowerMode:(bool)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setSustainableMode:(bool)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
