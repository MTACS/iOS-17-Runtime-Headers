
@protocol CHHapticAdvancedPatternPlayerExtended <CHHapticAdvancedPatternPlayer>

@required

- (bool)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3;
- (bool)earlyUnduckAudioAtTime:(double)arg1 error:(id*)arg2;
- (bool)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3;

@end
