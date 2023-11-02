
@protocol CSAudioFileWriter <NSObject>

@required

- (bool)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2;
- (bool)endAudio;

@end
