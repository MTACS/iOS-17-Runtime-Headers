
@protocol CSAudioTimeConversionProviding <NSObject>

@required

- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;

@end
