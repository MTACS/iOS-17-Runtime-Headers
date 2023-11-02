
@protocol EARSyncPSRAudioProcessorDelegate <NSObject>

@optional

- (void)psrAudioProcessor:(EARSyncPSRAudioProcessor *)arg1 finishedWithFinalSpeakerVector:(NSData *)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)psrAudioProcessor:(EARSyncPSRAudioProcessor *)arg1 hasSpeakerVector:(NSData *)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;

@end
