
@interface CSManualDuckingHandler : NSObject

- (void)duckAudioDeviceWithDeviceID:(unsigned int)arg1 duckedLevel:(float)arg2 rampDuration:(float)arg3;
- (void)duckDefaultOutputAudioDeviceWithDuckedLevel:(float)arg1 rampDuration:(float)arg2;
- (id)init;
- (void)resetDucking;

@end
