
@protocol EARPSRAudioProcessorDelegate <NSObject>

@optional

- (void)psrAudioProcessor:(EARPSRAudioProcessor *)arg1 finishedWithFinalSpeakerVector:(NSData *)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)psrAudioProcessor:(EARPSRAudioProcessor *)arg1 hasResult:(NSData *)arg2 numElements:(unsigned long long)arg3;
- (void)psrAudioProcessor:(EARPSRAudioProcessor *)arg1 hasSpeakerVector:(NSData *)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;

@end
