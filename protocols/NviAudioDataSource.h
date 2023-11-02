
@protocol NviAudioDataSource <NviDataSource>

@required

- (unsigned long long)numBytesPerSample;
- (unsigned long long)sampleRate;

@end
