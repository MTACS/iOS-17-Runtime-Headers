
@interface HRAWaveformResult : NSObject {
    unsigned long long  _classification;
    NSNumber * _heartRateBPM;
    NSData * _sampleData;
    float  _samplingFrequencyHz;
    NSDate * _startDate;
}

@property (nonatomic, readonly) unsigned long long classification;
@property (nonatomic, readonly) NSNumber *heartRateBPM;
@property (nonatomic, readonly) NSData *sampleData;
@property (nonatomic, readonly) float samplingFrequencyHz;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (unsigned long long)classification;
- (id)heartRateBPM;
- (id)initWithSamples:(const float*)arg1 count:(unsigned long long)arg2 samplingRate:(float)arg3 startDate:(double)arg4 heartRate:(id)arg5 classification:(unsigned long long)arg6;
- (id)sampleData;
- (float)samplingFrequencyHz;
- (id)startDate;

@end
