
@protocol CSAudioPreprocessorDelegate <NSObject>

@required

- (void)audioPreprocessor:(CSAudioPreprocessor *)arg1 hasAvailableBuffer:(NSData *)arg2 atTime:(unsigned long long)arg3 arrivalTimestampToAudioRecorder:(unsigned long long)arg4 numberOfChannels:(int)arg5;

@end
