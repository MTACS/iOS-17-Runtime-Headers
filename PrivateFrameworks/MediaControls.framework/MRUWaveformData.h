
@interface MRUWaveformData : NSObject {
    NSArray * _amplitudes;
}

@property (nonatomic, retain) NSArray *amplitudes;

+ (int)amplitudeCount;
+ (id)zero;

- (void).cxx_destruct;
- (id)amplitudes;
- (id)initWithAmplitudes:(id)arg1;
- (id)initWithFFTSamples:(float*)arg1 count:(int)arg2 sampleRate:(float)arg3 settings:(id)arg4;
- (float)maxAbsoluteDifferenceFrom:(id)arg1;
- (void)setAmplitudes:(id)arg1;

@end
