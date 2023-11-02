
@interface CSAudioZeroCounter : NSObject {
    unsigned int  _analyzeStep;
    unsigned int  _continuousZeroCounter;
    unsigned int  _maxContinuousZeroCount;
    NSString * _methodToken;
    unsigned int  _numChannels;
    float  _sampleRate;
    bool  _shouldDeinterleaveAudio;
    unsigned int  _zeroCounterWinSz;
    unsigned int  _zeroCounterWinSzForReport;
}

- (void).cxx_destruct;
- (void)getZeroStatisticsFromBuffer:(id)arg1 entireSamples:(unsigned int)arg2;
- (id)initWithToken:(id)arg1 sampleRate:(float)arg2 numChannels:(unsigned int)arg3;
- (void)resetWithSampleRate:(float)arg1;
- (void)stopCountingZeroStatisticsWithReporter:(id)arg1;

@end
