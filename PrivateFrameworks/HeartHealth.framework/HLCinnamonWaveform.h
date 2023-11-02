
@interface HLCinnamonWaveform : NSObject {
    const char * _flags;
    unsigned long long  _numberOfSamples;
    const float * _samples;
    float  _samplingRate;
    NSDate * _startDate;
}

@property (nonatomic, readonly) const char *flags;
@property (nonatomic, readonly) unsigned long long numberOfSamples;
@property (nonatomic, readonly) const float*samples;
@property (nonatomic, readonly) float samplingRate;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (const char *)flags;
- (unsigned long long)numberOfSamples;
- (const float*)samples;
- (float)samplingRate;
- (id)startDate;

@end
