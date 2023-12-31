
@protocol AVAudioSessionDelegate <NSObject>

@optional

- (void)beginInterruption;
- (void)endInterruption;
- (void)endInterruptionWithFlags:(unsigned long long)arg1;
- (void)inputIsAvailableChanged:(bool)arg1;

@end
